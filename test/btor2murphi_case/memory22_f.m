Type
    bitvec_1 : array [0..0] of boolean;
    bitvec_2 : array [0..1] of boolean;
    bitvec_31 : array [0..30] of boolean;
    bitvec_32 : array [0..31] of boolean;
    array_2_2 : array [0..3] of bitvec_2;
    int_4 : 0..3;
    bitvec_3 : array [0..2] of boolean;
    int_2 : 0..1;
    int_1 : 0..0;

Var
    node11 : bitvec_1;
    node13 : bitvec_1;
    node18 : bitvec_1;
    node19 : bitvec_1;
    flag : bitvec_1;
    node37 : bitvec_1;
    out_data : bitvec_2;
    node52 : bitvec_2;
    random_data : bitvec_2;
    mem : array_2_2;
    node12 : bitvec_1;
    node26 : bitvec_31;
    node31 : bitvec_1;
    node78 : bitvec_2;
    node88 : bitvec_2;
    node104 : bitvec_2;
    node121 : bitvec_2;
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

Function slice_1_2_1_1(a:bitvec_2):bitvec_1;
    Var res:bitvec_1;
    Var i:int_2;
    Begin
        i:=0;
        For j:1..1 Do
            res[i]:=a[j];
            i:=i+1;
        End;
        return res;
    End;

Function slice_1_2_0_0(a:bitvec_2):bitvec_1;
    Var res:bitvec_1;
    Var i:int_2;
    Begin
        i:=0;
        For j:0..0 Do
            res[i]:=a[j];
            i:=i+1;
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

Function uext_2_0(a:bitvec_2):bitvec_2;
        Var res:bitvec_2;
        Begin
            res:=a;
            return res;
        End;

Function eq_2(a:bitvec_2;b:bitvec_2): bitvec_1;
    Var res:bitvec_1;
    Begin
        res[0]:=true;
        For i:0..1 Do
            If a[i]!=b[i] then
                res[0]:=false;
            End;
        End;
        return res ;
    End;

Function binary2int_2(a:bitvec_2):int_4;
    Var res:int_4;
    Var t:int_4;
    Var j:int_4;
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

Function read_2_2(a:array_2_2;b:bitvec_2):bitvec_2;
    Var res:bitvec_2;
    Var idx:int_4;
    Begin
        idx:=binary2int_2(b);
        res := a[idx];
        return res;
    End;

Function concat_1_1(a:bitvec_1;b:bitvec_1):bitvec_2;
    Var res:bitvec_2;
    Begin
        For i:0..0 Do
            res[i]:=a[i];
        End;
        For i:1..1 Do
            res[i]:=b[1-i];
        End;
        return res;
    End;

Function not_2(a:bitvec_2): bitvec_2;
    Var res : bitvec_2;
    Begin
        For i:0..1 Do
            res[i] := !a[i] ;
        End;
        return res;
    End;

Function ult_2(a:bitvec_2;b:bitvec_2): bitvec_1;
    Var carry : bitvec_3;
    Var Not_b : bitvec_2;
    Var res : bitvec_1;
    Begin
        Not_b := not_2(b);
        carry[0] := true;
        For i:1..2 Do
            carry[i]:=(a[i-1]&Not_b[i-1]) | ( ((!a[i-1]&Not_b[i-1])|(a[i-1]&!Not_b[i-1])) & carry[i-1]);
        End;
        res[0] := (carry[2]=true)?false:true;
        return res;
    End;

Function and_2(a:bitvec_2;b:bitvec_2): bitvec_2;
    Var res : bitvec_2;
    Begin
        For i:0..1 Do
            res[i] := a[i] & b[i] ;
        End;
        return res;
    End;

Function or_2(a:bitvec_2;b:bitvec_2): bitvec_2;
    Var res : bitvec_2;
    Begin
        For i:0..1 Do
            res[i] := a[i] | b[i] ;
        End;
        return res;
    End;

Function write_2_2(a:array_2_2;b:bitvec_2;c:bitvec_2):array_2_2;
    Var res:array_2_2;
    Var idx:int_4;
    Begin
        idx:=binary2int_2(b);
        res :=a;
        res[idx] := c;
        return res;
    End;

Function redor_2(a:bitvec_2) : bitvec_1;
    Var res:bitvec_1;
    Begin
        res[0]:=false;
        For i:0..1 Do
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

Function int2binary_4(a:int_4):bitvec_2;
    Var res:bitvec_2;
    Var i : int_2;
    Var n : int_4;
    Begin
        i:=0;
        n:=a;
        For j : int_2 Do
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
    node12[0] := false;
    node26[0] := false;
    node26[1] := false;
    node26[2] := false;
    node26[3] := false;
    node26[4] := false;
    node26[5] := false;
    node26[6] := false;
    node26[7] := false;
    node26[8] := false;
    node26[9] := false;
    node26[10] := false;
    node26[11] := false;
    node26[12] := false;
    node26[13] := false;
    node26[14] := false;
    node26[15] := false;
    node26[16] := false;
    node26[17] := false;
    node26[18] := false;
    node26[19] := false;
    node26[20] := false;
    node26[21] := false;
    node26[22] := false;
    node26[23] := false;
    node26[24] := false;
    node26[25] := false;
    node26[26] := false;
    node26[27] := false;
    node26[28] := false;
    node26[29] := false;
    node26[30] := false;
    node31[0] := true;
    node78[0] := false;
    node78[1] := false;
    node88[0] := false;
    node88[1] := true;
    node104[0] := true;
    node104[1] := false;
    node121[0] := true;
    node121[1] := true;
    For i:0..0 Do
        node11[i]:=false;
    End;
    For i:0..0 Do
        node13[i]:=false;
    End;
    For i:0..0 Do
        node18[i]:=false;
    End;
    For i:0..0 Do
        node19[i]:=false;
    End;
    For i:0..0 Do
        flag[i]:=false;
    End;
    For i:0..0 Do
        node37[i]:=false;
    End;
    For i:0..1 Do
        out_data[i]:=false;
    End;
    For i:0..1 Do
        node52[i]:=false;
    End;
    For i:0..1 Do
        random_data[i]:=false;
    End;
    For i:0..3 Do
        mem[i][0]:=false;
        mem[i][1]:=false;
    End;
    node13 := node12;
    node19 := node12;
    node37 := node31;
    badNode[0] := false
endstartstate;

--rulenum
ruleset clk_:int_2;flag_fail_:int_2;in_data_:int_4;in_rd_:int_2;in_rd_addr_:int_4;in_wr_:int_2;in_wr_addr_:int_4;rst_n_:int_2;node56_:int_2;node63_:int_2;node122_:int_4;node142_:int_4;node143_:int_4;node144_:int_4;node148_:int_4;node149_:int_4;node150_:int_4 Do
rule
    true
    ==>
    Var clk : bitvec_1;
    Var flag_fail : bitvec_1;
    Var in_data : bitvec_2;
    Var in_rd : bitvec_1;
    Var in_rd_addr : bitvec_2;
    Var in_wr : bitvec_1;
    Var in_wr_addr : bitvec_2;
    Var rst_n : bitvec_1;
    Var node56 : bitvec_1;
    Var node63 : bitvec_1;
    Var node122 : bitvec_2;
    Var node142 : bitvec_2;
    Var node143 : bitvec_2;
    Var node144 : bitvec_2;
    Var node148 : bitvec_2;
    Var node149 : bitvec_2;
    Var node150 : bitvec_2;
    Var node15 : bitvec_1;
    Var node16 : bitvec_1;
    Var node21 : bitvec_1;
    Var node22 : bitvec_1;
    Var node24 : bitvec_1;
    Var node28 : bitvec_32;
    Var node29 : bitvec_1;
    Var node30 : bitvec_1;
    Var node32 : bitvec_1;
    Var node33 : bitvec_1;
    Var node36 : bitvec_1;
    Var node40 : bitvec_1;
    Var node41 : bitvec_1;
    Var node43 : bitvec_1;
    Var node44 : bitvec_1;
    Var node45 : bitvec_1;
    Var node47 : bitvec_1;
    Var node48 : bitvec_1;
    Var node49 : bitvec_1;
    Var node54 : bitvec_2;
    Var node57 : bitvec_1;
    Var node58 : bitvec_1;
    Var node59 : bitvec_1;
    Var node61 : bitvec_1;
    Var node66 : bitvec_2;
    Var node67 : bitvec_2;
    Var node68 : bitvec_1;
    Var node69 : bitvec_1;
    Var node71 : bitvec_1;
    Var node73 : bitvec_1;
    Var node74 : bitvec_1;
    Var node75 : bitvec_1;
    Var node76 : bitvec_1;
    Var node79 : bitvec_2;
    Var node80 : bitvec_2;
    Var node82 : bitvec_1;
    Var node83 : bitvec_1;
    Var node84 : bitvec_2;
    Var node85 : bitvec_1;
    Var node86 : bitvec_1;
    Var node87 : bitvec_2;
    Var node89 : bitvec_1;
    Var node90 : bitvec_1;
    Var node91 : bitvec_2;
    Var node92 : bitvec_2;
    Var node94 : bitvec_1;
    Var node95 : bitvec_2;
    Var node96 : bitvec_2;
    Var node97 : bitvec_2;
    Var node98 : bitvec_2;
    Var node99 : bitvec_2;
    Var node100 : bitvec_2;
    Var node101 : array_2_2;
    Var node102 : bitvec_1;
    Var node103 : array_2_2;
    Var node105 : bitvec_2;
    Var node106 : bitvec_2;
    Var node107 : bitvec_2;
    Var node108 : bitvec_2;
    Var node109 : bitvec_2;
    Var node110 : array_2_2;
    Var node111 : bitvec_1;
    Var node112 : array_2_2;
    Var node113 : bitvec_2;
    Var node114 : bitvec_2;
    Var node115 : bitvec_2;
    Var node116 : bitvec_2;
    Var node117 : bitvec_2;
    Var node118 : array_2_2;
    Var node119 : bitvec_1;
    Var node120 : array_2_2;
    Var node123 : bitvec_2;
    Var node124 : bitvec_2;
    Var node125 : bitvec_2;
    Var node126 : bitvec_2;
    Var node127 : bitvec_2;
    Var node128 : array_2_2;
    Var node129 : bitvec_1;
    Var node130 : array_2_2;
    Var node131 : bitvec_1;
    Var node132 : bitvec_1;
    Var node133 : bitvec_1;
    Var node134 : bitvec_1;
    Var node135 : bitvec_1;
    Var node136 : bitvec_1;
    Var node137 : bitvec_1;
    Var node138 : bitvec_1;
    Var node139 : bitvec_2;
    Var node140 : bitvec_1;
    Var node141 : bitvec_2;
    Var node145 : bitvec_2;
    Var node146 : bitvec_2;
    Var node147 : bitvec_2;
    Var node151 : bitvec_2;
    Var node152 : bitvec_2;
    Var node153 : bitvec_2;
    Var node154 : bitvec_2;
    Var node155 : bitvec_2;
    Var node156 : bitvec_1;
    Var node157 : bitvec_2;
    Var node158 : bitvec_2;
    Var node159 : bitvec_2;
    Var node160 : bitvec_2;
    Var node161 : bitvec_2;
    Var node162 : bitvec_2;
    Var node163 : array_2_2;
    Var node164 : bitvec_1;
    Var node165 : array_2_2;
    Var Nxtnode37 : bitvec_1;
    Var Nxtnode52 : bitvec_2;
    Var Nxtnode11 : bitvec_1;
    Var Nxtnode13 : bitvec_1;
    Var Nxtnode18 : bitvec_1;
    Var Nxtnode19 : bitvec_1;
    Var Nxtflag : bitvec_1;
    Var Nxtout_data : bitvec_2;
    Var Nxtrandom_data : bitvec_2;
    Var Nxtmem : array_2_2;
    begin
    clk := int2binary_2(clk_);
    flag_fail := int2binary_2(flag_fail_);
    in_data := int2binary_4(in_data_);
    in_rd := int2binary_2(in_rd_);
    in_rd_addr := int2binary_4(in_rd_addr_);
    in_wr := int2binary_2(in_wr_);
    in_wr_addr := int2binary_4(in_wr_addr_);
    rst_n := int2binary_2(rst_n_);
    node56 := int2binary_2(node56_);
    node63 := int2binary_2(node63_);
    node122 := int2binary_4(node122_);
    node142 := int2binary_4(node142_);
    node143 := int2binary_4(node143_);
    node144 := int2binary_4(node144_);
    node148 := int2binary_4(node148_);
    node149 := int2binary_4(node149_);
    node150 := int2binary_4(node150_);
    node15 :=  not_1(node11) ;
    node16 :=  and_1(node13, node15) ;
    node21 :=  not_1(node18) ;
    node22 :=  and_1(node19, node21) ;
    node24 :=  and_1(in_wr, in_rd) ;
    node28 :=  concat_31_1(node26, node24) ;
    node29 :=  redor_32(node28) ;
    node30 :=  not_1(node29) ;
    node32 :=  not_1(node31) ;
    node33 :=  or_1(node30, node32) ;
    node36 :=  not_1(flag) ;
    node40 :=  not_1(node37) ;
    node41 :=  or_1(node36, node40) ;
    node43 :=  not_1(flag_fail) ;
    node44 :=  not_1(node37) ;
    node45 :=  or_1(node43, node44) ;
    node47 :=  not_1(rst_n) ;
    node48 :=  not_1(node37) ;
    node49 :=  or_1(node47, node48) ;
    node54 := uext_2_0(node52);
    node57 :=  eq_2(random_data, out_data) ;
    node58 :=  and_1(flag, rst_n) ;
    node59 := node58[0]?node57:node56;
    node61 := node58[0]?node31:node12;
    node66 := read_2_2(mem,node52);
    node67 := read_2_2(mem,in_rd_addr);
    node68 :=  eq_2(random_data, node66) ;
    node69 := rst_n[0]?node68:node63;
    node71 := rst_n[0]?node31:node12;
    node73 :=  and_1(rst_n, in_rd) ;
    node74 :=  eq_2(in_rd_addr, node52) ;
    node75 :=  and_1(node73, node74) ;
    node76 := node75[0]?node31:node12;
    node79 := in_rd[0]?node67:out_data;
    node80 := rst_n[0]?node79:node78;
    node82 := slice_1_2_1_1(in_data);
    node83 := slice_1_2_0_0(in_data);
    node84 :=  concat_1_1(node83, node82) ;
    node85 :=  eq_2(in_wr_addr, node52) ;
    node86 :=  and_1(in_wr, node85) ;
    node87 := node86[0]?node84:random_data;
    node89 :=  ult_2(node52, node88) ;
    node90 :=  and_1(node86, node89) ;
    node91 := node90[0]?in_data:node87;
    node92 := rst_n[0]?node91:node78;
    node94 := rst_n[0]?node12:node31;
    node95 :=  concat_1_1(node94, node94) ;
    node96 := read_2_2(mem,node78);
    node97 :=  not_2(node95) ;
    node98 :=  and_2(node96, node97) ;
    node99 :=  and_2(node78, node95) ;
    node100 :=  or_2(node99, node98) ;
    node101 := write_2_2(mem,node78,node100);
    node102 :=  redor_2(node95) ;
    node103 := node102[0]?node101:mem;
    node105 := read_2_2(node103,node104);
    node106 :=  not_2(node95) ;
    node107 :=  and_2(node105, node106) ;
    node108 :=  and_2(node78, node95) ;
    node109 :=  or_2(node108, node107) ;
    node110 := write_2_2(node103,node104,node109);
    node111 :=  redor_2(node95) ;
    node112 := node111[0]?node110:node103;
    node113 := read_2_2(node112,node88);
    node114 :=  not_2(node95) ;
    node115 :=  and_2(node113, node114) ;
    node116 :=  and_2(node78, node95) ;
    node117 :=  or_2(node116, node115) ;
    node118 := write_2_2(node112,node88,node117);
    node119 :=  redor_2(node95) ;
    node120 := node119[0]?node118:node112;
    node123 := read_2_2(node120,node121);
    node124 :=  not_2(node78) ;
    node125 :=  and_2(node123, node124) ;
    node126 :=  and_2(node122, node78) ;
    node127 :=  or_2(node126, node125) ;
    node128 := write_2_2(node120,node121,node127);
    node129 :=  redor_2(node78) ;
    node130 := node129[0]?node128:node120;
    node131 :=  ult_2(in_wr_addr, node88) ;
    node132 := node131[0]?node31:node12;
    node133 := in_wr[0]?node132:node12;
    node134 := rst_n[0]?node133:node12;
    node135 := node131[0]?node12:node31;
    node136 := in_wr[0]?node135:node12;
    node137 := rst_n[0]?node136:node12;
    node138 :=  or_1(node134, node137) ;
    node139 :=  concat_1_1(node138, node138) ;
    node140 :=  redor_2(node139) ;
    node141 := node140[0]?in_wr_addr:node121;
    node145 := node131[0]?in_data:node144;
    node146 := in_wr[0]?node145:node143;
    node147 := rst_n[0]?node146:node142;
    node151 := node131[0]?node150:node84;
    node152 := in_wr[0]?node151:node149;
    node153 := rst_n[0]?node152:node148;
    node154 := node137[0]?node153:node147;
    node155 := node140[0]?node154:node78;
    node156 := node140[0]?node138:node94;
    node157 :=  concat_1_1(node156, node156) ;
    node158 := read_2_2(node130,node141);
    node159 :=  not_2(node157) ;
    node160 :=  and_2(node158, node159) ;
    node161 :=  and_2(node155, node157) ;
    node162 :=  or_2(node161, node160) ;
    node163 := write_2_2(node130,node141,node162);
    node164 :=  redor_2(node157) ;
    node165 := node164[0]?node163:node130;
    If node33[0]&node41[0]&node45[0]&node49[0] then
        Nxtnode37 := node12;
        Nxtnode52 := node52;
        Nxtnode11 := node58[0]?node57:node56;
        Nxtnode13 := node58[0]?node31:node12;
        Nxtnode18 := rst_n[0]?node68:node63;
        Nxtnode19 := rst_n[0]?node31:node12;
        Nxtflag := node75[0]?node31:node12;
        Nxtout_data := rst_n[0]?node79:node78;
        Nxtrandom_data := rst_n[0]?node91:node78;
        Nxtmem := node164[0]?node163:node130;
        node37 := Nxtnode37;
        node52 := Nxtnode52;
        node11 := Nxtnode11;
        node13 := Nxtnode13;
        node18 := Nxtnode18;
        node19 := Nxtnode19;
        flag := Nxtflag;
        out_data := Nxtout_data;
        random_data := Nxtrandom_data;
        mem := Nxtmem;
        badNode := node22;
    End;
endrule; endruleset;
invariant badNode[0]=false;