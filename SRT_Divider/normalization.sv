`include "prepare_exponet.sv"

module normalizer (dividend,divisor,dividend_mantissa_normalized, divisor_mantissa_normalized,current_exponent,result_sign,dividend_shift,divisor_shift);
input logic  [31:0] dividend,divisor;

output logic [24:0] dividend_mantissa_normalized;
output logic [24:0] divisor_mantissa_normalized;

output logic [7:0]current_exponent;
output logic result_sign;
output logic [4:0] dividend_shift; // Shift amount for the dividend
output logic [4:0] divisor_shift; // Shift amount for the divisor

man_float_normalize mfm (dividend,divisor,dividend_mantissa_normalized,divisor_mantissa_normalized,dividend_shift,divisor_shift,result_sign );
fp_div_exp exp (dividend,divisor,current_exponent);

endmodule


module man_float_normalize (
    input logic [31:0] dividend,  // 32-bit single-precision float
    input logic [31:0] divisor,   
    output logic [24:0] dividend_mantissa_normalized,
    output logic [24:0] divisor_mantissa_normalized,
    output logic [4:0] dividend_shift, // Shift amount for the dividend
    output logic [4:0] divisor_shift,  // Shift amount for the divisor
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
    logic [23:0] dividend_tmp, divisor_tmp;
    // Normalize - If exponent is zero, we don't prefix with implicit 1. 
    // Otherwise, we attach an implicit 1 at the top of the mantissa.
    assign dividend_tmp = (dividend_exponent == 8'd0) ? {1'b0,dividend_mantissa} : {1'b1, dividend_mantissa};
    assign divisor_tmp = (divisor_exponent == 8'd0) ? {1'b0,divisor_mantissa} : {1'b1, divisor_mantissa};
   
 
    m_n_gen mng (dividend_tmp,dividend_mantissa_normalized,dividend_shift);
    m_n_gen mng2 (divisor_tmp,divisor_mantissa_normalized,divisor_shift);

 // Determine the sign of the result
    assign result_sign = dividend_sign ^ divisor_sign;

endmodule

module m_n_gen (
    input logic [23:0] data,
    output logic [23:0] outdata,
    output logic [4:0] shift
);
assign shift = (data[23] == 1) ? 0 :
               (data[22] == 1) ? 1 :
               (data[21] == 1) ? 2 :
               (data[20] == 1) ? 3 :
               (data[19] == 1) ? 4 :
               (data[18] == 1) ? 5 :
               (data[17] == 1) ? 6 :
               (data[16] == 1) ? 7 :
               (data[15] == 1) ? 8 :
               (data[14] == 1) ? 9 :
               (data[13] == 1) ? 10 :
               (data[12] == 1) ? 11 :
               (data[11] == 1) ? 12 :
               (data[10] == 1) ? 13 :
               (data[9] == 1) ? 14 :
               (data[8] == 1) ? 15 :
               (data[7] == 1) ? 16 :
               (data[6] == 1) ? 17 :
               (data[5] == 1) ? 18 :
               (data[4] == 1) ? 19 :
               (data[3] == 1) ? 20 :
               (data[2] == 1) ? 21 :
               (data[1] == 1) ? 22 :
               (data[0] == 1) ? 23 : 0;

assign outdata = data << shift;
endmodule


