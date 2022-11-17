const

  NODE_NUM : 2;

type

  NODE : scalarset(NODE_NUM);

  OTHER : enum {Other};

  ABS_NODE : union {NODE, OTHER};

  CACHE_STATE : enum {CACHE_I, CACHE_S, CACHE_E};

  NODE_CMD : enum {NODE_None, NODE_Get, NODE_GetX};

  NODE_STATE : record
    ProcCmd : NODE_CMD;
    InvMarked : boolean;
    CacheState : CACHE_STATE;
  end;

  DIR_STATE : record
    Pending : boolean;
    Local : boolean;
    Dirty : boolean;
    HeadVld : boolean;
    HeadPtr : ABS_NODE;
    ShrVld : boolean;
    ShrSet : array [NODE] of boolean;
    InvSet : array [NODE] of boolean;
  end;

  UNI_CMD : enum {UNI_None, UNI_Get, UNI_GetX, UNI_Put, UNI_PutX, UNI_Nak};

  UNI_MSG : record
    Cmd : UNI_CMD;
    Proc : ABS_NODE;
    HomeProc : boolean;
  end;

  INV_CMD : enum {INV_None, INV_Inv, INV_InvAck};

  INV_MSG : record
    Cmd : INV_CMD;
  end;

  RP_CMD : enum {RP_None, RP_Replace};

  RP_MSG : record
    Cmd : RP_CMD;
  end;

  WB_CMD : enum {WB_None, WB_Wb};

  WB_MSG : record
    Cmd : WB_CMD;
    Proc : ABS_NODE;
  end;

  SHWB_CMD : enum {SHWB_None, SHWB_ShWb, SHWB_FAck};

  SHWB_MSG : record
    Cmd : SHWB_CMD;
    Proc : ABS_NODE;
  end;

  NAKC_CMD : enum {NAKC_None, NAKC_Nakc};

  NAKC_MSG : record
    Cmd : NAKC_CMD;
  end;

  STATE : record
    Proc : array [NODE] of NODE_STATE;
    HomeProc : NODE_STATE;
    Dir : DIR_STATE;
    UniMsg : array [NODE] of UNI_MSG;
    HomeUniMsg : UNI_MSG;
    InvMsg : array [NODE] of INV_MSG;
    RpMsg : array [NODE] of RP_MSG;
    WbMsg : WB_MSG;
    ShWbMsg : SHWB_MSG;
    NakcMsg : NAKC_MSG;
    PendReqSrc : ABS_NODE;
    HomePendReqSrc : boolean;
    Collecting : boolean;
    FwdCmd : UNI_CMD;
  end;

var

  Sta : STATE;

startstate "Init"
  undefine Sta;
  Sta.Dir.Pending := false;
  Sta.Dir.Local := false;
  Sta.Dir.Dirty := false;
  Sta.Dir.HeadVld := false;
  Sta.Dir.ShrVld := false;
  Sta.WbMsg.Cmd := WB_None;
  Sta.ShWbMsg.Cmd := SHWB_None;
  Sta.NakcMsg.Cmd := NAKC_None;
  for p : NODE do
    Sta.Proc[p].ProcCmd := NODE_None;
    Sta.Proc[p].InvMarked := false;
    Sta.Proc[p].CacheState := CACHE_I;
    Sta.Dir.ShrSet[p] := false;
    Sta.Dir.InvSet[p] := false;
    Sta.InvMsg[p].Cmd := INV_None;
    Sta.RpMsg[p].Cmd := RP_None;
    Sta.UniMsg[p].Cmd := UNI_None;
    Sta.UniMsg[p].HomeProc := false;
  end;
  Sta.HomeProc.ProcCmd := NODE_None;
  Sta.HomeProc.InvMarked := false;
  Sta.HomeProc.CacheState := CACHE_I;
  Sta.HomeUniMsg.Cmd := UNI_None;
  Sta.HomeUniMsg.HomeProc := false;
  Sta.HomePendReqSrc := false;
  Sta.Collecting := false;
  Sta.FwdCmd := UNI_None;
endstartstate;

ruleset dst : NODE do
rule "ABS_NI_Remote_GetX_Nak"
  Sta.Proc[dst].CacheState != CACHE_E
==>
begin
  Sta.NakcMsg.Cmd := NAKC_Nakc;
  Sta.FwdCmd := UNI_None;
endrule;
endruleset;

ruleset src : NODE do
rule "ABS_NI_Remote_GetX_Nak"
  Sta.UniMsg[src].Cmd = UNI_GetX &
  !Sta.UniMsg[src].HomeProc &
  Sta.UniMsg[src].Proc = Other
==>
begin
  Sta.UniMsg[src].Cmd := UNI_Nak;
  Sta.UniMsg[src].HomeProc := false;
  Sta.UniMsg[src].Proc := Other;
  Sta.NakcMsg.Cmd := NAKC_Nakc;
  Sta.FwdCmd := UNI_None;
endrule;
endruleset;

ruleset dst : NODE do
rule "ABS_NI_Remote_GetX_PutX"
  Sta.Proc[dst].CacheState = CACHE_E
==>
begin
  Sta.Proc[dst].CacheState := CACHE_I;
  Sta.ShWbMsg.Cmd := SHWB_FAck;
  Sta.ShWbMsg.Proc := Other;
  Sta.FwdCmd := UNI_None;
endrule;
endruleset;

ruleset src : NODE do
rule "ABS_NI_Remote_GetX_PutX"
  Sta.UniMsg[src].Cmd = UNI_GetX &
  !Sta.UniMsg[src].HomeProc &
  Sta.UniMsg[src].Proc = Other
==>
begin
  Sta.UniMsg[src].Cmd := UNI_PutX;
  Sta.UniMsg[src].HomeProc := false;
  Sta.UniMsg[src].Proc := Other;
  Sta.ShWbMsg.Cmd := SHWB_FAck;
  Sta.ShWbMsg.Proc := src;
  Sta.FwdCmd := UNI_None;
endrule;
endruleset;

invariant "auxinv_1"
  forall i : NODE do
    Sta.UniMsg[i].Cmd = UNI_Get ->
    (  Sta.FwdCmd != UNI_Nak)
  end;


invariant "auxinv_2"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.FwdCmd != UNI_Nak))
    end
  end;


invariant "auxinv_3"
  forall i : NODE do
    Sta.UniMsg[i].Cmd = UNI_Get ->
    (  Sta.FwdCmd != UNI_Put)
  end;


invariant "auxinv_4"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.FwdCmd != UNI_Put))
    end
  end;


invariant "auxinv_5"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.Dir.ShrVld = false))
    end
  end;


invariant "auxinv_6"
  forall i : NODE do
    Sta.UniMsg[i].Cmd = UNI_Get ->
    (  Sta.FwdCmd != UNI_PutX)
  end;


invariant "auxinv_7"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.FwdCmd != UNI_PutX))
    end
  end;


invariant "auxinv_8"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.WbMsg.Cmd != WB_Wb))
    end
  end;


invariant "auxinv_9"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.Dir.HeadPtr != j))
    end
  end;


invariant "auxinv_10"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get ->
        (  Sta.Dir.HeadPtr != j))
    end
  end;


invariant "auxinv_11"
  forall i : NODE do
    Sta.UniMsg[i].Cmd = UNI_Get ->
    (  Sta.Dir.HeadPtr != i)
  end;


invariant "auxinv_12"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.Dir.HeadPtr != i))
    end
  end;


invariant "auxinv_13"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.ShWbMsg.Proc != j))
    end
  end;


invariant "auxinv_14"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.ShWbMsg.Proc != i))
    end
  end;


invariant "auxinv_15"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.ShWbMsg.Cmd != SHWB_FAck))
    end
  end;


invariant "auxinv_16"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.ShWbMsg.Cmd != SHWB_ShWb))
    end
  end;


invariant "auxinv_17"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.HomeUniMsg.Cmd != UNI_Put))
    end
  end;


invariant "auxinv_18"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.Dir.ShrSet[j] = false))
    end
  end;


invariant "auxinv_19"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.Dir.ShrSet[i] = false))
    end
  end;


invariant "auxinv_20"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.HomeProc.InvMarked = false))
    end
  end;


invariant "auxinv_21"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.HomeUniMsg.Cmd != UNI_PutX))
    end
  end;


invariant "auxinv_22"
  forall i : NODE do
    Sta.UniMsg[i].Cmd = UNI_Get ->
    (  Sta.HomeProc.InvMarked = false)
  end;


invariant "auxinv_23"
  forall i : NODE do
    Sta.UniMsg[i].Cmd = UNI_Get ->
    (  Sta.HomeUniMsg.HomeProc = false)
  end;


invariant "auxinv_24"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.HomeUniMsg.HomeProc = false))
    end
  end;


invariant "auxinv_25"
  forall i : NODE do
    Sta.UniMsg[i].Cmd = UNI_Get ->
    (  Sta.UniMsg[i].Cmd != UNI_Nak)
  end;


invariant "auxinv_26"
  forall i : NODE do
    Sta.UniMsg[i].Cmd = UNI_Get ->
    (  Sta.UniMsg[i].Proc != i)
  end;


invariant "auxinv_27"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.UniMsg[i].Proc != i))
    end
  end;


invariant "auxinv_28"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get ->
        (  Sta.UniMsg[j].Proc != j))
    end
  end;


invariant "auxinv_29"
  forall i : NODE do
    Sta.UniMsg[i].Cmd = UNI_Get ->
    (  Sta.UniMsg[i].Cmd != UNI_Put)
  end;


invariant "auxinv_30"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.UniMsg[j].Proc != j))
    end
  end;


invariant "auxinv_31"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.UniMsg[j].Cmd != UNI_Put))
    end
  end;


invariant "auxinv_32"
  forall i : NODE do
    Sta.UniMsg[i].Cmd = UNI_Get ->
    (  Sta.UniMsg[i].Cmd != UNI_GetX)
  end;


invariant "auxinv_33"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.UniMsg[j].Cmd != UNI_PutX))
    end
  end;


invariant "auxinv_34"
  forall i : NODE do
    Sta.UniMsg[i].Cmd = UNI_Get ->
    (  Sta.UniMsg[i].Cmd != UNI_PutX)
  end;


invariant "auxinv_35"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.UniMsg[i].HomeProc = false))
    end
  end;


invariant "auxinv_36"
  forall i : NODE do
    Sta.UniMsg[i].Cmd = UNI_Get ->
    (  Sta.Proc[i].ProcCmd = NODE_Get)
  end;


invariant "auxinv_37"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.Proc[i].CacheState = CACHE_I))
    end
  end;


invariant "auxinv_38"
  forall i : NODE do
    Sta.UniMsg[i].Cmd = UNI_Get ->
    (  Sta.Proc[i].ProcCmd != NODE_None)
  end;


invariant "auxinv_39"
  forall i : NODE do
    Sta.UniMsg[i].Cmd = UNI_Get ->
    (  Sta.Proc[i].ProcCmd != NODE_GetX)
  end;


invariant "auxinv_40"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.Proc[i].ProcCmd != NODE_None))
    end
  end;


invariant "auxinv_41"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.Proc[j].CacheState = CACHE_I))
    end
  end;


invariant "auxinv_42"
  forall i : NODE do
    Sta.UniMsg[i].Cmd = UNI_Get ->
    (  Sta.Proc[i].CacheState = CACHE_I)
  end;


invariant "auxinv_43"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.Proc[i].CacheState != CACHE_E))
    end
  end;


invariant "auxinv_44"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.Proc[i].CacheState != CACHE_S))
    end
  end;


invariant "auxinv_45"
  forall i : NODE do
    Sta.UniMsg[i].Cmd = UNI_Get ->
    (  Sta.Proc[i].CacheState != CACHE_E)
  end;


invariant "auxinv_46"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.Proc[j].CacheState != CACHE_E))
    end
  end;


invariant "auxinv_47"
  forall i : NODE do
    Sta.UniMsg[i].Cmd = UNI_Get ->
    (  Sta.Proc[i].CacheState != CACHE_S)
  end;


invariant "auxinv_48"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Proc = j ->
        (  Sta.Proc[j].CacheState != CACHE_S))
    end
  end;


invariant "auxinv_49"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.FwdCmd = UNI_Get))
    end
  end;


invariant "auxinv_50"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.FwdCmd != UNI_Put))
    end
  end;


invariant "auxinv_51"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.FwdCmd != UNI_Nak))
    end
  end;


invariant "auxinv_52"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.Dir.Local = false))
    end
  end;


invariant "auxinv_53"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.Dir.Dirty = false))
    end
  end;


invariant "auxinv_54"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.Dir.Pending = true))
    end
  end;


invariant "auxinv_55"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.Dir.ShrVld = false))
    end
  end;


invariant "auxinv_56"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.FwdCmd != UNI_None))
    end
  end;


invariant "auxinv_57"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.Collecting = false))
    end
  end;


invariant "auxinv_58"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.FwdCmd != UNI_PutX))
    end
  end;


invariant "auxinv_59"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.FwdCmd != UNI_GetX))
    end
  end;


invariant "auxinv_60"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.WbMsg.Cmd != WB_Wb))
    end
  end;


invariant "auxinv_61"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.PendReqSrc = i))
    end
  end;


invariant "auxinv_62"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.Dir.HeadVld = false))
    end
  end;


invariant "auxinv_63"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.PendReqSrc != j))
    end
  end;


invariant "auxinv_64"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.Dir.HeadPtr != i))
    end
  end;


invariant "auxinv_65"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.Dir.HeadPtr != j))
    end
  end;


invariant "auxinv_66"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.HomePendReqSrc = false))
    end
  end;


invariant "auxinv_67"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.ShWbMsg.Proc != j))
    end
  end;


invariant "auxinv_68"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.ShWbMsg.Proc != i))
    end
  end;


invariant "auxinv_69"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.ShWbMsg.Cmd != SHWB_FAck))
    end
  end;


invariant "auxinv_70"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.NakcMsg.Cmd != NAKC_Nakc))
    end
  end;


invariant "auxinv_71"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.ShWbMsg.Cmd != SHWB_ShWb))
    end
  end;


invariant "auxinv_72"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.HomeUniMsg.Cmd != UNI_Put))
    end
  end;


invariant "auxinv_73"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.HomeUniMsg.Cmd != UNI_Get))
    end
  end;


invariant "auxinv_74"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.HomeUniMsg.Proc != j))
    end
  end;


invariant "auxinv_75"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.Dir.InvSet[j] = false))
    end
  end;


invariant "auxinv_76"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.HomeUniMsg.Cmd != UNI_GetX))
    end
  end;


invariant "auxinv_77"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.Dir.InvSet[i] = false))
    end
  end;


invariant "auxinv_78"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.Dir.ShrSet[i] = false))
    end
  end;


invariant "auxinv_79"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.HomeUniMsg.Cmd != UNI_PutX))
    end
  end;


invariant "auxinv_80"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.HomeProc.InvMarked = false))
    end
  end;


invariant "auxinv_81"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.Dir.ShrSet[j] = false))
    end
  end;


invariant "auxinv_82"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.HomeUniMsg.HomeProc = false))
    end
  end;


invariant "auxinv_83"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.UniMsg[i].Cmd != UNI_Nak))
    end
  end;


invariant "auxinv_84"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.UniMsg[j].Proc != j))
    end
  end;


invariant "auxinv_85"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.InvMsg[i].Cmd != INV_Inv))
    end
  end;


invariant "auxinv_86"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.InvMsg[j].Cmd != INV_Inv))
    end
  end;


invariant "auxinv_87"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.UniMsg[i].Cmd != UNI_Put))
    end
  end;


invariant "auxinv_88"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.UniMsg[j].Cmd != UNI_Put))
    end
  end;


invariant "auxinv_89"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.UniMsg[i].Proc != i))
    end
  end;


invariant "auxinv_90"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.UniMsg[j].Proc != i))
    end
  end;


invariant "auxinv_91"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.HomeProc.CacheState = CACHE_I))
    end
  end;


invariant "auxinv_92"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.UniMsg[j].Cmd != UNI_PutX))
    end
  end;


invariant "auxinv_93"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.HomeProc.CacheState != CACHE_S))
    end
  end;


invariant "auxinv_94"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.HomeProc.CacheState != CACHE_E))
    end
  end;


invariant "auxinv_95"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.UniMsg[i].Cmd != UNI_GetX))
    end
  end;


invariant "auxinv_96"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.Proc[j].InvMarked = false))
    end
  end;


invariant "auxinv_97"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.UniMsg[i].Cmd != UNI_PutX))
    end
  end;


invariant "auxinv_98"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.UniMsg[i].HomeProc = false))
    end
  end;


invariant "auxinv_99"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.Proc[i].ProcCmd = NODE_Get))
    end
  end;


invariant "auxinv_100"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.RpMsg[i].Cmd != RP_Replace))
    end
  end;


invariant "auxinv_101"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.InvMsg[i].Cmd != INV_InvAck))
    end
  end;


invariant "auxinv_102"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.InvMsg[j].Cmd != INV_InvAck))
    end
  end;


invariant "auxinv_103"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.Proc[j].CacheState = CACHE_I))
    end
  end;


invariant "auxinv_104"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.Proc[i].ProcCmd != NODE_None))
    end
  end;


invariant "auxinv_105"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.Proc[i].CacheState = CACHE_I))
    end
  end;


invariant "auxinv_106"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.Proc[i].ProcCmd != NODE_GetX))
    end
  end;


invariant "auxinv_107"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.Proc[j].CacheState != CACHE_E))
    end
  end;


invariant "auxinv_108"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.Proc[j].CacheState != CACHE_S))
    end
  end;


invariant "auxinv_109"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.Proc[i].CacheState != CACHE_S))
    end
  end;


invariant "auxinv_110"
  forall i : NODE do
    forall j : NODE do
      i != j ->
      (  Sta.UniMsg[i].Cmd = UNI_Get &
        Sta.UniMsg[i].Proc = j ->
        (  Sta.Proc[i].CacheState != CACHE_E))
    end
  end;


rule "ABS_NI_Remote_Get_Put_Home"
  Sta.HomeUniMsg.Cmd = UNI_Get &
  !Sta.HomeUniMsg.HomeProc &
  Sta.HomeUniMsg.Proc = Other
==>
begin
  Sta.HomeUniMsg.Cmd := UNI_Put;
  Sta.HomeUniMsg.HomeProc := false;
  Sta.HomeUniMsg.Proc := Other;
  Sta.FwdCmd := UNI_None;
endrule;

rule "ABS_NI_Local_GetX_GetX"
  !Sta.Dir.Pending &
  Sta.Dir.Dirty &
  !Sta.Dir.Local
==>
begin
  Sta.Dir.Pending := true;
  Sta.FwdCmd := UNI_GetX;
  Sta.HomePendReqSrc := false;
  Sta.PendReqSrc := Other;
  Sta.Collecting := false;
endrule;

rule "ABS_NI_Local_GetX_PutX1"
  !Sta.Dir.Pending &
  ( Sta.Dir.Dirty ->
    (  Sta.Dir.Local &
      Sta.HomeProc.CacheState = CACHE_E) ) &
  Sta.Dir.Dirty
==>
begin
  Sta.Dir.Local := false;
  Sta.Dir.Dirty := true;
  Sta.Dir.HeadVld := true;
  Sta.Dir.HeadPtr := Other;
  Sta.Dir.ShrVld := false;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
    Sta.Dir.InvSet[p] := false;
  end;
  Sta.HomeProc.CacheState := CACHE_I;
endrule;

rule "ABS_NI_Local_GetX_PutX2"
  !Sta.Dir.Pending &
  ( Sta.Dir.Dirty ->
    (  Sta.Dir.Local &
      Sta.HomeProc.CacheState = CACHE_E) ) &
  !Sta.Dir.Dirty &
  ( Sta.Dir.HeadVld ->
    (  Sta.Dir.HeadPtr = Other &
      forall p : NODE do
        !Sta.Dir.ShrSet[p]
      end) )
==>
begin
  Sta.Dir.Dirty := true;
  Sta.Dir.HeadVld := true;
  Sta.Dir.HeadPtr := Other;
  Sta.Dir.ShrVld := false;
  for p : NODE do
    Sta.Dir.ShrSet[p] := false;
    Sta.Dir.InvSet[p] := false;
  end;
  Sta.HomeProc.CacheState := CACHE_I;
  if Sta.Dir.Local then
    Sta.HomeProc.CacheState := CACHE_I;
    if Sta.HomeProc.ProcCmd = NODE_Get then
      Sta.HomeProc.InvMarked := true;
    end;
  end;
  Sta.Dir.Local := false;
endrule;

rule "ABS_NI_Local_GetX_PutX3"
  !Sta.Dir.Pending &
  ( Sta.Dir.Dirty ->
    (  Sta.Dir.Local &
      Sta.HomeProc.CacheState = CACHE_E) ) &
  !Sta.Dir.Dirty
==>
begin
  Sta.Dir.Pending := true;
  Sta.Dir.Dirty := true;
  for p : NODE do
    if Sta.Dir.ShrVld &
    Sta.Dir.ShrSet[p] |
    Sta.Dir.HeadVld &
    Sta.Dir.HeadPtr = p then
      Sta.Dir.InvSet[p] := true;
    else
      Sta.Dir.InvSet[p] := false;
    end;
    if Sta.Dir.ShrVld &
    Sta.Dir.ShrSet[p] |
    Sta.Dir.HeadVld &
    Sta.Dir.HeadPtr = p then
      Sta.InvMsg[p].Cmd := INV_Inv;
    else
      Sta.InvMsg[p].Cmd := INV_None;
    end;
    Sta.Dir.ShrSet[p] := false;
  end;
  Sta.Dir.HeadVld := true;
  Sta.Dir.HeadPtr := Other;
  Sta.Dir.ShrVld := false;
  if Sta.Dir.Local then
    Sta.HomeProc.CacheState := CACHE_I;
    if Sta.HomeProc.ProcCmd = NODE_Get then
      Sta.HomeProc.InvMarked := true;
    end;
  end;
  Sta.Dir.Local := false;
  Sta.HomePendReqSrc := false;
  Sta.PendReqSrc := Other;
  Sta.Collecting := true;
endrule;

rule "ABS_NI_Remote_GetX_Nak"
  true
==>
begin
  Sta.NakcMsg.Cmd := NAKC_Nakc;
  Sta.FwdCmd := UNI_None;
endrule;

rule "ABS_NI_Remote_GetX_Nak_Home"
  Sta.HomeUniMsg.Cmd = UNI_GetX &
  !Sta.HomeUniMsg.HomeProc &
  Sta.HomeUniMsg.Proc = Other
==>
begin
  Sta.HomeUniMsg.Cmd := UNI_Nak;
  Sta.HomeUniMsg.HomeProc := false;
  Sta.HomeUniMsg.Proc := Other;
  Sta.NakcMsg.Cmd := NAKC_Nakc;
  Sta.FwdCmd := UNI_None;
endrule;

rule "ABS_NI_Remote_GetX_PutX"
  true
==>
begin
  Sta.ShWbMsg.Cmd := SHWB_FAck;
  Sta.ShWbMsg.Proc := Other;
  Sta.FwdCmd := UNI_None;
endrule;

rule "ABS_NI_Remote_GetX_PutX_Home"
  Sta.HomeUniMsg.Cmd = UNI_GetX &
  !Sta.HomeUniMsg.HomeProc &
  Sta.HomeUniMsg.Proc = Other
==>
begin
  Sta.HomeUniMsg.Cmd := UNI_PutX;
  Sta.HomeUniMsg.HomeProc := false;
  Sta.HomeUniMsg.Proc := Other;
  Sta.FwdCmd := UNI_None;
endrule;

rule "ABS_NI_Local_Put"
  Sta.HomeUniMsg.Cmd = UNI_Put
==>
begin
  Sta.HomeUniMsg.Cmd := UNI_None;
  undefine Sta.HomeUniMsg.Proc;
  Sta.Dir.Pending := false;
  Sta.Dir.Dirty := false;
  Sta.Dir.Local := true;
  Sta.HomeProc.ProcCmd := NODE_None;
  if Sta.HomeProc.InvMarked then
    Sta.HomeProc.InvMarked := false;
    Sta.HomeProc.CacheState := CACHE_I;
  else
    Sta.HomeProc.CacheState := CACHE_S;
  end;
endrule;

rule "ABS_NI_Local_PutXAcksDone"
  Sta.HomeUniMsg.Cmd = UNI_PutX
==>
begin
  Sta.HomeUniMsg.Cmd := UNI_None;
  undefine Sta.HomeUniMsg.Proc;
  Sta.Dir.Pending := false;
  Sta.Dir.Local := true;
  Sta.Dir.HeadVld := false;
  undefine Sta.Dir.HeadPtr;
  Sta.HomeProc.ProcCmd := NODE_None;
  Sta.HomeProc.InvMarked := false;
  Sta.HomeProc.CacheState := CACHE_E;
endrule;

rule "ABS_NI_InvAck1"
  Sta.Dir.Pending &
  forall p : NODE do
    !Sta.Dir.InvSet[p]
  end
==>
begin
  Sta.Dir.Pending := false;
  if Sta.Dir.Local &
  !Sta.Dir.Dirty then
    Sta.Dir.Local := false;
  end;
  Sta.Collecting := false;
endrule;

rule "ABS_NI_Wb"
  Sta.WbMsg.Cmd = WB_Wb
==>
begin
  Sta.WbMsg.Cmd := WB_None;
  undefine Sta.WbMsg.Proc;
  Sta.Dir.Dirty := false;
  Sta.Dir.HeadVld := false;
  undefine Sta.Dir.HeadPtr;
endrule;

rule "ABS_NI_FAck"
  Sta.ShWbMsg.Cmd = SHWB_FAck
==>
begin
  Sta.ShWbMsg.Cmd := SHWB_None;
  Sta.Dir.Pending := false;
  if Sta.Dir.Dirty then
    Sta.Dir.HeadPtr := Sta.ShWbMsg.Proc;
  end;
  undefine Sta.ShWbMsg.Proc;
endrule;

rule "ABS_NI_ShWb"
  Sta.ShWbMsg.Cmd = SHWB_ShWb &
  Sta.ShWbMsg.Proc = Other
==>
begin
  Sta.ShWbMsg.Cmd := SHWB_None;
  Sta.Dir.Pending := false;
  Sta.Dir.Dirty := false;
  Sta.Dir.ShrVld := true;
  for p : NODE do
    Sta.Dir.InvSet[p] := Sta.Dir.ShrSet[p];
  end;
  undefine Sta.ShWbMsg.Proc;
endrule;

ruleset j : NODE do
rule "ABS_NI_Remote_Get_Put_i"
  Sta.Proc[j].CacheState = CACHE_E &
  Sta.FwdCmd != UNI_Nak &
  Sta.ShWbMsg.Cmd != SHWB_FAck &
  Sta.FwdCmd != UNI_Put &
  Sta.Dir.ShrVld = false &
  Sta.HomePendReqSrc = false &
  Sta.FwdCmd != UNI_PutX &
  Sta.Dir.Pending = true &
  Sta.HomeUniMsg.Cmd != UNI_Put &
  Sta.HomeUniMsg.Cmd != UNI_GetX &
  Sta.FwdCmd != UNI_Nak &
  Sta.HomeUniMsg.Cmd != UNI_Put &
  Sta.NakcMsg.Cmd != NAKC_Nakc &
  Sta.FwdCmd != UNI_Put &
  Sta.Dir.ShrVld = false &
  Sta.HomeUniMsg.HomeProc = false &
  Sta.FwdCmd != UNI_Nak &
  Sta.FwdCmd != UNI_None &
  Sta.HomeProc.CacheState != CACHE_S &
  Sta.Collecting = false &
  Sta.HomeProc.InvMarked = false &
  Sta.HomeUniMsg.Cmd != UNI_PutX &
  Sta.ShWbMsg.Cmd != SHWB_FAck &
  Sta.HomeUniMsg.Cmd != UNI_Get &
  Sta.FwdCmd != UNI_PutX &
  Sta.HomeProc.InvMarked = false &
  Sta.HomeProc.CacheState != CACHE_E &
  Sta.HomeUniMsg.HomeProc = false &
  Sta.Dir.Local = false &
  Sta.HomeUniMsg.HomeProc = false &
  Sta.Dir.HeadVld = false &
  Sta.FwdCmd = UNI_Get &
  Sta.HomeUniMsg.Cmd != UNI_PutX &
  Sta.FwdCmd != UNI_PutX &
  Sta.HomeProc.CacheState = CACHE_I &
  Sta.Dir.Dirty = false &
  Sta.ShWbMsg.Cmd != SHWB_ShWb &
  Sta.FwdCmd != UNI_GetX &
  Sta.FwdCmd != UNI_Put &
  Sta.HomeProc.InvMarked = false &
  Sta.ShWbMsg.Cmd != SHWB_ShWb &
  Sta.WbMsg.Cmd != WB_Wb &
  Sta.WbMsg.Cmd != WB_Wb
==>
begin
  Sta.Proc[j].CacheState := CACHE_S;
  Sta.FwdCmd := UNI_None;
  Sta.ShWbMsg.Cmd := SHWB_ShWb;
  Sta.ShWbMsg.Proc := Other;
endrule;
endruleset;

ruleset i : NODE do
rule "ABS_NI_Remote_Get_Put_j"
  !Sta.UniMsg[i].HomeProc &
  Sta.UniMsg[i].Proc = Other &
  Sta.UniMsg[i].Cmd = UNI_Get &
  Sta.FwdCmd != UNI_Nak &
  Sta.ShWbMsg.Cmd != SHWB_FAck &
  Sta.FwdCmd != UNI_Put &
  Sta.Dir.ShrVld = false &
  Sta.HomePendReqSrc = false &
  Sta.FwdCmd != UNI_PutX &
  Sta.Dir.Pending = true &
  Sta.HomeUniMsg.Cmd != UNI_Put &
  Sta.HomeUniMsg.Cmd != UNI_GetX &
  Sta.FwdCmd != UNI_Nak &
  Sta.HomeUniMsg.Cmd != UNI_Put &
  Sta.NakcMsg.Cmd != NAKC_Nakc &
  Sta.FwdCmd != UNI_Put &
  Sta.Dir.ShrVld = false &
  Sta.HomeUniMsg.HomeProc = false &
  Sta.FwdCmd != UNI_Nak &
  Sta.FwdCmd != UNI_None &
  Sta.HomeProc.CacheState != CACHE_S &
  Sta.Collecting = false &
  Sta.HomeProc.InvMarked = false &
  Sta.HomeUniMsg.Cmd != UNI_PutX &
  Sta.ShWbMsg.Cmd != SHWB_FAck &
  Sta.HomeUniMsg.Cmd != UNI_Get &
  Sta.FwdCmd != UNI_PutX &
  Sta.HomeProc.InvMarked = false &
  Sta.HomeProc.CacheState != CACHE_E &
  Sta.HomeUniMsg.HomeProc = false &
  Sta.Dir.Local = false &
  Sta.HomeUniMsg.HomeProc = false &
  Sta.Dir.HeadVld = false &
  Sta.FwdCmd = UNI_Get &
  Sta.HomeUniMsg.Cmd != UNI_PutX &
  Sta.FwdCmd != UNI_PutX &
  Sta.HomeProc.CacheState = CACHE_I &
  Sta.Dir.Dirty = false &
  Sta.ShWbMsg.Cmd != SHWB_ShWb &
  Sta.FwdCmd != UNI_GetX &
  Sta.FwdCmd != UNI_Put &
  Sta.HomeProc.InvMarked = false &
  Sta.ShWbMsg.Cmd != SHWB_ShWb &
  Sta.WbMsg.Cmd != WB_Wb &
  Sta.WbMsg.Cmd != WB_Wb
==>
begin
  Sta.UniMsg[i].Cmd := UNI_Put;
  Sta.UniMsg[i].HomeProc := false;
  Sta.FwdCmd := UNI_None;
  Sta.UniMsg[i].Proc := Other;
  Sta.ShWbMsg.Cmd := SHWB_ShWb;
  Sta.ShWbMsg.Proc := i;
endrule;
endruleset;

rule "ABS_NI_Remote_Get_Put_iandj"
  Sta.FwdCmd != UNI_Nak &
  Sta.ShWbMsg.Cmd != SHWB_FAck &
  Sta.FwdCmd != UNI_Put &
  Sta.Dir.ShrVld = false &
  Sta.HomePendReqSrc = false &
  Sta.FwdCmd != UNI_PutX &
  Sta.Dir.Pending = true &
  Sta.HomeUniMsg.Cmd != UNI_Put &
  Sta.HomeUniMsg.Cmd != UNI_GetX &
  Sta.FwdCmd != UNI_Nak &
  Sta.HomeUniMsg.Cmd != UNI_Put &
  Sta.NakcMsg.Cmd != NAKC_Nakc &
  Sta.FwdCmd != UNI_Put &
  Sta.Dir.ShrVld = false &
  Sta.HomeUniMsg.HomeProc = false &
  Sta.FwdCmd != UNI_Nak &
  Sta.FwdCmd != UNI_None &
  Sta.HomeProc.CacheState != CACHE_S &
  Sta.Collecting = false &
  Sta.HomeProc.InvMarked = false &
  Sta.HomeUniMsg.Cmd != UNI_PutX &
  Sta.ShWbMsg.Cmd != SHWB_FAck &
  Sta.HomeUniMsg.Cmd != UNI_Get &
  Sta.FwdCmd != UNI_PutX &
  Sta.HomeProc.InvMarked = false &
  Sta.HomeProc.CacheState != CACHE_E &
  Sta.HomeUniMsg.HomeProc = false &
  Sta.Dir.Local = false &
  Sta.HomeUniMsg.HomeProc = false &
  Sta.Dir.HeadVld = false &
  Sta.FwdCmd = UNI_Get &
  Sta.HomeUniMsg.Cmd != UNI_PutX &
  Sta.FwdCmd != UNI_PutX &
  Sta.HomeProc.CacheState = CACHE_I &
  Sta.Dir.Dirty = false &
  Sta.ShWbMsg.Cmd != SHWB_ShWb &
  Sta.FwdCmd != UNI_GetX &
  Sta.FwdCmd != UNI_Put &
  Sta.HomeProc.InvMarked = false &
  Sta.ShWbMsg.Cmd != SHWB_ShWb &
  Sta.WbMsg.Cmd != WB_Wb &
  Sta.WbMsg.Cmd != WB_Wb
==>
begin
  Sta.FwdCmd := UNI_None;
  Sta.ShWbMsg.Cmd := SHWB_ShWb;
  Sta.ShWbMsg.Proc := Other;
endrule;

