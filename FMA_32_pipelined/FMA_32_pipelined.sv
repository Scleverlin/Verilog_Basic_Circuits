`include "FMA_stages.sv"

module FMA_32_pipelined(a,b,c,result);
input logic [31:0] a;
input logic [31:0] b;
input logic [31:0] c;
output logic [31:0] result;


// output logic pipeline stage 1
logic [7:0] current_exp;
logic [23:0]man_a,man_b;
logic [1:0]op_mode; //00 : right shift but concat
                           //01 : right shift but need add
                           //10 : left  shift but concat
                           //11 : left  shift but need add  
logic [73:0]shift_ex_c;
logic sign_ab,sign_real_c;

logic [7:0]exp_c;

FMA_stage1 stage1 (a,b,c,current_exp,man_a,man_b,sign_ab,sign_real_c,op_mode,shift_ex_c,exp_c);


logic [50:0] man_compl;
logic final_sign;
logic [1:0]mode;
logic [7:0]cur_exp;
logic mul_zero;
logic [7:0]e_c;
FMA_stage2 stage2 (current_exp,exp_c,man_a,man_b,sign_ab,sign_real_c,op_mode,shift_ex_c,man_compl,final_sign,cur_exp,e_c,mul_zero,mode);


FMA_stage3 stage3 (cur_exp,e_c,mode,man_compl,final_sign,result,mul_zero);



endmodule