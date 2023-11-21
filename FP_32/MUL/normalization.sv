`include "/home/shi/verilog/FP_32/MUL/prepare_exponet.sv"

module normalizer_mul (mul1,mul2,mul1_mantissa_normalized, mul2_mantissa_normalized,current_exponent,result_sign,mul1_shift,mul2_shift);
input logic  [31:0] mul1,mul2;

output logic [23:0] mul1_mantissa_normalized;
output logic [23:0] mul2_mantissa_normalized;

output logic [7:0]current_exponent;
output logic result_sign;
output logic [4:0] mul1_shift; // Shift amount for the mul1
output logic [4:0] mul2_shift; // Shift amount for the mul2

man_float_normalize_mul mfm (mul1,mul2,mul1_mantissa_normalized,mul2_mantissa_normalized,mul1_shift,mul2_shift,result_sign );
fp_mul_exp exp (mul1,mul2,current_exponent);

endmodule


module man_float_normalize_mul (
    input logic [31:0] mul1,  // 32-bit single-precision float
    input logic [31:0] mul2,   
    output logic [23:0] mul1_mantissa_normalized,
    output logic [23:0] mul2_mantissa_normalized,
    output logic [4:0] mul1_shift, // Shift amount for the mul1
    output logic [4:0] mul2_shift,  // Shift amount for the mul2
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
    assign mul1_tmp = (mul1_exponent == 8'd0) ? {1'b0,mul1_mantissa} : {1'b1, mul1_mantissa};
    assign mul2_tmp = (mul2_exponent == 8'd0) ? {1'b0,mul2_mantissa} : {1'b1, mul2_mantissa};
   
 
    m_n_gen mng (mul1_tmp,mul1_mantissa_normalized,mul1_shift);
    m_n_gen mng2 (mul2_tmp,mul2_mantissa_normalized,mul2_shift);

 // Determine the sign of the result
    assign result_sign = mul1_sign ^ mul2_sign;

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


