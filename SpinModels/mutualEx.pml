short clientNUMS = 16

mtype:state = {I, T, C, E}

// mtype value can't be constant!

mtype:state n[clientNUMS];
bool x; 

proctype Try(pid i) {
  do
  :: atomic {
    if
    :: (n[i] == I) -> 
        n[i] = T; 
    fi
  }
  od
}

proctype Crit(pid i) {
  do
  :: atomic {
    if
    :: (n[i] == T && x == true) -> 
        n[i] = C;
        x = false;
    fi
  }
  od
}

proctype Exit(pid i) {
  do
  :: atomic {
    if
    :: (n[i] == C) -> 
        n[i] = E;
    fi
  }
  od
}

proctype Idle(pid i) {
  do
  :: atomic {
    if
    :: (n[i] == E) -> 
        n[i] = I;
        x = true;
    fi
  }
  od
}

init {
    atomic { 
      pid i;
      for (i : 0 .. clientNUMS-1) {
        n[i] = I;
      }
      x = true;
    }
    
    atomic {
      pid i; 
      for (i : 0 .. clientNUMS-1) {
        run Try(i);
        run Crit(i);
        run Exit(i);
        run Idle(i);
      }
    }
}

// #define p  (n[1] == C && n[2] == C)

// verification: spin -a mutual2.pml
// LTL formula: spin -f '[] !(p -> q)'

#ifdef LTL
ltl mutual_property { [] !(n[0] == C && n[1] == C) }
#endif


/* runspin_deadlock: %spin -a        %gcc -o pan -DSAFETY pan.c       %./pan        % */
/* runspin_mutex:    %spin -DNOREDUCE -DLTL -a  %gcc -o pan pan.c                %./pan -a     % */
/* runspin_progress: %spin -a        %gcc -o pan -DNP -DNOCLAIM pan.c %./pan -l -f  % */
/* spin -t -p fair.pml */
