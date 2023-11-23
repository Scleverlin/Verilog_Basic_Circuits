`include "mul_prepare_exponet.sv"

module normalizer_mul (mul1,mul2,mul1_mantissa_normalized, mul2_mantissa_normalized,current_exponent,result_sign);
input logic  [31:0] mul1,mul2;

output logic [23:0] mul1_mantissa_normalized;
output logic [23:0] mul2_mantissa_normalized;

output logic [7:0]current_exponent;
output logic result_sign;

man_float_normalize_mul mfm (mul1,mul2,mul1_mantissa_normalized,mul2_mantissa_normalized,result_sign );
fp_mul_exp exp (mul1,mul2,current_exponent);

endmodule


module man_float_normalize_mul (
    input logic [31:0] mul1,  // 32-bit single-precision float
    input logic [31:0] mul2,   
    output logic [23:0] mul1_mantissa_normalized,
    output logic [23:0] mul2_mantissa_normalized,
    // output logic [4:0] mul1_shift, // Shift amount for the mul1
    // output logic [4:0] mul2_shift,  // Shift amount for the mul2
    output logic result_sign      // Sign of the division result
);
    logic [7:0] mul1_exponent;
    logic [7:0] mul2_exponent;

    // Extracting fields from the floating-point number
    logic mul1_sign, mul2_sign;
    logic [22:0] mul1_mantissa;
    logic [22:0] mul2_mantissa;
    
    assign mul1_sign = mul1[31];
    assign mul2_sign = mul2[31];
    
    assign mul1_mantissa = mul1[22:0];
    assign mul2_mantissa = mul2[22:0];
    
    assign mul1_exponent = mul1[30:23];
    assign mul2_exponent = mul2[30:23];
    logic [23:0] mul1_tmp, mul2_tmp;
    // Normalize - If exponent is zero, we don't prefix with implicit 1. 
    // Otherwise, we attach an implicit 1 at the top of the mantissa.
    // assign mul1_tmp = (mul1_exponent == 8'd0) ? {1'b0,mul1_mantissa} : {1'b1, mul1_mantissa};
    // assign mul2_tmp = (mul2_exponent == 8'd0) ? {1'b0,mul2_mantissa} : {1'b1, mul2_mantissa};
    assign mul1_mantissa_normalized = (mul1_exponent == 8'd0) ? {1'b0,mul1_mantissa} : {1'b1, mul1_mantissa};
    assign mul2_mantissa_normalized = (mul2_exponent == 8'd0) ? {1'b0,mul2_mantissa} : {1'b1, mul2_mantissa};

 
    // m_n_gen_norm_mul mng (mul1_tmp,mul1_mantissa_normalized,mul1_shift);
    // m_n_gen_norm_mul mng2 (mul2_tmp,mul2_mantissa_normalized,mul2_shift);

 // Determine the sign of the result
    assign result_sign = mul1_sign ^ mul2_sign;

endmodule




