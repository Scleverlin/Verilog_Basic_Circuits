// `include "/home/shi/verilog/FP_32/ADD_SUB/FP_32_add_or_sub.sv"
// `include "/home/shi/verilog/FP_32/MUL/FP32_mul.sv"

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

logic [73:0] ext_mul_ab, ext_man_c_tmp,ext_man_c;
assign ext_mul_ab={26'b0,mul_a_b};
assign ext_man_c_tmp={27'b0,man_c,23'b0};
logic [7:0]shift;
logic [8:0]comple_exp_c;
assign comple_exp_c=~true_exp_c_minus_ab_signed+1'b1;
assign shift=true_exp_c_minus_ab_signed[8]?comple_exp_c[7:0]:true_exp_c_minus_ab_signed[7:0];
assign ext_man_c= true_exp_c_minus_ab_signed[8]?ext_man_c_tmp>>shift:ext_man_c_tmp<<shift;

logic guard,round,sticky,sign_of_add;
logic [7:0] exp_add_first;
logic [74:0] add_result,add_result_shifted;

adder_76 adder_76 (ext_mul_ab,ext_man_c,add_result,sign_c,sign_of_add);  // when shift <=27, need add
logic shift_l_27;
assign shift_l_27 = (true_exp_c_minus_ab_signed[8]||shift<=27)?1'b1:1'b0;// if exp of c-ab <0, it means a leftshift of minus number.

m_n_gen mn_gen(add_result,add_result_shifted,exp_add_first);


//sign determination 
//a>0, b>0,c>0:mul>0,c>0, sign=0
//a<0, b<0,c<0:mul>0,c>0, sign=0

//a or b >0 <0, c>0: mul<0,c>0, need calculate 
//a or b >0 <0, c<0: mul<0,c<0, need calculate   

// think about rounding
logic [23:0] add_man;
logic [23:0] rounded_man;
logic exp_add ;




logic result_head_is_zero;
assign result_head_is_zero= ~add_result_shifted[74];

logic [7:0] exp_minus;// only wiil happen when man is 0.XXXXXXXXXX and true_exp_c_minus_ab_signed is  larger than -126
logic  close_to_zero; // when true_E1+E2-254 is -126, and result head is zero;
logic exp_is_n126;
logic [8:0] exp_comple;
assign exp_comple=~true_exp_c_minus_ab_signed+1'b1;
assign exp_is_n126= (exp_comple==9'd126)?1'b1:1'b0;

assign close_to_zero= (exp_is_n126 && result_head_is_zero)?1'b1:1'b0;// exp=-126 , man=0.xxxxx


logic [74:0] add_result_copy ;
assign add_result_copy= add_result_shifted;
logic [74:0] add_result_copy_shifted;
logic [7:0] exp_minus_from_copy;
logic [7:0] max_shift;

assign max_shift=8'd126-exp_comple[7:0];

m_n_gen_2 m_n_gen2(add_result_copy,max_shift,add_result_copy_shifted,exp_minus_from_copy);

logic [74:0] final_result;

assign final_result= add_result_copy_shifted;


assign guard = shift_l_27? final_result[50]:1'b0;
assign round = shift_l_27? final_result[49]:1'b0;
assign sticky = final_result[48:0]==49'b0 ? 1'b0:1'b1; 

assign add_man=final_result[74:51];

rounding rounding(add_man, guard,round, sticky,rounded_man,exp_add);

logic [8:0]final_exponent_tmp,final_exponent;

assign final_exponent_tmp= true_exp_ab_signed+{8'b0,exp_add}+{1'b0,exp_add_first}+9'd127+~{1'b0,exp_minus_from_copy}+1'b1;
assign final_exponent=close_to_zero?8'b0:final_exponent_tmp[8:0];
logic final_sign;

assign final_sign= ~((~(sign_a^sign_b))^sign_of_add);

assign result={final_sign,final_exponent[7:0],rounded_man[22:0]};
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

module adder_76(a,b,result,add_or_sub,sign);
input logic [73:0]a,b;
output logic [74:0]result;
input logic add_or_sub;//1 is sub, 0 is add
output logic sign;
logic abs_a_h_b;
assign abs_a_h_b= (a>=b) ?1'b1:1'b0;
assign sign = (add_or_sub==1'b1 && abs_a_h_b==1'b0)?1'b1:1'b0;// a<b and sub, sign=1
logic [75:0]a_ext,b_ext;
assign a_ext=sign?{2'b0,b}:{2'b0,a};
assign b_ext=(abs_a_h_b&&add_or_sub)?~{2'b0,b}+1'b1:sign?~{2'b0,a}+1'b1:{2'b0,b}; // a-b and a>b, b=-b; a-b and a<b,b=-a; other b=b
logic [75:0]add_result;
assign add_result=a_ext+b_ext;
assign result=add_result[74:0];
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

module rounding(
  input wire [23:0] man,  // 24-bit mantissa with implicit bit
  input wire guard,       // Guard bit
  input wire round,       // Round bit
  input wire sticky,      // Sticky bit
  output wire [23:0] rounded_man,  // Rounded mantissa
  output wire exp_add              // Set if there's a carry that affects the exponent
);
  wire halfway = guard && !round && !sticky;  // Exactly between two representable values
  wire lsb = man[0];  // Least Significant Bit of the mantissa
  // Increment the mantissa if guard bit is set and (round or sticky bit is set or the mantissa is odd)
  wire increment = guard && (round || sticky || lsb);
  // Calculate the potential new mantissa with the increment
  wire [23:0] new_man = man + 24'd1;
  // Check if an increment would cause a carry, which implies the exponent needs to be incremented
  assign exp_add = increment && (new_man[23] == 1'b0);
  // Select the final rounded mantissa
  assign rounded_man = increment ? new_man : man;
endmodule


module m_n_gen (
    input logic [74:0] data,
    output logic [74:0] outdata,
    output logic [7:0] shift
);
logic [7:0]shift_tmp;
assign shift_tmp = 
               (data[74] == 1) ? 0 ://28
               (data[73] == 1) ? 1 :
               (data[72] == 1) ? 2 :
               (data[71] == 1) ? 3 :
               (data[70] == 1) ? 4 :
               (data[69] == 1) ? 5 :
               (data[68] == 1) ? 6 :
               (data[67] == 1) ? 7 :
               (data[66] == 1) ? 8 :
               (data[65] == 1) ? 9 :
               (data[64] == 1) ? 10 :
               (data[63] == 1) ? 11 :
               (data[62] == 1) ? 12 :
               (data[61] == 1) ? 13 :
               (data[60] == 1) ? 14 :
               (data[59] == 1) ? 15 :
               (data[58] == 1) ? 16 :
               (data[57] == 1) ? 17 :
               (data[56] == 1) ? 18 :
               (data[55] == 1) ? 19 :
               (data[54] == 1) ? 20 :
               (data[53] == 1) ? 21 :
               (data[52] == 1) ? 22 :
               (data[51] == 1) ? 23 :
               (data[50] == 1) ? 24 : 
               (data[49] == 1) ? 25 :
               (data[48] == 1) ? 26 :
               (data[47] == 1) ? 27 :
               (data[46] == 1) ? 28 :
               28;

assign outdata = data << shift_tmp;
assign shift=8'd28+ ~shift_tmp+8'd1;
endmodule


module m_n_gen_2 (
    input logic [74:0] data,
    input logic [7:0]max_shift,
    output logic [74:0] outdata,
    output logic [7:0] shift
);

logic [7:0]shift_tmp;
assign shift_tmp = 
               (data[74] == 1) ? 0 ://23
               (data[73] == 1) ? 1 :
               (data[72] == 1) ? 2 :
               (data[71] == 1) ? 3 :
               (data[70] == 1) ? 4 :
               (data[69] == 1) ? 5 :
               (data[68] == 1) ? 6 :
               (data[67] == 1) ? 7 :
               (data[66] == 1) ? 8 :
               (data[65] == 1) ? 9 :
               (data[64] == 1) ? 10 :
               (data[63] == 1) ? 11 :
               (data[62] == 1) ? 12 :
               (data[61] == 1) ? 13 :
               (data[60] == 1) ? 14 :
               (data[59] == 1) ? 15 :
               (data[58] == 1) ? 16 :
               (data[57] == 1) ? 17 :
               (data[56] == 1) ? 18 :
               (data[55] == 1) ? 19 :
               (data[54] == 1) ? 20 :
               (data[53] == 1) ? 21 :
               (data[52] == 1) ? 22 :
               (data[51] == 1) ? 23 :
               23;
logic bigger_than_max;
assign bigger_than_max= shift_tmp>max_shift?1'b1:1'b0;
assign outdata = bigger_than_max?data<<max_shift:data << shift_tmp;
assign shift=shift_tmp;
endmodule

