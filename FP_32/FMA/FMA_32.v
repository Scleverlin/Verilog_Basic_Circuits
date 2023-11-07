// `include "/home/shi/verilog/FP_32/ADD_SUB/FP_32_add_or_sub.sv"
// `include "/home/shi/verilog/FP_32/MUL/FP32_mul.sv"
module FMA_32(a,b,c,result);
input logic [31:0]a,b,c;
output logic [31:0]result;

//sign determination 
//a>0, b>0,c>0:mul>0,c>0, sign=0
//a<0, b<0,c<0:mul>0,c>0, sign=0

//a or b >0 <0, c>0: mul<0,c>0, need calculate 
//a or b >0 <0, c<0: mul<0,c<0, need calculate   

// think about rounding








endmodule
