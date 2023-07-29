mtype = {I, T, C, E}

byte n[2]; 
bool x;

proctype P(bit i) {
    if
    :: (n[i] == I) -> n[i] = T;
    :: (n[i] == T && x = 1) -> n[i] = C; x = 0;
    :: (n[i] == C) -> n[i] = E;
    :: (n[i] == E) -> n[i] = I; x = 1;
    fi
}

proctype monitor() { 
    assert(mutex != 2); 
}

init {
    run P(1); run P(2);
    run monitor();
}