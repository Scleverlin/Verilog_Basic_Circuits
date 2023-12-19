`include "FMA_stages_v3.sv"

module FMA_32_pipelined_v3(a,b,c,result);
input logic [31:0] a;
input logic [31:0] b;
input logic [31:0] c;
output logic [31:0] result;

// logic pipeline stage 1
logic [7:0] current_exp;
logic [23:0]man_a,man_b,man_c;
logic [7:0]shift;
logic right_or_left;
logic [74:0]shift_ex_c;
logic sign_ab,sign_real_c;
logic [7:0]exp_c;

logic r_or_l;
logic [7:0]e_c;
logic op_mode;
logic [7:0]cur_exp;
logic [47:0]mul;
logic [1:0] sign;


FMA_stage1 stage1 (a,b,c,current_exp,man_a,man_b,man_c,sign_ab,sign_real_c,exp_c,shift,right_or_left); // 
FMA_stage2 stage2 (shift,right_or_left,current_exp,exp_c,man_a,man_b,man_c,sign_ab,sign_real_c,op_mode,shift_ex_c,cur_exp,e_c,sign,mul,r_or_l);


logic  [39:0] add_result_tmp;
logic [7:0]current_exp_stage3;
 logic [7:0] exp_c_stage3;
logic mode;
logic func_sign;
logic right_or_left_stage3;
logic cin2;
logic [7:0]left_mul;
logic [35:0]left_ext_c;

FMA_stage3 stage3 (r_or_l,shift_ex_c,e_c,op_mode,cur_exp,mul,sign,add_result_tmp,current_exp_stage3,exp_c_stage3,mode,right_or_left_stage3,cin2,left_mul,left_ext_c,func_sign);


logic [1:0] mode_and_direction;
logic [7:0] current_exp_round;
logic final_sign_v2;
logic [7:0] exp_c_final;
logic [37:0]left_shift_add_result;
logic signed [8:0]real_shift_stage4;
logic signed [8:0]shift_left;
FMA_stage4 stage4 (func_sign,left_mul,left_ext_c,add_result_tmp,cin2,current_exp_stage3,mode,right_or_left_stage3,exp_c_stage3,left_shift_add_result, current_exp_round,final_sign_v2,exp_c_final,shift_left,mode_and_direction,real_shift_stage4);

FMA_stage5 stage5 (real_shift_stage4, mode_and_direction, left_shift_add_result     ,shift_left, current_exp_round,final_sign_v2,exp_c_final,result);

endmodule


module FMA_clk (clk,rst,a,b,c,result);
input logic [31:0] a;
input logic [31:0] b;
input logic [31:0] c;
output logic [31:0] result;
input logic clk,rst;


logic [7:0] current_exp;
logic [23:0]man_a,man_b,man_c;
logic [7:0]shift;
logic right_or_left;
logic [74:0]shift_ex_c;
logic sign_ab,sign_real_c;
logic [7:0]exp_c;

FMA_stage1 stage1 (a,b,c,current_exp,man_a,man_b,man_c,sign_ab,sign_real_c,exp_c,shift,right_or_left); // 

logic [7:0] current_exp_reg;
logic [23:0]man_a_reg,man_b_reg,man_c_reg;
logic [7:0]shift_reg;
logic right_or_left_reg;
logic [74:0]shift_ex_c_reg;
logic sign_ab_reg,sign_real_c_reg;
logic [7:0]exp_c_reg;

logic r_or_l;
logic [7:0]e_c;
logic op_mode;
logic [7:0]cur_exp;
logic [47:0]mul;
logic [1:0] sign;


FMA_stage2 stage2 (shift_reg,right_or_left_reg,current_exp_reg,exp_c_reg,man_a_reg,man_b_reg,man_c_reg,sign_ab_reg,sign_real_c_reg,op_mode,shift_ex_c,cur_exp,e_c,sign,mul,r_or_l);

logic r_or_l_reg;
logic [7:0]e_c_reg;
logic op_mode_reg;
logic [7:0]cur_exp_reg;
logic [47:0]mul_reg;
logic [1:0] sign_reg;



logic  [39:0] add_result_tmp;
logic [7:0]current_exp_stage3;
 logic [7:0] exp_c_stage3;
logic mode;
logic func_sign;
logic right_or_left_stage3;
logic cin2;
logic [7:0]left_mul;
logic [35:0]left_ext_c;

FMA_stage3 stage3 (r_or_l_reg,shift_ex_c_reg,e_c_reg,op_mode_reg,cur_exp_reg,mul_reg,sign_reg,add_result_tmp,current_exp_stage3,exp_c_stage3,mode,right_or_left_stage3,cin2,left_mul,left_ext_c,func_sign);

logic  [39:0] add_result_tmp_reg;
logic [7:0]current_exp_stage3_reg;
 logic [7:0] exp_c_stage3_reg;
logic mode_reg;
logic func_sign_reg;
logic right_or_left_stage3_reg;
logic cin2_reg;
logic [7:0]left_mul_reg;
logic [35:0]left_ext_c_reg;

FMA_stage4 stage4 (func_sign_reg,left_mul_reg,left_ext_c_reg,add_result_tmp_reg,cin2_reg,current_exp_stage3_reg,mode_reg,right_or_left_stage3_reg,exp_c_stage3_reg,left_shift_add_result, current_exp_round,final_sign_v2,exp_c_final,shift_left,mode_and_direction,real_shift_stage4);

logic [1:0] mode_and_direction;
logic [7:0] current_exp_round;
logic final_sign_v2;
logic [7:0] exp_c_final;
logic [37:0]left_shift_add_result;
logic signed [8:0]real_shift_stage4;
logic signed [8:0]shift_left;


logic [1:0] mode_and_direction_reg;
logic [7:0] current_exp_round_reg;
logic final_sign_v2_reg;
logic [7:0] exp_c_final_reg;
logic [37:0]left_shift_add_result_reg;
logic signed [8:0]real_shift_stage4_reg;
logic signed [8:0]shift_left_reg;

FMA_stage5 stage5 (real_shift_stage4_reg, mode_and_direction_reg, left_shift_add_result_reg     ,shift_left_reg, current_exp_round_reg,final_sign_v2_reg,exp_c_final_reg,result_wire);

logic [31:0] result_wire;
always_ff @(posedge clk or posedge rst)
begin
   if (rst)begin
   result<=0;
   end
   else begin
    //stage1
    current_exp_reg<=current_exp;
    man_a_reg<=man_a;
    man_b_reg<=man_b;
    man_c_reg<=man_c;  
    shift_reg<=shift;
    right_or_left_reg<=right_or_left;
    shift_ex_c_reg<=shift_ex_c;
    sign_ab_reg<=sign_ab;
    sign_real_c_reg<=sign_real_c;
    exp_c_reg<=exp_c;

    // stage2
    r_or_l_reg<=r_or_l;
    e_c_reg<=e_c;
    op_mode_reg<=op_mode;
    cur_exp_reg<=cur_exp;
    mul_reg<=mul;
    sign_reg<=sign;


    //stage3
   add_result_tmp_reg<=add_result_tmp;
   current_exp_stage3_reg<=current_exp_stage3;
   exp_c_stage3_reg<=exp_c_stage3;
   mode_reg<=mode;
   func_sign_reg<=func_sign;
   right_or_left_stage3_reg<=right_or_left_stage3;
   cin2_reg<=cin2;
   left_mul_reg<=left_mul;
   left_ext_c_reg<=left_ext_c;
   
   //stage4 
   mode_and_direction_reg<=mode_and_direction;
   current_exp_round_reg<=current_exp_round;
   final_sign_v2_reg<=final_sign_v2;
   exp_c_final_reg<=exp_c_final;
   left_shift_add_result_reg<=left_shift_add_result;
   real_shift_stage4_reg<=real_shift_stage4;
   shift_left_reg<=shift_left;
   
   //stage5
    result<=result_wire;
   end
end


endmodule