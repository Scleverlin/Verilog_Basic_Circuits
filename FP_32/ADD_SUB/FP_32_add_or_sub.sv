`include "normalization.sv"

module FP_32_add_or_sub();
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

// for add 
logic [7:0]e1_e2,e1_e2_0; // how about E1=0 and E2=0?
logic [7:0]shift_before_add;

assign e1_e2=exponent_a+ ~exponent_b+8'b1;
assign e1_e2_0=exponent_a+ ~{8'b1}+8'b1;


assign shift_before_add= (exponent_a>8'b0&& exponent_b >8'b0)? e1_e2 : (exponent_a>8'b0&&exponent_b==8'b0)? e1_e2_0 :8'b0  ;

logic [7:0]current_exponent_tmp;

assign current_exponent_tmp= (exponent_a>8'b0&& exponent_b >8'b0)? exponent_b : (exponent_a>8'b0&&exponent_b==8'b0)? 8'b1 :8'b0  ;

logic result_shift_or_not;

assign result_shift_or_not= (exponent_a==8'b0&&exponent_b==8'b0)?1'b0:1'b1;// when E1=E2=0, dont need to shift, but may need to add one in exponent if there is an one in 24th bit

logic [7:0]add_one_in_exponent;// 

//for add end


//for sub 


//for sub end

endmodule


module adder_46(a,b,sum);
input logic [46:0] a;
input logic [46:0] b;

output logic [47:0] sum;

assign sum=a+b;

endmodule
