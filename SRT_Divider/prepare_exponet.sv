`define FP_WIDTH 32
`define EXP_WIDTH 8
`define MANT_WIDTH 23
`define BIAS 127

module fp_div_exp(
    input logic[`FP_WIDTH-1:0] dividend, 
    input logic[`FP_WIDTH-1:0] divisor,  
    output logic[`EXP_WIDTH-1:0] result_exp 
);

    logic [`EXP_WIDTH-1:0] exp_dividend, exp_divisor;


    assign exp_dividend = dividend[`FP_WIDTH-2:`FP_WIDTH-1-`EXP_WIDTH];
    assign exp_divisor  = divisor[`FP_WIDTH-2:`FP_WIDTH-1-`EXP_WIDTH];

    assign  result_exp = exp_dividend - exp_divisor + `BIAS; 


endmodule
