`include "normalization.sv"

module FP_32_add_or_sub(add1,add2,command,result);
input logic [31:0] add1;
input logic [31:0] add2;
input logic command;//1 is add, 0 is sub
output logic [31:0] result;

logic current_add;
logic current_sub;

assign current_add=command;
assign current_sub=~command;
logic [23:0] man_a; // a and b will be decided by the mode, order may be changed
logic [23:0] man_b;
logic [7:0] exponent_a;
logic [7:0] exponent_b;
logic result_sign;
logic add_or_sub;//1 is add, 0 is sub
normalization norm (add1,add2,current_add,current_sub,man_a,man_b,exponent_a,exponent_b,result_sign,add_or_sub);

// need consider exponent == 0
// both exponent == 0, dont need to shift, but may need to add one in exponent if there is an one in 24th bit
// if only one exponent == 0, just normal, but need add one in exponent. // E1-E2 or E1-1-0 
logic [7:0]e1_e2,e1_e2_0; // how about E1=0 and E2=0?
logic [7:0]shift_before_add;
logic [8:0]e1_e2_tmp;

assign e1_e2_tmp={1'b0,exponent_a}+ ~{1'b0,exponent_b}+9'b1;
assign e1_e2=e1_e2_tmp[7:0];
assign e1_e2_0=exponent_a+ ~{8'b1}+8'b1;


assign shift_before_add= (exponent_a>8'b0&& exponent_b >8'b0)? e1_e2 : (exponent_a>8'b0&&exponent_b==8'b0)? e1_e2_0 :8'b0  ;

logic [7:0]current_exponent_tmp;

assign current_exponent_tmp= (exponent_a>8'b0&& exponent_b >8'b0)? exponent_b : (exponent_a>8'b0&&exponent_b==8'b0)? 8'b1 :8'b0  ;

logic result_shift_or_not;

assign result_shift_or_not= (exponent_a==8'b0&&exponent_b==8'b0)?1'b0:1'b1;// when E1=E2=0, dont need to shift, but may need to add one in exponent if there is an one in 24th bit

logic [7:0]add_one_in_exponent;// 
assign add_one_in_exponent=8'b1;

logic add_or_not;// use adder or not

assign add_or_not=(e1_e2>8'd23)?1'b0:1'b1;

logic [46:0]extent_a,extent_a_shift,extent_b;

assign extent_a={23'b0,man_a};

assign extent_a_shift=extent_a<<e1_e2;

assign extent_b=add_or_sub?{23'b0,man_b}:{20'hFFFFF,2'b11,~{1'b0,man_b}+25'b1};
logic [46:0]final_f_add;
logic [47:0]fianl_f_shift;
logic [7:0]shift_nums;
logic [23:0]final_f_concat;
logic [47:0]final_f_add_tmp;
logic cout;
adder_46 adder (extent_a_shift,extent_b,final_f_add,cout);
assign final_f_add_tmp=add_or_sub?{cout,final_f_add}:{1'b0,final_f_add};    
m_n_gen m_n (final_f_add,fianl_f_shift,shift_nums);
logic [23:0] final_man_e1_eq_e2_eq_zero;
adder_24 adder_24(man_a,man_b,final_man_e1_eq_e2_eq_zero);

logic [7:0]final_exponent,final_exponent_e1e2eqzero;

assign final_exponent_e1e2eqzero=final_man_e1_eq_e2_eq_zero[23]? current_exponent_tmp+add_one_in_exponent:current_exponent_tmp;
assign final_exponent=current_exponent_tmp+shift_nums;


assign final_f_concat=man_a; // ignore rounding temporarily

logic [31:0]final_result_concat;
logic [31:0]final_result_add_or_sub;
logic [31:0]final_result_e1e2eqzero;

assign final_result_concat={result_sign,exponent_a,final_f_concat[22:0]};
assign final_result_add_or_sub={result_sign,final_exponent,fianl_f_shift[46:24]};// ignore rounding temporarily
assign final_result_e1e2eqzero={result_sign,final_exponent_e1e2eqzero,final_man_e1_eq_e2_eq_zero[22:0]};

assign result=~add_or_not?final_result_concat:result_shift_or_not?final_result_add_or_sub:final_result_e1e2eqzero;
endmodule


module adder_46(a,b,sum,cout);
input logic [46:0] a;
input logic [46:0] b;
output logic cout;
output logic [46:0] sum;

assign {cout,sum}=a+b;

endmodule


module m_n_gen (
    input logic [47:0] data,
    output logic [47:0] outdata,
    output logic [7:0] shift
);
logic [7:0]shift_tmp;
assign shift_tmp = (data[47] == 1) ? 0 :
               (data[46] == 1) ? 1 :
               (data[45] == 1) ? 2 :
               (data[44] == 1) ? 3 :
               (data[43] == 1) ? 4 :
               (data[42] == 1) ? 5 :
               (data[41] == 1) ? 6 :
               (data[40] == 1) ? 7 :
               (data[39] == 1) ? 8 :
               (data[38] == 1) ? 9 :
               (data[37] == 1) ? 10 :
               (data[36] == 1) ? 11 :
               (data[35] == 1) ? 12 :
               (data[34] == 1) ? 13 :
               (data[33] == 1) ? 14 :
               (data[32] == 1) ? 15 :
               (data[31] == 1) ? 16 :
               (data[20] == 1) ? 17 :
               (data[29] == 1) ? 18 :
               (data[28] == 1) ? 19 :
               (data[27] == 1) ? 20 :
               (data[26] == 1) ? 21 :
               (data[25] == 1) ? 22 :
               (data[24] == 1) ? 23 : 
               (data[23] == 1) ? 24 :
               0;

assign outdata = data << shift_tmp;
assign shift=8'd24+ ~shift_tmp+8'd1;
endmodule

module adder_24(a,b,sum);
input logic [23:0] a;
input logic [23:0] b;

output logic [23:0] sum;

assign sum=a+b;

endmodule