`define FP_WIDTH 32
`define EXP_WIDTH 8
`define MANT_WIDTH 23
module fp_mul_exp(
    input logic[`FP_WIDTH-1:0] mul1, 
    input logic[`FP_WIDTH-1:0] mul2,  
    output logic[`EXP_WIDTH-1:0] result_exp 
);

    logic [`EXP_WIDTH-1:0] exp_mul1, exp_mul2;


    assign exp_mul1 = mul1[`FP_WIDTH-2:`FP_WIDTH-1-`EXP_WIDTH];
    assign exp_mul2  = mul2[`FP_WIDTH-2:`FP_WIDTH-1-`EXP_WIDTH];
    logic [`EXP_WIDTH:0] mul1_sign;
    logic [`EXP_WIDTH:0] mul2_sign;

    assign mul1_sign={0'b0,exp_mul1};
    assign mul2_sign= {0'b0,exp_mul2};
    logic cout,cout2;
    logic [`EXP_WIDTH:0] result_tmp,result_tmp2;
    logic [`EXP_WIDTH:0] bias;

    assign bias=~{0'b0,8'd127}+1'b1; //-127

    adder_width adder(mul1_sign,mul2_sign,result_tmp,cout);
    adder_width adder2(result_tmp,bias,result_tmp2,cout2);
    assign  result_exp = result_tmp2[`EXP_WIDTH-1:0]; 
endmodule

module adder_width (a,b,sum,cout);
input logic [`EXP_WIDTH:0]a,b;
output logic [`EXP_WIDTH:0]sum;

output logic cout;

assign {cout,sum} = a + b;

endmodule