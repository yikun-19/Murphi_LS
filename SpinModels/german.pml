short NODE_NUM = 2
short DATA_NUM = 2

mtype:CACHE_STATE = {I, S, E}
mtype:MSG_CMD = {Empty, ReqS, ReqE, Inv, InvAck, GntS, GntE} // enum?
// mtype:MSG_CMD = {Empty, ReqS, ReqE} // ?
// mtype:NODE = {1, 2, 3, 4, 5, 6, 7, 8}
// mtype:DATA = {1, 2}

typedef CACHE{
  mtype:CACHE_STATE State; 
  byte Data; 
}

typedef MSG{
  mtype:MSG_CMD Cmd;
  byte Data;
}

/* global variables */
CACHE Cache[2]; 
MSG Chan1[2];
MSG Chan2[2];
MSG Chan3[2];
bool InvSet[2];
bool ShrSet[2];
bool ExGntd;
mtype:MSG_CMD CurCmd; 
pid CurPtr; 
byte MemData; 
byte AuxData; 

#define forall_2 (ShrSet[0] == false && ShrSet[1] == false)

// #define forall_8 (ShrSet[0] == false && ShrSet[1] == false && ShrSet[2] == false && ShrSet[3] == false && ShrSet[4] == false && ShrSet[5] == false && ShrSet[6] == false && ShrSet[7] == false)

proctype Store(pid i; byte d) {
  do
  :: atomic {
    if
    :: (Cache[i].State == E) -> 
      printf("i: %d; d: %d\n", i, d);
      Cache[i].Data = d; 
      AuxData = d;
    fi
  }
  od
}

proctype SendReqS(pid i) {
  do
  :: atomic {
    if
    :: (Chan1[i].Cmd == Empty && Cache[i].State == I) -> 
      printf("i: %d\n", i);
      Chan1[i].Cmd = ReqS; 
    fi
  }
  od
}

proctype SendReqE(pid i) {
  do
  :: atomic {
    if
    :: (Chan1[i].Cmd == Empty && (Cache[i].State == I || Cache[i].State == S)) -> 
      printf("i: %d\n", i);
      Chan1[i].Cmd = ReqE; 
    fi
  }
  od
}

proctype RecvReqS(pid i) {
  do
  :: atomic {
    if
    :: (CurCmd == Empty && Chan1[i].Cmd == ReqS) -> 
      printf("i: %d\n", i);
      CurCmd = ReqS; 
      CurPtr = i;
      Chan1[i].Cmd = Empty;
      pid j1;
      for (j1 : 0 .. NODE_NUM-1) {
		    InvSet[j1] = ShrSet[j1];
	    }
    fi
  }
  od
}

proctype RecvReqE(pid i) {
  do
  :: atomic {
    if
    :: (CurCmd == Empty && Chan1[i].Cmd == ReqE) -> 
      printf("i: %d\n", i);
      CurCmd = ReqE; 
      CurPtr = i;
      Chan1[i].Cmd = Empty;
      pid j2;
      for (j2 : 0 .. NODE_NUM-1) {
		    InvSet[j2] = ShrSet[j2];
	    }
    fi
  }
  od
}

proctype SendInv(pid i) {
  do
  :: atomic {
    if
    :: (Chan2[i].Cmd == Empty && InvSet[i] == true && (CurCmd == ReqE || (CurCmd == ReqS && ExGntd == true))) -> 
      printf("i: %d\n", i);
      Chan2[i].Cmd = Inv;
		  InvSet[i] = false;
    fi
  }
  od
}

proctype SendGntS(pid i) {
  do
  :: atomic {
    if
    :: (CurCmd == ReqS && CurPtr == i && Chan2[i].Cmd == Empty && ExGntd == false) -> 
      printf("i: %d\n", i);
      Chan2[i].Cmd = GntS; 
      Chan2[i].Data = MemData; 
      ShrSet[i] = true;
      CurCmd = Empty;
    fi
  }
  od
}

proctype SendGntE(pid i) {
  do
  :: atomic {
    if
    // :: (CurCmd == ReqE && CurPtr == i && Chan2[i].Cmd == Empty && ExGntd == false && ShrSet[0] == false && ShrSet[1] == false && Chan3[0].Cmd == Empty && Chan3[1].Cmd == Empty ) ->  // forall 
      :: (CurCmd == ReqE && CurPtr == i && Chan2[i].Cmd == Empty && ExGntd == false && forall_2) ->  
      printf("i: %d\n", i);
      Chan2[i].Cmd = GntE; 
      Chan2[i].Data = MemData; 
      ShrSet[i] = true;
      ExGntd = true;
      CurCmd = Empty;
    fi
  }
  od
}

proctype RecvGntS(pid i) {
  do
  :: atomic {
    if
    :: (Chan2[i].Cmd == GntS) -> 
      printf("i: %d\n", i);
      Cache[i].State = S; 
      Cache[i].Data = Chan2[i].Data;
      Chan2[i].Cmd = Empty;
    fi
  }
  od
}

proctype RecvGntE(pid i) {
  do
  :: atomic {
    if
    :: (Chan2[i].Cmd == GntE) -> 
      printf("i: %d\n", i);
      Cache[i].State = E; 
      Cache[i].Data = Chan2[i].Data;
      Chan2[i].Cmd = Empty;
    fi
  }
  od
}

proctype SendInvAck(pid i) {
  do
  :: atomic {
    if
    :: (Chan2[i].Cmd == Inv && Chan3[i].Cmd == Empty) -> 
        printf("i: %d\n", i);
        Chan2[i].Cmd = Empty; 
        Chan3[i].Cmd = InvAck;  // not atomic!!
        if 
        :: (Cache[i].State == E) -> 
            Chan3[i].Data = Cache[i].Data;
        :: else ->
            break;
        fi;
        Cache[i].State = I;
    fi
  }
  od
}

proctype RecvInvAck(pid i) {
  do
  :: atomic {
    if
    :: (Chan3[i].Cmd == InvAck && CurCmd != Empty) -> 
        printf("i: %d\n", i);
        Chan3[i].Cmd = Empty; 
        ShrSet[i] = false;  // not atomic!! break bring states?
        if 
        :: (ExGntd == true) -> 
            ExGntd = false; 
            MemData = Chan3[i].Data; 
        :: else ->
            break;
        fi;
    fi;
  }
  od
}


init { 
  atomic { 
    pid i;
    for (i : 0 .. NODE_NUM-1) {
      Chan1[i].Cmd = Empty; 
      Chan2[i].Cmd = Empty; 
      Chan3[i].Cmd = Empty;
      Cache[i].State = I; 
      InvSet[i] = false; 
      ShrSet[i] = false;
    }
    ExGntd = false; 
    CurCmd = Empty; 
    MemData = 1; 
    AuxData = 1;
    CurPtr = 0;
  }

  atomic {
    pid i; 
    for (i : 0 .. NODE_NUM-1) {
      run Store(i, 0);
      run Store(i, 1);
      run SendReqS(i);
      run SendReqE(i);
      run RecvReqS(i);
      run RecvReqE(i);
      run SendInv(i);
      run SendGntS(i);
      run SendGntE(i);
      run RecvGntS(i);
      run RecvGntE(i);
      run SendInvAck(i);
      run RecvInvAck(i);
    }
  }
}


// #define p (i != j) // all node
// #define q (Cache[i].State = E -> Cache[j].State = S)  
// // spin -f '[] !(p -> q)'

#ifdef LTL
ltl german_property { [] !(Cache[0].State == E && Cache[1].State == E) }
#endif

/* runspin_deadlock: %spin -a        %gcc -o pan -DSAFETY pan.c       %./pan        % */
/* runspin_mutex:    %spin -DLTL -a  %gcc -o pan pan.c                %./pan -a -i    % */
/* runspin_progress: %spin -a        %gcc -o pan -DNP -DNOCLAIM pan.c %./pan -l -f  % */
/* spin -t -p fair.pml */

// i = 1, SendReqE(144), RecvReqE(148), SendReqE(155), SendGntE(169), RecvGntE(171), RecvReqE(173)