Type
    bitvec_1 : array [0..0] of boolean;
    bitvec_31 : array [0..30] of boolean;
    bitvec_32 : array [0..31] of boolean;
    array_1_1 : array [0..1] of bitvec_1;
    int_2 : 0..1;
    bitvec_2 : array [0..1] of boolean;
    int_1 : 0..0;

Var
    out_data : bitvec_1;
    node12 : bitvec_1;
    node14 : bitvec_1;
    flag : bitvec_1;
    node31 : bitvec_1;
    random_addr : bitvec_1;
    random_data : bitvec_1;
    mem : array_1_1;
    node13 : bitvec_1;
    node20 : bitvec_31;
    node25 : bitvec_1;
    badNode : bitvec_1;

Function not_1(a:bitvec_1): bitvec_1;
    Var res : bitvec_1;
    Begin
        For i:0..0 Do
            res[i] := !a[i] ;
        End;
        return res;
    End;
    
Function and_1(a:bitvec_1;b:bitvec_1): bitvec_1;
    Var res : bitvec_1;
    Begin
        For i:0..0 Do
            res[i] := a[i] & b[i] ;
        End;
        return res;
    End;
    
Function concat_31_1(a:bitvec_31;b:bitvec_1):bitvec_32;
    Var res:bitvec_32;
    Begin
        For i:0..30 Do
            res[i]:=a[i];
        End;
        For i:31..31 Do
            res[i]:=b[31-i];
        End;
        return res;
    End;
    
Function redor_32(a:bitvec_32) : bitvec_1;
    Var res:bitvec_1;
    Begin
        res[0]:=false;
        For i:0..31 Do
            res[0] := res[0] | a[i];
        End;
        return res;
    End;
    
Function or_1(a:bitvec_1;b:bitvec_1): bitvec_1;
    Var res : bitvec_1;
    Begin
        For i:0..0 Do
            res[i] := a[i] | b[i] ;
        End;
        return res;
    End;
    
Function uext_1_0(a:bitvec_1):bitvec_1;
        Var res:bitvec_1;
        Begin
            res:=a;
            return res;
        End;
        
Function binary2int_1(a:bitvec_1):int_2;
    Var res:int_2;
    Var t:int_2;
    Var j:int_2;
    Begin
        res:=0;
        for i:0..0 Do
            t:=1;
            j:=i;
            While j>0 Do
                t:=t*2;
                j:=j-1;
            End;
            if a[i]=true then
                res:=res+t;
            End;
        End;
        return res;
    End;
    
Function read_1_1(a:array_1_1;b:bitvec_1):bitvec_1;
    Var res:bitvec_1;
    Var idx:int_2;
    Begin
        idx:=binary2int_1(b);
        res := a[idx];
        return res;
    End;
    
Function eq_1(a:bitvec_1;b:bitvec_1): bitvec_1;
    Var res:bitvec_1;
    Begin
        res[0]:=true;
        For i:0..0 Do
            If a[i]!=b[i] then
                res[0]:=false;
            End;
        End;
        return res ;
    End;
    
Function ult_1(a:bitvec_1;b:bitvec_1): bitvec_1;
    Var carry : bitvec_2;
    Var Not_b : bitvec_1;
    Var res : bitvec_1;
    Begin
        Not_b := not_1(b);
        carry[0] := true;
        For i:1..1 Do
            carry[i]:=(a[i-1]&Not_b[i-1]) | ( ((!a[i-1]&Not_b[i-1])|(a[i-1]&!Not_b[i-1])) & carry[i-1]);
        End;
        res[0] := (carry[1]=true)?false:true;
        return res;
    End;
    
Function write_1_1(a:array_1_1;b:bitvec_1;c:bitvec_1):array_1_1;
    Var res:array_1_1;
    Var idx:int_2;
    Begin
        idx:=binary2int_1(b);
        res :=a;
        res[idx] := c;
        return res;
    End;
    
Function redor_1(a:bitvec_1) : bitvec_1;
    Var res:bitvec_1;
    Begin
        res[0]:=false;
        For i:0..0 Do
            res[0] := res[0] | a[i];
        End;
        return res;
    End;
    
Function int2binary_2(a:int_2):bitvec_1;
    Var res:bitvec_1;
    Var i : int_1;
    Var n : int_2;
    Begin
        i:=0;
        n:=a;
        For j : int_1 Do
            res[j]:=false;
        End;
        While n != 0 Do
            res[i] := (n%2=0)?false:true;
            n := n/2;
            If n!=0 then
                i := i+1;
            End;
        End;  
        return res;
    End;
    

startstate "Init"
 begin
    node13[0] := false;
    node20[0] := false;
    node20[1] := false;
    node20[2] := false;
    node20[3] := false;
    node20[4] := false;
    node20[5] := false;
    node20[6] := false;
    node20[7] := false;
    node20[8] := false;
    node20[9] := false;
    node20[10] := false;
    node20[11] := false;
    node20[12] := false;
    node20[13] := false;
    node20[14] := false;
    node20[15] := false;
    node20[16] := false;
    node20[17] := false;
    node20[18] := false;
    node20[19] := false;
    node20[20] := false;
    node20[21] := false;
    node20[22] := false;
    node20[23] := false;
    node20[24] := false;
    node20[25] := false;
    node20[26] := false;
    node20[27] := false;
    node20[28] := false;
    node20[29] := false;
    node20[30] := false;
    node25[0] := true;
    For i:0..0 Do
        out_data[i]:=false;
    End;
    For i:0..0 Do
        node12[i]:=false;
    End;
    For i:0..0 Do
        node14[i]:=false;
    End;
    For i:0..0 Do
        flag[i]:=false;
    End;
    For i:0..0 Do
        node31[i]:=false;
    End;
    For i:0..0 Do
        random_addr[i]:=false;
    End;
    For i:0..0 Do
        random_data[i]:=false;
    End;
    For i:0..1 Do
        mem[i][0]:=false;
    End;
    node14 := node13;
    node31 := node25;
    badNode[0] := false
endstartstate;
ruleset clk_:int_2;flag_fail_:int_2;in_data_:int_2;in_rd_:int_2;in_rd_addr_:int_2;in_wr_:int_2;in_wr_addr_:int_2;rst_n_:int_2;node55_:int_2;node92_:int_2;node93_:int_2;node94_:int_2;node99_:int_2;node100_:int_2;node101_:int_2 Do
rule
    true
    ==>
    Var clk : bitvec_1;
    Var flag_fail : bitvec_1;
    Var in_data : bitvec_1;
    Var in_rd : bitvec_1;
    Var in_rd_addr : bitvec_1;
    Var in_wr : bitvec_1;
    Var in_wr_addr : bitvec_1;
    Var rst_n : bitvec_1;
    Var node55 : bitvec_1;
    Var node92 : bitvec_1;
    Var node93 : bitvec_1;
    Var node94 : bitvec_1;
    Var node99 : bitvec_1;
    Var node100 : bitvec_1;
    Var node101 : bitvec_1;
    Var node16 : bitvec_1;
    Var node17 : bitvec_1;
    Var node18 : bitvec_1;
    Var node22 : bitvec_32;
    Var node23 : bitvec_1;
    Var node24 : bitvec_1;
    Var node26 : bitvec_1;
    Var node27 : bitvec_1;
    Var node30 : bitvec_1;
    Var node34 : bitvec_1;
    Var node35 : bitvec_1;
    Var node37 : bitvec_1;
    Var node38 : bitvec_1;
    Var node39 : bitvec_1;
    Var node41 : bitvec_1;
    Var node42 : bitvec_1;
    Var node43 : bitvec_1;
    Var node47 : bitvec_1;
    Var node51 : bitvec_1;
    Var node52 : bitvec_1;
    Var node53 : bitvec_1;
    Var node56 : bitvec_1;
    Var node57 : bitvec_1;
    Var node58 : bitvec_1;
    Var node60 : bitvec_1;
    Var node62 : bitvec_1;
    Var node63 : bitvec_1;
    Var node64 : bitvec_1;
    Var node65 : bitvec_1;
    Var node67 : bitvec_1;
    Var node68 : bitvec_1;
    Var node69 : bitvec_1;
    Var node70 : bitvec_1;
    Var node71 : bitvec_1;
    Var node72 : bitvec_1;
    Var node73 : bitvec_1;
    Var node75 : bitvec_1;
    Var node76 : bitvec_1;
    Var node77 : bitvec_1;
    Var node78 : bitvec_1;
    Var node79 : bitvec_1;
    Var node80 : bitvec_1;
    Var node81 : array_1_1;
    Var node82 : bitvec_1;
    Var node83 : array_1_1;
    Var node84 : bitvec_1;
    Var node85 : bitvec_1;
    Var node86 : bitvec_1;
    Var node87 : bitvec_1;
    Var node88 : bitvec_1;
    Var node89 : array_1_1;
    Var node90 : bitvec_1;
    Var node91 : array_1_1;
    Var node95 : bitvec_1;
    Var node96 : bitvec_1;
    Var node97 : bitvec_1;
    Var node98 : bitvec_1;
    Var node102 : bitvec_1;
    Var node103 : bitvec_1;
    Var node104 : bitvec_1;
    Var node105 : bitvec_1;
    Var node106 : bitvec_1;
    Var node107 : bitvec_1;
    Var node108 : bitvec_1;
    Var node109 : bitvec_1;
    Var node110 : bitvec_1;
    Var node111 : bitvec_1;
    Var node112 : bitvec_1;
    Var node113 : bitvec_1;
    Var node114 : bitvec_1;
    Var node115 : bitvec_1;
    Var node116 : bitvec_1;
    Var node117 : bitvec_1;
    Var node118 : array_1_1;
    Var node119 : bitvec_1;
    Var node120 : array_1_1;
    Var Nxtnode31 : bitvec_1;
    Var Nxtrandom_addr : bitvec_1;
    Var Nxtout_data : bitvec_1;
    Var Nxtnode12 : bitvec_1;
    Var Nxtnode14 : bitvec_1;
    Var Nxtflag : bitvec_1;
    Var Nxtrandom_data : bitvec_1;
    Var Nxtmem : array_1_1;
    begin
    clk := int2binary_2(clk_);
    flag_fail := int2binary_2(flag_fail_);
    in_data := int2binary_2(in_data_);
    in_rd := int2binary_2(in_rd_);
    in_rd_addr := int2binary_2(in_rd_addr_);
    in_wr := int2binary_2(in_wr_);
    in_wr_addr := int2binary_2(in_wr_addr_);
    rst_n := int2binary_2(rst_n_);
    node55 := int2binary_2(node55_);
    node92 := int2binary_2(node92_);
    node93 := int2binary_2(node93_);
    node94 := int2binary_2(node94_);
    node99 := int2binary_2(node99_);
    node100 := int2binary_2(node100_);
    node101 := int2binary_2(node101_);
    node16 :=  not_1(node12) ;
    node17 :=  and_1(node14, node16) ;
    node18 :=  and_1(in_wr, in_rd) ;
    node22 :=  concat_31_1(node20, node18) ;
    node23 :=  redor_32(node22) ;
    node24 :=  not_1(node23) ;
    node26 :=  not_1(node25) ;
    node27 :=  or_1(node24, node26) ;
    node30 :=  not_1(flag) ;
    node34 :=  not_1(node31) ;
    node35 :=  or_1(node30, node34) ;
    node37 :=  not_1(flag_fail) ;
    node38 :=  not_1(node31) ;
    node39 :=  or_1(node37, node38) ;
    node41 :=  not_1(rst_n) ;
    node42 :=  not_1(node31) ;
    node43 :=  or_1(node41, node42) ;
    node47 := uext_1_0(random_addr);
    node51 := read_1_1(mem,in_rd_addr);
    node52 := in_rd[0]?node51:out_data;
    node53 := rst_n[0]?node52:node13;
    node56 :=  eq_1(random_data, out_data) ;
    node57 :=  and_1(flag, rst_n) ;
    node58 := node57[0]?node56:node55;
    node60 := node57[0]?node25:node13;
    node62 :=  and_1(rst_n, in_rd) ;
    node63 :=  eq_1(in_rd_addr, random_addr) ;
    node64 :=  and_1(node62, node63) ;
    node65 := node64[0]?node25:node13;
    node67 :=  eq_1(in_wr_addr, random_addr) ;
    node68 :=  and_1(in_wr, node67) ;
    node69 := node68[0]?in_data:random_data;
    node70 :=  ult_1(random_addr, node25) ;
    node71 :=  and_1(node68, node70) ;
    node72 := node71[0]?in_data:node69;
    node73 := rst_n[0]?node72:node13;
    node75 := rst_n[0]?node13:node25;
    node76 := read_1_1(mem,node13);
    node77 :=  not_1(node75) ;
    node78 :=  and_1(node76, node77) ;
    node79 :=  and_1(node13, node75) ;
    node80 :=  or_1(node79, node78) ;
    node81 := write_1_1(mem,node13,node80);
    node82 :=  redor_1(node75) ;
    node83 := node82[0]?node81:mem;
    node84 := read_1_1(node83,node25);
    node85 :=  not_1(node75) ;
    node86 :=  and_1(node84, node85) ;
    node87 :=  and_1(node13, node75) ;
    node88 :=  or_1(node87, node86) ;
    node89 := write_1_1(node83,node25,node88);
    node90 :=  redor_1(node75) ;
    node91 := node90[0]?node89:node83;
    node95 :=  ult_1(in_wr_addr, node25) ;
    node96 := node95[0]?in_data:node94;
    node97 := in_wr[0]?node96:node93;
    node98 := rst_n[0]?node97:node92;
    node102 := node95[0]?node101:in_data;
    node103 := in_wr[0]?node102:node100;
    node104 := rst_n[0]?node103:node99;
    node105 := node95[0]?node13:node25;
    node106 := in_wr[0]?node105:node13;
    node107 := rst_n[0]?node106:node13;
    node108 := node107[0]?node104:node98;
    node109 := node95[0]?node25:node13;
    node110 := in_wr[0]?node109:node13;
    node111 := rst_n[0]?node110:node13;
    node112 :=  or_1(node111, node107) ;
    node113 := read_1_1(node91,in_wr_addr);
    node114 :=  not_1(node112) ;
    node115 :=  and_1(node113, node114) ;
    node116 :=  and_1(node108, node112) ;
    node117 :=  or_1(node116, node115) ;
    node118 := write_1_1(node91,in_wr_addr,node117);
    node119 :=  redor_1(node112) ;
    node120 := node119[0]?node118:node91;
    If node27[0]&node35[0]&node39[0]&node43[0] then
        Nxtnode31 := node13;
        Nxtrandom_addr := random_addr;
        Nxtout_data := rst_n[0]?node52:node13;
        Nxtnode12 := node57[0]?node56:node55;
        Nxtnode14 := node57[0]?node25:node13;
        Nxtflag := node64[0]?node25:node13;
        Nxtrandom_data := rst_n[0]?node72:node13;
        Nxtmem := node119[0]?node118:node91;
        node31 := Nxtnode31;
        random_addr := Nxtrandom_addr;
        out_data := Nxtout_data;
        node12 := Nxtnode12;
        node14 := Nxtnode14;
        flag := Nxtflag;
        random_data := Nxtrandom_data;
        mem := Nxtmem;
        badNode := node17;
    End;
endrule; endruleset;
invariant badNode[0]=false;