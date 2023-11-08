// `include "/home/shi/verilog/FP_32/ADD_SUB/FP_32_add_or_sub.sv"
// `include "/home/shi/verilog/FP_32/MUL/FP32_mul.sv"
`define limit_rounding 9'd126

module FMA_32(a,b,c,result);
input logic [31:0]a,b,c;
output logic [31:0]result;

logic sign_a,sign_b,sign_c;
logic [7:0]exp_a,exp_b,exp_c;
logic [23:0]man_a,man_b,man_c;
logic [47:0]mul_a_b;
logic [8:0]true_exp_ab_signed,true_exp_c_minus_ab_signed;// E1+E2-254 or -256, 9 bits,  E3-E1-E2+127 or +126
extractor_FP_32 ex_a(a,sign_a,exp_a,man_a);
extractor_FP_32 ex_b(b,sign_b,exp_b,man_b);
extractor_FP_32 ex_c(c,sign_c,exp_c,man_c);

mul_24 mul(man_a,man_b,mul_a_b);
pre_processing preprocessing (exp_a,exp_b,exp_c,true_exp_ab_signed,true_exp_c_minus_ab_signed);

logic [71:0] ext_mul_ab, ext_man_c_tmp,ext_man_c;
assign ext_mul_ab={24'b0,mul_a_b};
assign ext_man_c_tmp={}


logic guard,round,sticky;
adder_74 adder_74 ();  // when shift <=25, need add

// above adder neeed be changed to suit g r s.

//sign determination 
//a>0, b>0,c>0:mul>0,c>0, sign=0
//a<0, b<0,c<0:mul>0,c>0, sign=0

//a or b >0 <0, c>0: mul<0,c>0, need calculate 
//a or b >0 <0, c<0: mul<0,c<0, need calculate   

// think about rounding








endmodule

module mul_24(a,b,result);
input logic [23:0]a,b;
output logic [47:0]result;

assign result = a*b;
endmodule

module extractor_FP_32(a,sign,exp,man);
input logic [31:0]a;
output logic sign;
output logic [7:0]exp;
output logic [23:0]man;

assign sign = a[31];

assign exp=a[30:23];

assign man=(exp==8'b0)?{1'b0,a[22:0]}:{1'b1,a[22:0]};

endmodule

module adder_74(a,b,result,add_or_sub,sign);
input logic [71:0]a,b;
output logic [72:0]result;
input logic add_or_sub;//1 is sub, 0 is add
output logic sign;
logic abs_a_h_b;
assign abs_a_h_b= (a>=b) ?1'b1:1'b0;
assign sign = (add_or_sub==1'b1 && abs_a_h_b==1'b0)?1'b1:1'b0;// a<b and sub, sign=1
logic [73:0]a_ext,b_ext;
assign a_ext=sign?{2'b0,b}:{2'b0,a};
assign b_ext=(abs_a_h_b&&add_or_sub)?~{2'b0,b}+1'b1:sign?~{2'b0,a}+1'b1:{2'b0,b}; // a-b and a>b, b=-b; a-b and a<b,b=-a; other b=b
logic [73:0]add_result;
assign add_result=a_ext+b_ext;
assign result=add_result[72:0]
endmodule


module pre_processing (exp_a,exp_b,exp_c,true_exp_ab_signed,true_exp_c_minus_ab_signed);
input logic [7:0]exp_a,exp_b,exp_c;
output logic [8:0]true_exp_ab_signed,true_exp_c_minus_ab_signed;

logic [8:0] data_127,data_126;
assign data_127=9'd127;
assign data_126=9'd126;

logic [8:0]true_a,true_b,true_c;

assign true_a=(exp_a==8'b0)?~data_126+1'b1:{1'b0,exp_a}+~data_127+1'b1;

assign true_b=(exp_b==8'b0)?~data_126+1'b1:{1'b0,exp_b}+~data_127+1'b1;

assign true_c=(exp_c==8'b0)?~data_126+1'b1:{1'b0,exp_c}+~data_127+1'b1;

assign true_exp_ab_signed=true_a+true_b;

assign true_exp_c_minus_ab_signed=true_c+ ~true_exp_ab_signed + 1'b1;

endmodule