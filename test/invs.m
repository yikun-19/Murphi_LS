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