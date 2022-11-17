const

  clientNUMS : 5;

  clientStart : 1;

type

  NODE : 1..clientNUMS;

  state : enum {I, T, C, E};

  client : clientStart..clientNUMS;

var

  n : array [client] of state;

  x : boolean;

startstate "Init"
  for i : client do
    n[i] := I;
  end;
  x := true;
endstartstate;

ruleset i : client do
rule "Try"
  n[i] = I
==>
begin
  n[i] := T;
endrule;
endruleset;

ruleset i : client do
rule "Crit"
  n[i] = T &
  x = true
==>
begin
  n[i] := C;
  x := false;
endrule;
endruleset;

ruleset i : client do
rule "Exit"
  n[i] = C
==>
begin
  n[i] := E;
endrule;
endruleset;

ruleset i : client do
rule "Idle"
  n[i] = E
==>
begin
  n[i] := I;
  x := true;
endrule;
endruleset;

invariant "Lemma_1"
  forall p : NODE do
    forall i : NODE do
      n[i] = E ->
        forall j : NODE do
          j != i ->
            n[j] != C &
            n[j] != E
        end
    end
  end;


rule "ABS_Crit"
  x = true
==>
begin
  x := false;
endrule;

rule "ABS_Idle"
  true
==>
begin
  x := true;
endrule;

