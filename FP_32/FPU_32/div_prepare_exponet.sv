`define FP_WIDTH 32
`define EXP_WIDTH 8
`define MANT_WIDTH 23
`define BIAS 9'd127

module fp_div_exp(
    input logic[`FP_WIDTH-1:0] dividend, 
    input logic[`FP_WIDTH-1:0] divisor,  
    output logic[`EXP_WIDTH-1:0] result_exp 
);

    logic [`EXP_WIDTH-1:0] exp_dividend, exp_divisor;


    assign exp_dividend = dividend[`FP_WIDTH-2:`FP_WIDTH-1-`EXP_WIDTH];
    assign exp_divisor  = divisor[`FP_WIDTH-2:`FP_WIDTH-1-`EXP_WIDTH];
    logic [`EXP_WIDTH:0] dividend_sign;
    logic [`EXP_WIDTH:0] divisor_sign,divisor_comple;

    assign dividend_sign={1'b0,exp_dividend};
    assign divisor_sign= {1'b0,exp_divisor};
    assign divisor_comple = ~divisor_sign+1;
    logic cout,cout2;
    logic [`EXP_WIDTH:0] result_tmp,result_tmp2;
    adder_width adder(dividend_sign,divisor_comple,result_tmp,cout);
    logic [`EXP_WIDTH:0]extra_bias;
    assign extra_bias=9'd126;
    logic [`EXP_WIDTH:0] bias;
    assign bias=(exp_divisor==8'b0 && exp_dividend!=8'b0)?extra_bias:(exp_divisor !=8'b0 && exp_dividend==8'b0)?9'd128:`BIAS;

    adder_width adder2(result_tmp,bias,result_tmp2,cout2);
    assign  result_exp = result_tmp2[`EXP_WIDTH-1:0]; 


endmodule

module adder_width (a,b,sum,cout);
input logic [`EXP_WIDTH:0]a,b;
output logic [`EXP_WIDTH:0]sum;

output logic cout;

assign {cout,sum} = a + b;

endmodule
