`include "mul_man_solving.sv"
`include "normalization_mul.sv"

module FP32_mul(clk,mul1,mul2,product);
// module FP32_mul(mul1,mul2,product);

input logic [31:0] mul1;
input logic [31:0] mul2;
input clk;
output logic [31:0] product;

logic [7:0] current_exponent;
logic [23:0] mul1_mantissa_normalized;
logic [23:0] mul2_mantissa_normalized;

logic result_sign;
logic [4:0] mul1_shift; // Shift amount for the mul1
logic [4:0] mul2_shift; // Shift amount for the mul2

normalizer_mul norm(mul1,mul2,mul1_mantissa_normalized, mul2_mantissa_normalized,current_exponent,result_sign);

logic [23:0] f1f2_plus_rounding;
logic [8:0]exponent_adden;
// logic exp_add_from_rounding;

mul_man_solving main_part (mul1_mantissa_normalized,mul2_mantissa_normalized,f1f2_plus_rounding,exponent_adden,current_exponent);
logic [7:0]     final_exponent;
assign final_exponent=current_exponent+exponent_adden[7:0];

logic [22:0] final_mantissa;
assign final_mantissa=f1f2_plus_rounding[22:0];
logic [31:0]product_wire;
assign product_wire={result_sign,final_exponent,final_mantissa};
// assign product={result_sign,final_exponent,final_mantissa};


always@(posedge clk) begin
        product<=product_wire;
end

endmodule

