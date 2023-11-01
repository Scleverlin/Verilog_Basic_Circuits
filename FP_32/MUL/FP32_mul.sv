`include "man_solving.sv"
`include "normalization.sv"

module FP32_mul(mul1,mul2,product);
input logic [31:0] mul1;
input logic [31:0] mul2;
output logic [31:0] product;

logic [7:0] current_exponent;
logic [23:0] mul1_mantissa_normalized;
logic [23:0] mul2_mantissa_normalized;

logic result_sign;
logic [4:0] mul1_shift; // Shift amount for the mul1
logic [4:0] mul2_shift; // Shift amount for the mul2

normalizer norm(mul1,mul2,mul1_mantissa_normalized, mul2_mantissa_normalized,current_exponent,result_sign,mul1_shift,mul2_shift);

logic [23:0] f1f2_plus;
logic exponent_add;
man_solving man_solving(mul1_mantissa_normalized,mul2_mantissa_normalized,f1f2_plus,exponent_add);

logic [7:0] final_shift;
logic [7:0]exponent_add_comple;
assign exponent_add_comple=~{7'b0,exponent_add}+8'b1;
assign final_shift={3'b0,mul1_shift}+{3'b0,mul2_shift}+exponent_add_comple;

logic [7:0] final_shift_comple;
assign final_shift_comple=~final_shift+8'b1;

logic [7:0]final_exponent;

assign final_exponent=current_exponent+final_shift_comple;

logic [22:0] final_mantissa;
assign final_mantissa=f1f2_plus[22:0];

assign product={result_sign,final_exponent,final_mantissa};

endmodule