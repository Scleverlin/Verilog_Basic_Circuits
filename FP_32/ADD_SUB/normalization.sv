`include "preprocessing.sv"

module normalization(add1,add2,add,sub,man_a,man_b,exponent_a,exponent_b,result_sign,add_or_sub);
input logic [31:0] add1;
input logic [31:0] add2;
input logic add;
input logic sub;
output logic [23:0] man_a; // a and b will be decided by the mode, order may be changed
output logic [23:0] man_b;
output logic [7:0] exponent_a;
output logic [7:0] exponent_b;
output logic result_sign;
output logic add_or_sub;//1 is add, 0 is sub

logic [1:0]mode;

preprocessing pre_processing (add1,add2,add,sub,result_sign,mode);

assign add_or_sub= (mode==`plus || mode==`plus_then_mius)?1'b1:1'b0;

logic [23:0] man_a_tmp, man_b_tmp;

assign {man_a_tmp[22:0],man_b_tmp[22:0]}=(mode==`reverse_minus)?{add2[22:0],add1[22:0]}:{add1[22:0],add2[22:0]};




assign  {exponent_a,exponent_b}=(mode==`reverse_minus)?{add2[30:23],add1[30:23]}:{add1[30:23],add2[30:23]};

assign man_a_tmp[23] = (exponent_a == 8'd0) ? 1'b0 : 1'b1;
assign man_b_tmp[23] = (exponent_b == 8'd0) ? 1'b0:  1'b1;

assign {man_a,man_b}={man_a_tmp,man_b_tmp};

endmodule  


