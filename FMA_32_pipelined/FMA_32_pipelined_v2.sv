`include "FMA_stages_v2.sv"

module FMA_32_pipelined_v2(a,b,c,result);
input logic [31:0] a;
input logic [31:0] b;
input logic [31:0] c;
output logic [31:0] result;

// output logic pipeline stage 1
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



logic  [75:0] add_result;
logic [7:0]current_exp_stage3;
logic [7:0] exp_c_stage3;
logic final_sign;
logic mode;
logic right_or_left_stage3;

FMA_stage3 stage3 (r_or_l,shift_ex_c,e_c,op_mode,cur_exp,mul,sign,final_sign,add_result,current_exp_stage3,exp_c_stage3,mode,right_or_left_stage3);

logic [1:0] mode_and_direction;
logic [26:0] rounded_man;
logic [7:0] current_exp_round;
logic final_sign_v2;
logic [7:0] exp_c_final;
logic signed [7:0] exp_shift;

FMA_stage4 stage4 (add_result,current_exp_stage3,final_sign,mode,right_or_left_stage3,exp_c_stage3,rounded_man, current_exp_round,final_sign_v2,exp_c_final,exp_shift,mode_and_direction);


FMA_stage5 stage5 (mode_and_direction,rounded_man, current_exp_round,final_sign_v2,exp_c_final,exp_shift,result);




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

logic r_or_l_reg;
logic [7:0]e_c_reg;
logic op_mode_reg;
logic [7:0]cur_exp_reg;
logic [47:0]mul_reg;
logic [1:0] sign_reg;


logic  [75:0] add_result;
logic [7:0]current_exp_stage3;
logic [7:0] exp_c_stage3;
logic final_sign;
logic mode;
logic right_or_left_stage3;


logic  [75:0] add_result_reg;
logic [7:0]current_exp_stage3_reg;
logic [7:0] exp_c_stage3_reg;
logic final_sign_reg;
logic mode_reg;
logic right_or_left_stage3_reg;



logic [1:0] mode_and_direction;
logic [26:0] rounded_man;
logic [7:0] current_exp_round;
logic final_sign_v2;
logic [7:0] exp_c_final;
logic signed [7:0] exp_shift;


logic [1:0] mode_and_direction_reg;
logic [26:0] rounded_man_reg;
logic [7:0] current_exp_round_reg;
logic final_sign_v2_reg;
logic [7:0] exp_c_final_reg;
logic signed [7:0] exp_shift_reg;

FMA_stage1 stage1 (a,b,c,current_exp,man_a,man_b,man_c,sign_ab,sign_real_c,exp_c,shift,right_or_left); // 

FMA_stage2 stage2 (shift_reg,right_or_left_reg,current_exp_reg,exp_c_reg,man_a_reg,man_b_reg,man_c_reg,sign_ab_reg,sign_real_c_reg,op_mode,shift_ex_c,cur_exp,e_c,sign,mul,r_or_l);


FMA_stage3 stage3 (r_or_l_reg,shift_ex_c_reg,e_c_reg,op_mode_reg,cur_exp_reg,mul_reg,sign_reg,   final_sign,add_result,current_exp_stage3,exp_c_stage3,mode,right_or_left_stage3);

FMA_stage4 stage4 (add_result_reg,current_exp_stage3_reg,final_sign_reg,mode_reg,right_or_left_stage3_reg,exp_c_stage3_reg,   rounded_man, current_exp_round,final_sign_v2,exp_c_final,exp_shift,mode_and_direction);

logic [31:0] result_wire;
FMA_stage5 stage5 (mode_and_direction_reg,rounded_man_reg, current_exp_round_reg,final_sign_v2_reg,exp_c_final_reg,exp_shift_reg,result_wire);

always_ff @(posedge clk or posedge rst)
begin
   if (rst)begin
   result<=0;
   end
   else begin
    //stage1
assign four={mantissa_a_with_si
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
    add_result_reg<=add_result;
    current_exp_stage3_reg<=current_exp_stage3;
    exp_c_stage3_reg<=exp_c_stage3;
    final_sign_reg<=final_sign;
    mode_reg<=mode;
    right_or_left_stage3_reg<=right_or_left_stage3;
   
   //stage4 
    mode_and_direction_reg<= mode_and_direction;
    rounded_man_reg<=rounded_man;
    current_exp_round_reg<=current_exp_round;
    final_sign_v2_reg<=final_sign_v2;
    exp_c_final_reg<=exp_c_final;
    exp_shift_reg<=exp_shift;
   
   //stage5
    result<=result_wire;
   end
end


endmodule