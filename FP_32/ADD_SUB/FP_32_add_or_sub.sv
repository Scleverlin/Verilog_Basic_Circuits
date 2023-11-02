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
// both exponent == 0, dont need to shift, unless, there is an one in 24th bit
// if only one exponent == 0, just normal, but need add one in exponent. // E1-E2 or E1-1-0






endmodule


module adder_46(a,b,sum);
input logic [46:0] a;
input logic [46:0] b;

output logic [47:0] sum;

assign sum=a+b;

endmodule
