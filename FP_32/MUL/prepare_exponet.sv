`define FP_WIDTH 32
`define EXP_WIDTH 8
`define MANT_WIDTH 23
`define BIAS 127

module fp_div_exp(
    input logic[`FP_WIDTH-1:0] mul1, 
    input logic[`FP_WIDTH-1:0] mul2,  
    output logic[`EXP_WIDTH-1:0] result_exp 
);

    logic [`EXP_WIDTH-1:0] exp_mul1, exp_mul2;


    assign exp_mul1 = mul1[`FP_WIDTH-2:`FP_WIDTH-1-`EXP_WIDTH];
    assign exp_divisor  = mul2[`FP_WIDTH-2:`FP_WIDTH-1-`EXP_WIDTH];

    assign  result_exp = exp_mul1 + exp_mul2 + `BIAS; 


endmodule
