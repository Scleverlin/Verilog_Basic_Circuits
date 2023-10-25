`include "prepare_exponet.sv"

module normalizer (dividend,divisor);
input logic  [31:0] dividend,divisor;

output logic [24:0] dividend_mantissa_normalized;
output logic [24:0] divisor_mantissa_normalized;

output logic [7:0]current_exponent;
output logic result_sign;

man_float_normalize mfm (dividend,divisor,dividend_mantissa_normalized,divisor_mantissa_normalized,result_sign );
fp_div_exp exp (dividend,divisor,current_exponent);
endmodule


module man_float_normalize (
    input logic [31:0] dividend,  // 32-bit single-precision float
    input logic [31:0] divisor,   
    output logic [24:0] dividend_mantissa_normalized,
    output logic [24:0] divisor_mantissa_normalized,

    output logic result_sign      // Sign of the division result
);
    logic [7:0] dividend_exponent;
    logic [7:0] divisor_exponent;

    // Extracting fields from the floating-point number
    logic dividend_sign, divisor_sign;
    logic [22:0] dividend_mantissa;
    logic [22:0] divisor_mantissa;
    
    assign dividend_sign = dividend[31];
    assign divisor_sign = divisor[31];
    
    assign dividend_mantissa = dividend[22:0];
    assign divisor_mantissa = divisor[22:0];
    
    assign dividend_exponent = dividend[30:23];
    assign divisor_exponent = divisor[30:23];

    // Normalize - If exponent is zero, we don't prefix with implicit 1. 
    // Otherwise, we attach an implicit 1 at the top of the mantissa.
    assign dividend_mantissa_normalized = (dividend_exponent == 8'd0) ? {2'b00,dividend_mantissa} : {2'b01, dividend_mantissa};
    assign divisor_mantissa_normalized = (divisor_exponent == 8'd0) ? {2'b00,divisor_mantissa} : {2'b01, divisor_mantissa};

    // Determine the sign of the result
    assign result_sign = dividend_sign ^ divisor_sign;

endmodule
