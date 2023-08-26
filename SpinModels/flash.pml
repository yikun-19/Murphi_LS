short NODE_NUM = 2;

mtype:CACHE_STATE = {CACHE_I, CACHE_S, CACHE_E}
mtype:NODE_CMD = {NODE_None, NODE_Get, NODE_GetX}

typedef NODE_STATE{
  mtype:NODE_CMD ProcCmd; 
  bool InvMarked;
  mtype:CACHE_STATE CacheState; 
}

typedef DIR_STATE{
  bool Pending;
  bool Local;
  bool Dirty;
  bool HeadVld;
  pid HeadPtr;
  bool ShrVld;
  bool ShrSet[2];
  bool InvSet[2];
}

mtype:UNI_CMD = {UNI_None, UNI_Get, UNI_GetX, UNI_Put, UNI_PutX, UNI_Nak}
mtype:INV_CMD = {INV_None, INV_Inv, INV_InvAck}
mtype:RP_CMD = {RP_None, RP_Replace}
mtype:WB_CMD = {WB_None, WB_Wb}
mtype:SHWB_CMD = {SHWB_None, SHWB_ShWb, SHWB_FAck}
mtype:NAKC_CMD = {NAKC_None, NAKC_Nakc}

typedef UNI_MSG{
  mtype:UNI_CMD Cmd; 
  pid Proc;
  bool HomeProc; 
}

typedef INV_MSG{
  mtype:INV_CMD Cmd; 
}

typedef RP_MSG{
  mtype:RP_CMD Cmd; 
}

typedef WB_MSG{
  mtype:WB_CMD Cmd; 
  pid Proc;
}

typedef SHWB_MSG{
  mtype:SHWB_CMD Cmd; 
  pid Proc;
}

typedef NAKC_MSG{
  mtype:NAKC_CMD Cmd; 
}

typedef STATE{
  NODE_STATE Proc[2];
  NODE_STATE HomeProc;
  DIR_STATE Dir;
  UNI_MSG UniMsg[2];
  UNI_MSG HomeUniMsg;
  INV_MSG InvMsg[2];
  RP_MSG RpMsg[2];
  WB_MSG WbMsg;
  SHWB_MSG ShWbMsg;
  NAKC_MSG NakcMsg;
  pid PendReqSrc;
  bool HomePendReqSrc;
  bool Collecting;
  mtype:UNI_CMD FwdCmd;
}

STATE Sta;

pid p;
pid i;
pid j;

#define forall_1_2 (0 == src || Sta.Dir.ShrSet[0] == false) && (1 == src || Sta.Dir.ShrSet[1] == false) 

#define forall_2_2 (0 == src || Sta.Dir.InvSet[0] == false) && (1 == src || Sta.Dir.InvSet[1] == false) 

// #define forall_1_8 (0 == src || Sta.Dir.ShrSet[0] == false) && (1 == src || Sta.Dir.ShrSet[1] == false) && (2 == src || Sta.Dir.ShrSet[2] == false) && (3 == src || Sta.Dir.ShrSet[3] == false) && (4 == src || Sta.Dir.ShrSet[4] == false) && (5 == src || Sta.Dir.ShrSet[5] == false) && (6 == src || Sta.Dir.ShrSet[6] == false) && (7 == src || Sta.Dir.ShrSet[7] == false) 

// #define forall_2_8 (0 == src || Sta.Dir.InvSet[0] == false) && (1 == src || Sta.Dir.InvSet[1] == false) && (2 == src || Sta.Dir.InvSet[2] == false) && (3 == src || Sta.Dir.InvSet[3] == false) && (4 == src || Sta.Dir.InvSet[4] == false) && (5 == src || Sta.Dir.InvSet[5] == false) && (6 == src || Sta.Dir.InvSet[6] == false) && (7 == src || Sta.Dir.InvSet[7] == false) 


proctype PI_Remote_Get(pid src) {
  do
  :: atomic {
    if
    :: (Sta.Proc[src].ProcCmd == NODE_None && Sta.Proc[src].CacheState == CACHE_I) -> 
        Sta.Proc[src].ProcCmd = NODE_Get;
        Sta.UniMsg[src].Cmd = UNI_Get;
        Sta.UniMsg[src].HomeProc = true;
        // undefine Sta.UniMsg[src].Proc; undefine?
    fi;
  }
  od
}

proctype PI_Local_Get_Get( ) {
  do
  :: atomic {
    if
    :: ( Sta.HomeProc.ProcCmd == NODE_None && Sta.HomeProc.CacheState == CACHE_I && !Sta.Dir.Pending && Sta.Dir.Dirty) -> 
        Sta.HomeProc.ProcCmd = NODE_Get; 
        Sta.Dir.Pending = true;
        Sta.HomeUniMsg.Cmd = UNI_Get;
        Sta.HomeUniMsg.HomeProc = false;
        Sta.HomeUniMsg.Proc = Sta.Dir.HeadPtr;
        Sta.FwdCmd = UNI_Get;
        Sta.HomePendReqSrc = true;
        // undefine Sta.PendReqSrc;
        Sta.Collecting = false;
    fi;
  }
  od
}

proctype PI_Local_Get_Put( ) {
  do
  :: atomic {
    if
    :: ( Sta.HomeProc.ProcCmd == NODE_None && Sta.HomeProc.CacheState == CACHE_I && !Sta.Dir.Pending && !Sta.Dir.Dirty) -> 
        Sta.Dir.Local = true;
        Sta.HomeProc.ProcCmd = NODE_None;
        if
        :: (Sta.HomeProc.InvMarked) ->
            Sta.HomeProc.InvMarked = false;
            Sta.HomeProc.CacheState = CACHE_I;
        :: else ->
            Sta.HomeProc.CacheState = CACHE_S;
        fi;
    fi;
  }
  od
}

proctype PI_Remote_GetX(pid src) {
  do
  :: atomic {
    if
    :: ( Sta.Proc[src].ProcCmd == NODE_None && Sta.Proc[src].CacheState == CACHE_I ) -> 
        Sta.Proc[src].ProcCmd = NODE_GetX;
        Sta.UniMsg[src].Cmd = UNI_GetX;
        Sta.UniMsg[src].HomeProc = true;
        // undefine Sta.UniMsg[src].Proc;
    fi;
  }
  od
}

proctype PI_Local_GetX_GetX( ) {
  do
  :: atomic {
    if
    :: ( Sta.HomeProc.ProcCmd == NODE_None && ( Sta.HomeProc.CacheState == CACHE_I || Sta.HomeProc.CacheState == CACHE_S ) && !Sta.Dir.Pending && Sta.Dir.Dirty ) -> 
        Sta.HomeProc.ProcCmd = NODE_GetX;
        Sta.Dir.Pending = true;
        Sta.HomeUniMsg.Cmd = UNI_GetX;
        Sta.HomeUniMsg.HomeProc = false;
        Sta.HomeUniMsg.Proc = Sta.Dir.HeadPtr;
        Sta.FwdCmd = UNI_GetX;
        Sta.HomePendReqSrc = true;
        // undefine Sta.PendReqSrc;
        Sta.Collecting = false;
    fi;
  }
  od
}

proctype PI_Local_GetX_PutX( ) {
  do
  :: atomic {
    if
    :: ( Sta.HomeProc.ProcCmd == NODE_None && ( Sta.HomeProc.CacheState == CACHE_I || Sta.HomeProc.CacheState == CACHE_S ) && !Sta.Dir.Pending && !Sta.Dir.Dirty ) -> 
        Sta.Dir.Local = true;
        Sta.Dir.Dirty = true;
        if
        :: ( Sta.Dir.HeadVld ) ->
            Sta.Dir.Pending = true;
            for (p : 0 .. NODE_NUM-1) { 
              if
              :: ( Sta.Dir.ShrVld && Sta.Dir.ShrSet[p] || Sta.Dir.HeadVld && Sta.Dir.HeadPtr == p ) ->
                  Sta.Dir.InvSet[p] = true;
              :: else ->
                  Sta.Dir.InvSet[p] = false;
              fi;

              if
              :: ( Sta.Dir.ShrVld && Sta.Dir.ShrSet[p] || Sta.Dir.HeadVld && Sta.Dir.HeadPtr == p ) ->
                  Sta.InvMsg[p].Cmd = INV_Inv;
              :: else ->
                  Sta.InvMsg[p].Cmd = INV_None;
              fi;
              Sta.Dir.ShrSet[p] = false;
            }
            Sta.Dir.HeadVld = false;
            // undefine Sta.Dir.HeadPtr;
            Sta.Dir.ShrVld = false;
            Sta.Collecting = true;
        :: else ->
            break;
        fi;

        Sta.HomeProc.ProcCmd = NODE_None;
        Sta.HomeProc.InvMarked = false;
        Sta.HomeProc.CacheState = CACHE_E;
    fi;
  }
  od
}

proctype PI_Remote_PutX(pid dst) {
  do
  :: atomic {
    if
    :: ( Sta.Proc[dst].ProcCmd == NODE_None && Sta.Proc[dst].CacheState == CACHE_E ) -> 
          Sta.Proc[dst].CacheState = CACHE_I;
          Sta.WbMsg.Cmd = WB_Wb;
          Sta.WbMsg.Proc = dst;
    fi;
  }
  od
}

proctype PI_Local_PutX( ) {
  do
  :: atomic {
    if
    :: ( Sta.HomeProc.ProcCmd == NODE_None && Sta.HomeProc.CacheState == CACHE_E ) -> 
          if
          :: ( Sta.Dir.Pending ) ->
              Sta.HomeProc.CacheState = CACHE_I;
              Sta.Dir.Dirty = false;
          :: else ->
              Sta.HomeProc.CacheState = CACHE_I;
              Sta.Dir.Local = false;
              Sta.Dir.Dirty = false;
          fi;
    fi;
  }
  od
}

proctype PI_Remote_Replace(pid src) {
  do
  :: atomic {
    if
    :: ( Sta.Proc[src].ProcCmd == NODE_None && Sta.Proc[src].CacheState == CACHE_S ) -> 
          Sta.Proc[src].CacheState = CACHE_I;
          Sta.RpMsg[src].Cmd = RP_Replace;
    fi;
  }
  od
}

proctype PI_Local_Replace( ) {
  do
  :: atomic {
    if
    :: ( Sta.HomeProc.ProcCmd == NODE_None && Sta.HomeProc.CacheState == CACHE_S ) -> 
          Sta.Dir.Local = false;
          Sta.HomeProc.CacheState = CACHE_I;
    fi;
  }
  od
}

proctype NI_Nak(pid dst) {
  do
  :: atomic {
    if
    :: ( Sta.UniMsg[dst].Cmd == UNI_Nak ) -> 
          Sta.UniMsg[dst].Cmd = UNI_None;
          Sta.UniMsg[dst].HomeProc = false;
          // undefine Sta.UniMsg[dst].Proc;
          Sta.Proc[dst].ProcCmd = NODE_None;
          Sta.Proc[dst].InvMarked = false;
    fi;
  }
  od
}

proctype NI_Nak_Home( ) {
  do
  :: atomic {
    if
    :: ( Sta.HomeUniMsg.Cmd == UNI_Nak ) -> 
          Sta.HomeUniMsg.Cmd = UNI_None;
          Sta.HomeUniMsg.HomeProc = false;
          // undefine Sta.HomeUniMsg.Proc;
          Sta.HomeProc.ProcCmd = NODE_None;
          Sta.HomeProc.InvMarked = false;
    fi;
  }
  od
}

proctype NI_Nak_Clear( ) {
  do
  :: atomic {
    if
    :: ( Sta.NakcMsg.Cmd == NAKC_Nakc ) -> 
          Sta.NakcMsg.Cmd = NAKC_None;
          Sta.Dir.Pending = false;
    fi;
  }
  od
}

proctype NI_Local_Get_Nak(pid src) {
  do
  :: atomic {
    if
    :: ( Sta.UniMsg[src].Cmd == UNI_Get && Sta.UniMsg[src].HomeProc && Sta.RpMsg[src].Cmd != RP_Replace && ( Sta.Dir.Pending || Sta.Dir.Dirty && Sta.Dir.Local && Sta.HomeProc.CacheState != CACHE_E || Sta.Dir.Dirty && !Sta.Dir.Local && Sta.Dir.HeadPtr == src ) ) -> 
          Sta.UniMsg[src].Cmd = UNI_Nak;
          Sta.UniMsg[src].HomeProc = true;
          // undefine Sta.UniMsg[src].Proc;
    fi;
  }
  od
}

proctype NI_Local_Get_Get(pid src) {
  do
  :: atomic {
    if
    :: ( Sta.UniMsg[src].Cmd == UNI_Get && Sta.UniMsg[src].HomeProc && Sta.RpMsg[src].Cmd != RP_Replace && !Sta.Dir.Pending && Sta.Dir.Dirty && !Sta.Dir.Local && Sta.Dir.HeadPtr != src ) -> 
          Sta.Dir.Pending = true;
          Sta.UniMsg[src].Cmd = UNI_Get;
          Sta.UniMsg[src].HomeProc = false;
          Sta.UniMsg[src].Proc = Sta.Dir.HeadPtr;
          Sta.FwdCmd = UNI_Get;
          Sta.HomePendReqSrc = false;
          Sta.PendReqSrc = src;
          Sta.Collecting = false;
    fi;
  }
  od
}

proctype NI_Local_Get_Put(pid src) {
  do
  :: atomic {
    if
    :: ( Sta.UniMsg[src].Cmd == UNI_Get && Sta.UniMsg[src].HomeProc && Sta.RpMsg[src].Cmd != RP_Replace && !Sta.Dir.Pending && (!Sta.Dir.Dirty || (Sta.Dir.Local && Sta.HomeProc.CacheState == CACHE_E)) ) -> 
        // condition include '->' and drop
        if
        :: ( Sta.Dir.Dirty ) ->
            Sta.Dir.Dirty = false;
            Sta.Dir.HeadVld = true;
            Sta.Dir.HeadPtr = src;
            Sta.HomeProc.CacheState = CACHE_S;
            Sta.UniMsg[src].Cmd = UNI_Put;
            Sta.UniMsg[src].HomeProc = true;
            // undefine Sta.UniMsg[src].Proc;
        :: else ->
            if
            :: (Sta.Dir.HeadVld) ->
                Sta.Dir.ShrVld = true;
                Sta.Dir.ShrSet[src] = true;
                Sta.Dir.InvSet[src] = true;
                for (p : 0 .. NODE_NUM-1) { 
                  if
                  :: ( p != src ) ->
                    Sta.Dir.InvSet[p] = Sta.Dir.ShrSet[p]; // p != src ?
                  :: else ->
                      break;
                  fi;
                }
            :: else ->
                Sta.Dir.HeadVld = true;
                Sta.Dir.HeadPtr = src;
            fi;
           
            Sta.UniMsg[src].Cmd = UNI_Put;
            Sta.UniMsg[src].HomeProc = true;
            // undefine Sta.UniMsg[src].Proc;
        fi;
    fi;
  }
  od
}

proctype NI_Remote_Get_Nak(pid src; pid dst) {
  do
  :: atomic {
    if
    :: ( src != dst && Sta.UniMsg[src].Cmd == UNI_Get && !Sta.UniMsg[src].HomeProc && Sta.UniMsg[src].Proc == dst && Sta.Proc[dst].CacheState != CACHE_E ) -> 
          Sta.UniMsg[src].Cmd = UNI_Nak;
          Sta.UniMsg[src].HomeProc = false;
          Sta.UniMsg[src].Proc = dst;
          Sta.NakcMsg.Cmd = NAKC_Nakc;
          Sta.FwdCmd = UNI_None;
    fi;
  }
  od
}

proctype NI_Remote_Get_Nak_Home(pid dst) {
  do
  :: atomic {
    if
    :: ( Sta.HomeUniMsg.Cmd == UNI_Get && !Sta.HomeUniMsg.HomeProc && Sta.HomeUniMsg.Proc == dst && Sta.HomeProc.CacheState != CACHE_E ) -> 
          Sta.HomeUniMsg.Cmd = UNI_Nak;
          Sta.HomeUniMsg.HomeProc = false;
          Sta.HomeUniMsg.Proc = dst;
          Sta.NakcMsg.Cmd = NAKC_Nakc;
          Sta.FwdCmd = UNI_None;
    fi
  }
  od
}

proctype NI_Remote_Get_Put(pid src; pid dst) {
  do
  :: atomic {
    if
    :: ( src != dst && Sta.UniMsg[src].Cmd == UNI_Get && !Sta.UniMsg[src].HomeProc && Sta.UniMsg[src].Proc == dst && Sta.Proc[dst].CacheState == CACHE_E ) -> 
          Sta.Proc[dst].CacheState = CACHE_S;
          Sta.UniMsg[src].Cmd = UNI_Put;
          Sta.UniMsg[src].HomeProc = false;
          Sta.UniMsg[src].Proc = dst;
          Sta.ShWbMsg.Cmd = SHWB_ShWb;
          Sta.ShWbMsg.Proc = src;
          Sta.FwdCmd = UNI_None;
    fi
  }
  od
}

proctype NI_Remote_Get_Put_Home(pid dst) {
  do
  :: atomic {
    if
    :: ( Sta.HomeUniMsg.Cmd == UNI_Get && !Sta.HomeUniMsg.HomeProc && Sta.HomeUniMsg.Proc == dst && Sta.Proc[dst].CacheState == CACHE_E ) -> 
          Sta.Proc[dst].CacheState = CACHE_S;
          Sta.HomeUniMsg.Cmd = UNI_Put;
          Sta.HomeUniMsg.HomeProc = false;
          Sta.HomeUniMsg.Proc = dst;
          Sta.FwdCmd = UNI_None;
    fi
  }
  od
}


proctype NI_Local_GetX_Nak(pid src) {
  do
  :: atomic {
    if
    :: ( Sta.UniMsg[src].Cmd == UNI_GetX && Sta.UniMsg[src].HomeProc && ( Sta.Dir.Pending || Sta.Dir.Dirty && Sta.Dir.Local && Sta.HomeProc.CacheState != CACHE_E || Sta.Dir.Dirty && !Sta.Dir.Local && Sta.Dir.HeadPtr == src ) ) -> 
          Sta.UniMsg[src].Cmd = UNI_Nak;
          Sta.UniMsg[src].HomeProc = true;
          // undefine Sta.UniMsg[src].Proc;
    fi
  }
  od
}

proctype NI_Local_GetX_GetX(pid src) {
  do
  :: atomic {
    if
    :: ( Sta.UniMsg[src].Cmd == UNI_GetX && Sta.UniMsg[src].HomeProc && !Sta.Dir.Pending && Sta.Dir.Dirty && !Sta.Dir.Local && Sta.Dir.HeadPtr != src ) -> 
          Sta.Dir.Pending = true;
          Sta.UniMsg[src].Cmd = UNI_GetX;
          Sta.UniMsg[src].HomeProc = false;
          Sta.UniMsg[src].Proc = Sta.Dir.HeadPtr;
          Sta.FwdCmd = UNI_GetX;
          Sta.HomePendReqSrc = false;
          Sta.PendReqSrc = src;
          Sta.Collecting = false;
    fi
  }
  od
}

proctype NI_Local_GetX_PutX1(pid src) {
  do
  :: atomic {
    if
    :: ( Sta.UniMsg[src].Cmd == UNI_GetX && Sta.UniMsg[src].HomeProc && !Sta.Dir.Pending && (!Sta.Dir.Dirty || (Sta.Dir.Local && Sta.HomeProc.CacheState == CACHE_E)) && Sta.Dir.Dirty ) -> 
          Sta.Dir.Local = false;
          Sta.Dir.Dirty = true;
          Sta.Dir.HeadVld = true;
          Sta.Dir.HeadPtr = src;
          Sta.Dir.ShrVld = false;
          for (p : 0 .. NODE_NUM-1) { 
            Sta.Dir.ShrSet[p] = false;
            Sta.Dir.InvSet[p] = false;
          }
          Sta.UniMsg[src].Cmd = UNI_PutX;
          Sta.UniMsg[src].HomeProc = true;
          // undefine Sta.UniMsg[src].Proc;
          Sta.HomeProc.CacheState = CACHE_I;
    fi
  }
  od
}

proctype NI_Local_GetX_PutX2(pid src) {
  do
  :: atomic {
    if
    :: ( Sta.UniMsg[src].Cmd == UNI_GetX && Sta.UniMsg[src].HomeProc && !Sta.Dir.Pending && (!Sta.Dir.Dirty || (Sta.Dir.Local && Sta.HomeProc.CacheState == CACHE_E)) && !Sta.Dir.Dirty && (!Sta.Dir.HeadVld && Sta.Dir.HeadPtr == src && forall_1_2)) -> 
        // forall 
          Sta.Dir.Dirty = true;
          Sta.Dir.HeadVld = true;
          Sta.Dir.HeadPtr = src;
          Sta.Dir.ShrVld = false;
          for (p : 0 .. NODE_NUM-1) { 
            Sta.Dir.ShrSet[p] = false;
            Sta.Dir.InvSet[p] = false;
          }
          Sta.UniMsg[src].Cmd = UNI_PutX;
          Sta.UniMsg[src].HomeProc = true;
          // undefine Sta.UniMsg[src].Proc;
          Sta.HomeProc.CacheState = CACHE_I;
          if
          :: (Sta.Dir.Local) ->
                Sta.HomeProc.CacheState = CACHE_I;
                if
                :: (Sta.HomeProc.ProcCmd == NODE_Get) ->
                      Sta.HomeProc.InvMarked = true;
                :: else ->
                    break;
                fi;
          :: else ->
              break;
          fi;
          Sta.Dir.Local = false;
    fi;
  }
  od
}

proctype NI_Local_GetX_PutX3(pid src) {
  do
  :: atomic {
    if
    :: ( Sta.UniMsg[src].Cmd == UNI_GetX && Sta.UniMsg[src].HomeProc && !Sta.Dir.Pending && (!Sta.Dir.Dirty || (Sta.Dir.Local && Sta.HomeProc.CacheState == CACHE_E)) && !Sta.Dir.Dirty ) -> 
          Sta.Dir.Pending = true;
          Sta.Dir.Dirty = true;
          Sta.Dir.InvSet[src] = false;
          Sta.InvMsg[src].Cmd = INV_None;
          Sta.Dir.ShrSet[src] = false;
          for (p : 0 .. NODE_NUM-1) { 
            if
            :: (p != src) ->
                if
                :: ( Sta.Dir.ShrVld && Sta.Dir.ShrSet[p] || Sta.Dir.HeadVld && Sta.Dir.HeadPtr == p ) ->
                      Sta.Dir.InvSet[p] = true;
                :: else ->
                      Sta.Dir.InvSet[p] = false;
                fi

                if
                :: ( Sta.Dir.ShrVld && Sta.Dir.ShrSet[p] || Sta.Dir.HeadVld && Sta.Dir.HeadPtr == p ) ->
                      Sta.InvMsg[p].Cmd = INV_Inv;
                :: else ->
                      Sta.InvMsg[p].Cmd = INV_None;
                fi
                Sta.Dir.ShrSet[p] = false;
            :: else ->
                break;
            fi
            Sta.Dir.ShrSet[p] = false;
            Sta.Dir.InvSet[p] = false;
          }
          Sta.Dir.HeadVld = true;
          Sta.Dir.HeadPtr = src;
          Sta.Dir.ShrVld = false;
          Sta.UniMsg[src].Cmd = UNI_PutX;
          Sta.UniMsg[src].HomeProc = true;
          // undefine Sta.UniMsg[src].Proc;
          if
          :: (Sta.Dir.Local == true) ->
                Sta.HomeProc.CacheState = CACHE_I;
                if
                :: (Sta.HomeProc.ProcCmd == NODE_Get) ->
                      Sta.HomeProc.InvMarked = true;
                :: else ->
                    break;
                fi;
          :: else ->
              break;
          fi;
          Sta.Dir.Local = false;
          Sta.HomePendReqSrc = false;
          Sta.PendReqSrc = src;
          Sta.Collecting = true;
    fi;
  }
  od
}

proctype NI_Remote_GetX_Nak(pid src; pid dst) {
  do
  :: atomic {
    if
    :: ( src != dst && Sta.UniMsg[src].Cmd == UNI_GetX && !Sta.UniMsg[src].HomeProc && Sta.UniMsg[src].Proc == dst && Sta.Proc[dst].CacheState != CACHE_E ) -> 
          Sta.UniMsg[src].Cmd = UNI_Nak;
          Sta.UniMsg[src].HomeProc = false;
          Sta.UniMsg[src].Proc = dst;
          Sta.NakcMsg.Cmd = NAKC_Nakc;
          Sta.FwdCmd = UNI_None;
    fi
  }
  od
}

proctype NI_Remote_GetX_Nak_Home(pid dst) {
  do
  :: atomic {
    if
    :: ( Sta.HomeUniMsg.Cmd == UNI_GetX && !Sta.HomeUniMsg.HomeProc && Sta.HomeUniMsg.Proc == dst && Sta.Proc[dst].CacheState != CACHE_E ) -> 
          Sta.HomeUniMsg.Cmd = UNI_Nak;
          Sta.HomeUniMsg.HomeProc = false;
          Sta.HomeUniMsg.Proc = dst;
          Sta.NakcMsg.Cmd = NAKC_Nakc;
          Sta.FwdCmd = UNI_None;
    fi
  }
  od
}

proctype NI_Remote_GetX_PutX(pid src; pid dst) {
  do
  :: atomic {
    if
    :: ( src != dst && Sta.UniMsg[src].Cmd == UNI_GetX && !Sta.UniMsg[src].HomeProc && Sta.UniMsg[src].Proc == dst && Sta.Proc[dst].CacheState == CACHE_E ) -> 
          Sta.Proc[dst].CacheState = CACHE_I;
          Sta.UniMsg[src].Cmd = UNI_PutX;
          Sta.UniMsg[src].HomeProc = false;
          Sta.UniMsg[src].Proc = dst;
          Sta.ShWbMsg.Cmd = SHWB_FAck;
          Sta.ShWbMsg.Proc = src;
          Sta.FwdCmd = UNI_None;
    fi
  }
  od
}

proctype NI_Remote_GetX_PutX_Home(pid dst) {
  do
  :: atomic {
    if
    :: ( Sta.HomeUniMsg.Cmd == UNI_GetX && !Sta.HomeUniMsg.HomeProc && Sta.HomeUniMsg.Proc == dst && Sta.Proc[dst].CacheState == CACHE_E ) -> 
          Sta.Proc[dst].CacheState = CACHE_I;
          Sta.HomeUniMsg.Cmd = UNI_PutX;
          Sta.HomeUniMsg.HomeProc = false;
          Sta.HomeUniMsg.Proc = dst;
          Sta.FwdCmd = UNI_None;
    fi
  }
  od
}

proctype NI_Local_Put( ) {
  do
  :: atomic {
    if
    :: ( Sta.HomeUniMsg.Cmd == UNI_Put ) -> 
          Sta.HomeUniMsg.Cmd = UNI_None;
          // undefine Sta.HomeUniMsg.Proc;
          Sta.Dir.Pending = false;
          Sta.Dir.Dirty = false;
          Sta.Dir.Local = true;
          Sta.HomeProc.ProcCmd = NODE_None;
          if
          :: (Sta.HomeProc.InvMarked) ->
                Sta.HomeProc.InvMarked = false;
                Sta.HomeProc.CacheState = CACHE_I; 
          :: else ->
              Sta.HomeProc.CacheState = CACHE_S;
          fi
    fi
  }
  od
}

proctype NI_Remote_Put(pid dst) {
  do
  :: atomic {
    if
    :: ( Sta.UniMsg[dst].Cmd == UNI_Put ) -> 
          Sta.UniMsg[dst].Cmd = UNI_None;
          Sta.UniMsg[dst].HomeProc = false;
          // undefine Sta.UniMsg[dst].Proc;
          Sta.Proc[dst].ProcCmd = NODE_None;
          if
          :: (Sta.Proc[dst].InvMarked) ->
              Sta.Proc[dst].CacheState = CACHE_I;
          :: else ->
              Sta.Proc[dst].CacheState = CACHE_S;
          fi;
          Sta.Proc[dst].InvMarked = false;
    fi;
  }
  od
}

proctype NI_Local_PutXAcksDone( ) {
  do
  :: atomic {
    if
    :: ( Sta.HomeUniMsg.Cmd == UNI_PutX ) -> 
          Sta.HomeUniMsg.Cmd = UNI_None;
          // undefine Sta.HomeUniMsg.Proc;
          Sta.Dir.Pending = false;
          Sta.Dir.Local = true;
          Sta.Dir.HeadVld = false;
          // undefine Sta.Dir.HeadPtr;
          Sta.HomeProc.ProcCmd = NODE_None;
          Sta.HomeProc.InvMarked = false;
          Sta.HomeProc.CacheState = CACHE_E;
    fi;
  }
  od
}

proctype NI_Remote_PutX(pid dst) {
  do
  :: atomic {
    if
    :: ( Sta.UniMsg[dst].Cmd == UNI_PutX && Sta.Proc[dst].ProcCmd == NODE_GetX ) -> 
          Sta.UniMsg[dst].Cmd = UNI_None;
          Sta.UniMsg[dst].HomeProc = false;
          // undefine Sta.UniMsg[dst].Proc;
          Sta.Proc[dst].ProcCmd = NODE_None;
          Sta.Proc[dst].InvMarked = false;
          Sta.Proc[dst].CacheState = CACHE_E;
    fi
  }
  od
}

proctype NI_Inv(pid dst) {
  do
  :: atomic {
    if
    :: ( Sta.InvMsg[dst].Cmd == INV_Inv ) -> 
          Sta.InvMsg[dst].Cmd = INV_InvAck;
          Sta.Proc[dst].CacheState = CACHE_I;
          if
          :: (Sta.Proc[dst].ProcCmd == NODE_Get) ->
              Sta.Proc[dst].InvMarked = true;
          :: else ->
              Sta.Proc[dst].InvMarked = Sta.Proc[dst].InvMarked;
          fi
    fi
  }
  od
}

proctype NI_InvAck1(pid src) {
  do
  :: atomic {
    if
    :: ( Sta.InvMsg[src].Cmd == INV_InvAck && Sta.Dir.Pending && Sta.Dir.InvSet[src] && forall_2_2) -> 
        // forall
          Sta.InvMsg[src].Cmd = INV_None;
          Sta.Dir.InvSet[src] = false;
          Sta.Dir.Pending = false;
          if
          :: (Sta.Dir.Local == true && Sta.Dir.Dirty == false) ->
              Sta.Dir.Local = false;
          :: else ->
              break;
          fi;
          Sta.Collecting = false;
    fi;
  }
  od
}

proctype NI_InvAck2(pid src) {
  do
  :: atomic {
    if
    :: ( Sta.InvMsg[src].Cmd == INV_InvAck && Sta.Dir.Pending && Sta.Dir.InvSet[src] ) -> 
          Sta.InvMsg[src].Cmd = INV_None;
          Sta.Dir.InvSet[src] = false;
    fi
  }
  od
}

proctype NI_Wb( ) {
  do
  :: atomic {
    if
    :: ( Sta.WbMsg.Cmd == WB_Wb ) -> 
          Sta.WbMsg.Cmd = WB_None;
          // undefine Sta.WbMsg.Proc;
          Sta.Dir.Dirty = false;
          Sta.Dir.HeadVld = false;
          // undefine Sta.Dir.HeadPtr;
    fi
  }
  od
}

proctype NI_FAck( ) {
  do
  :: atomic {
    if
    :: ( Sta.ShWbMsg.Cmd == SHWB_FAck ) -> 
          Sta.ShWbMsg.Cmd = SHWB_None;
          Sta.Dir.Pending = false;
          if
          :: (Sta.Dir.Dirty) ->
              Sta.Dir.HeadPtr = Sta.ShWbMsg.Proc;
          :: else ->
              break;
          fi;
          // undefine Sta.ShWbMsg.Proc;
    fi
  }
  od
}

proctype NI_ShWb(pid src) {
  do
  :: atomic {
    if
    :: ( Sta.ShWbMsg.Cmd == SHWB_ShWb && Sta.ShWbMsg.Proc == src ) -> 
          Sta.ShWbMsg.Cmd = SHWB_None;
          Sta.Dir.Pending = false;
          Sta.Dir.Dirty = false;
          Sta.Dir.ShrVld = true;
          Sta.Dir.ShrSet[src] = true;
          Sta.Dir.InvSet[src] = true;
          for (p : 0 .. NODE_NUM-1) { 
            if
            :: (p != src) ->
                Sta.Dir.InvSet[p] = Sta.Dir.ShrSet[p];
            :: else ->
                break;
            fi;
          }
          // undefine Sta.ShWbMsg.Proc;
    fi
  }
  od
}

proctype NI_Replace(pid src) {
  do
  :: atomic {
    if
    :: ( Sta.RpMsg[src].Cmd == RP_Replace ) -> 
          Sta.RpMsg[src].Cmd = RP_None;
          if
          :: (Sta.Dir.ShrVld) ->
              Sta.Dir.ShrSet[src] = false;
              Sta.Dir.InvSet[src] = false;
          :: else ->
              break;
          fi;
    fi
  }
  od
}


init { 
  atomic {
    Sta.Dir.Pending = false;
    Sta.Dir.Local = false;
    Sta.Dir.Dirty = false;
    Sta.Dir.HeadVld = false;
    Sta.Dir.ShrVld = false;
    Sta.WbMsg.Cmd = WB_None;
    Sta.ShWbMsg.Cmd = SHWB_None;
    Sta.NakcMsg.Cmd = NAKC_None;
    for (p : 0 .. NODE_NUM-1) {
      Sta.Proc[p].ProcCmd = NODE_None;
      Sta.Proc[p].InvMarked = false;
      Sta.Proc[p].CacheState = CACHE_I;
      Sta.Dir.ShrSet[p] = false;
      Sta.Dir.InvSet[p] = false;
      Sta.InvMsg[p].Cmd = INV_None;
      Sta.RpMsg[p].Cmd = RP_None;
      Sta.UniMsg[p].Cmd = UNI_None;
      Sta.UniMsg[p].HomeProc = false;
    }
    Sta.HomeProc.ProcCmd = NODE_None;
    Sta.HomeProc.InvMarked = false;
    Sta.HomeProc.CacheState = CACHE_I;
    Sta.HomeUniMsg.Cmd = UNI_None;
    Sta.HomeUniMsg.HomeProc = false;
    Sta.HomePendReqSrc = false;
    Sta.Collecting = false;
    Sta.FwdCmd = UNI_None;
  }
  
  atomic { 

    for (i : 0 .. NODE_NUM-1) {
      run PI_Remote_Get(i);
      run PI_Remote_GetX(i);
      run PI_Remote_PutX(i);
      run PI_Remote_Replace(i);
      run NI_Nak(i);
      run NI_Local_Get_Nak(i);
      run NI_Local_Get_Get(i);
      run NI_Local_Get_Put(i);
      run NI_Remote_Get_Nak_Home(i);
      run NI_Remote_Get_Put_Home(i);
      run NI_Local_GetX_Nak(i);
      run NI_Local_GetX_GetX(i);
      run NI_Local_GetX_PutX1(i);
      run NI_Local_GetX_PutX2(i);
      run NI_Local_GetX_PutX3(i);
      run NI_Remote_GetX_Nak_Home(i);
      run NI_Remote_GetX_PutX_Home(i);
      run NI_Remote_Put(i);
      run NI_Remote_PutX(i);
      run NI_Inv(i);
      run NI_InvAck1(i);
      run NI_InvAck2(i);
      run NI_ShWb(i);
      run NI_Replace(i);
    }
    
    run PI_Local_Get_Get();
    run PI_Local_Get_Put(); 
    run PI_Local_GetX_GetX(); 
    run PI_Local_GetX_PutX(); 
    run PI_Local_PutX(); 
    run PI_Local_Replace(); 
    run NI_Nak_Home(); 
    run NI_Nak_Clear(); 
    run NI_Local_Put(); 
    run NI_Local_PutXAcksDone(); 
    run NI_Wb(); 
    run NI_FAck(); 

    for (i : 0 .. NODE_NUM-1) {
      for (j : 0 .. NODE_NUM-1) {
        run NI_Remote_Get_Nak(i, j); 
        run NI_Remote_Get_Put(i, j); 
        run NI_Remote_GetX_Nak(i, j); 
        run NI_Remote_GetX_PutX(i, j); 
      }
    } 
  }
}

#ifdef LTL
ltl flash_property { [] !(Sta.Proc[0].CacheState == CACHE_E && Sta.Proc[1].CacheState == CACHE_E) }
#endif

/* runspin_deadlock: %spin -a        %gcc -o pan -DSAFETY pan.c       %./pan        % */
/* runspin_mutex:    %spin -DLTL -a  %gcc -o pan pan.c                %./pan -a     % */
/* runspin_progress: %spin -a        %gcc -o pan -DNP -DNOCLAIM pan.c %./pan -l -f  % */
/* spin -t -p fair.pml */