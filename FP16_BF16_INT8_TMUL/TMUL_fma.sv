`include "_fma_for_normal.sv"

module TMUL_fma (RowA, MatrixB0, MatrixB1,MatrixB2,MatrixB3,MatrixB4,MatrixB5,MatrixB6,MatrixB7,MatrixB8,MatrixB9,MatrixB10,MatrixB11,MatrixB12,MatrixB13,MatrixB14,MatrixB15,RowProduct,  clk , rst);
input logic [15:0] RowA [15:0];
input logic [15:0] MatrixB0 [31:0];
input logic [15:0] MatrixB1 [31:0];
input logic [15:0] MatrixB2 [31:0];
input logic [15:0] MatrixB3 [31:0];
input logic [15:0] MatrixB4 [31:0];
input logic [15:0] MatrixB5 [31:0];
input logic [15:0] MatrixB6 [31:0];
input logic [15:0] MatrixB7 [31:0];
input logic [15:0] MatrixB8 [31:0];
input logic [15:0] MatrixB9 [31:0];
input logic [15:0] MatrixB10 [31:0];
input logic [15:0] MatrixB11 [31:0];
input logic [15:0] MatrixB12 [31:0];
input logic [15:0] MatrixB13 [31:0];
input logic [15:0] MatrixB14 [31:0];
input logic [15:0] MatrixB15 [31:0];
input logic clk,rst;
output logic [511:0] RowProduct;
logic [511:0] zero;
assign zero=512'b0;
logic [511:0] out0,out1,out2,out3,out4,out5,out6,out7,out8,out9,out10,out11,out12,out13,out14;
logic [511:0] regout0,regout1,regout2,regout3,regout4,regout5,regout6,regout7,regout8,regout9,regout10,regout11,regout12,regout13,regout14;

FMA_ROW Row_0 (RowA[0],MatrixB0,zero,out0);
FMA_ROW Row_1 (RowA[1],MatrixB1,regout0,out1);
FMA_ROW Row_2 (RowA[2],MatrixB2,regout1,out2);
FMA_ROW Row_3 (RowA[3],MatrixB3,regout2,out3);
FMA_ROW Row_4 (RowA[4],MatrixB4,regout3,out4);
FMA_ROW Row_5 (RowA[5],MatrixB5,regout4,out5);
FMA_ROW Row_6 (RowA[6],MatrixB6,regout5,out6);
FMA_ROW Row_7 (RowA[7],MatrixB7,regout6,out7);
FMA_ROW Row_8 (RowA[8],MatrixB8,regout7,out8);
FMA_ROW Row_9 (RowA[9],MatrixB9,regout8,out9);
FMA_ROW Row_10 (RowA[10],MatrixB10,regout9,out10);
FMA_ROW Row_11 (RowA[11],MatrixB11,regout10,out11);
FMA_ROW Row_12 (RowA[12],MatrixB12,regout11,out12);
FMA_ROW Row_13 (RowA[13],MatrixB13,regout12,out13);
FMA_ROW Row_14 (RowA[14],MatrixB14,regout13,out14);
FMA_ROW Row_15 (RowA[15],MatrixB15,regout14,RowProduct);



always_ff @(posedge clk)
    if (rst) begin
    regout0 <= 0;
    regout1 <= 0;
    regout2 <= 0;
    regout3 <= 0;
    regout4 <= 0;
    regout5 <= 0;
    regout6 <= 0;
    regout7 <= 0;
    regout8 <= 0;
    regout9 <= 0;
    regout10 <= 0;
    regout11 <= 0;
    regout12 <= 0;
    regout13 <= 0;
    regout14 <= 0;
    end else begin
    regout0 <= out0;
    regout1 <= out1;
    regout2 <= out2;
    regout3 <= out3;
    regout4 <= out4;
    regout5 <= out5;
    regout6 <= out6;
    regout7 <= out7;
    regout8 <= out8;
    regout9 <= out9;
    regout10 <= out10;
    regout11 <= out11;
    regout12 <= out12;
    regout13 <= out13;
    regout14 <= out14;
    end

endmodule

module FMA_ROW(RowA,RowB,RowC,RowProduct);
input logic [15:0]RowA;
input logic [15:0] RowB [31:0];
input logic [511:0]RowC;
output logic [511:0] RowProduct;


FMA_FP16 FMA0 (RowA,RowB[0],RowC[15:0],RowProduct[15:0]);
FMA_FP16 FMA1 (RowA,RowB[1],RowC[31:16],RowProduct[31:16]);
FMA_FP16 FMA2 (RowA,RowB[2],RowC[47:32],RowProduct[47:32]);
FMA_FP16 FMA3 (RowA,RowB[3],RowC[63:48],RowProduct[63:48]);
FMA_FP16 FMA4 (RowA,RowB[4],RowC[79:64],RowProduct[79:64]);
FMA_FP16 FMA5 (RowA,RowB[5],RowC[95:80],RowProduct[95:80]);
FMA_FP16 FMA6 (RowA,RowB[6],RowC[111:96],RowProduct[111:96]);
FMA_FP16 FMA7 (RowA,RowB[7],RowC[127:112],RowProduct[127:112]);
FMA_FP16 FMA8 (RowA,RowB[8],RowC[143:128],RowProduct[143:128]);
FMA_FP16 FMA9 (RowA,RowB[9],RowC[159:144],RowProduct[159:144]);
FMA_FP16 FMA10 (RowA,RowB[10],RowC[175:160],RowProduct[175:160]);
FMA_FP16 FMA11 (RowA,RowB[11],RowC[191:176],RowProduct[191:176]);
FMA_FP16 FMA12 (RowA,RowB[12],RowC[207:192],RowProduct[207:192]);
FMA_FP16 FMA13 (RowA,RowB[13],RowC[223:208],RowProduct[223:208]);
FMA_FP16 FMA14 (RowA,RowB[14],RowC[239:224],RowProduct[239:224]);   
FMA_FP16 FMA15 (RowA,RowB[15],RowC[255:240],RowProduct[255:240]);
FMA_FP16 FMA16 (RowA,RowB[16],RowC[271:256],RowProduct[271:256]);
FMA_FP16 FMA17 (RowA,RowB[17],RowC[287:272],RowProduct[287:272]);
FMA_FP16 FMA18 (RowA,RowB[18],RowC[303:288],RowProduct[303:288]);
FMA_FP16 FMA19 (RowA,RowB[19],RowC[319:304],RowProduct[319:304]);
FMA_FP16 FMA20 (RowA,RowB[20],RowC[335:320],RowProduct[335:320]);
FMA_FP16 FMA21 (RowA,RowB[21],RowC[351:336],RowProduct[351:336]);
FMA_FP16 FMA22 (RowA,RowB[22],RowC[367:352],RowProduct[367:352]);
FMA_FP16 FMA23 (RowA,RowB[23],RowC[383:368],RowProduct[383:368]);
FMA_FP16 FMA24 (RowA,RowB[24],RowC[399:384],RowProduct[399:384]);
FMA_FP16 FMA25 (RowA,RowB[25],RowC[415:400],RowProduct[415:400]);
FMA_FP16 FMA26 (RowA,RowB[26],RowC[431:416],RowProduct[431:416]);
FMA_FP16 FMA27 (RowA,RowB[27],RowC[447:432],RowProduct[447:432]);
FMA_FP16 FMA28 (RowA,RowB[28],RowC[463:448],RowProduct[463:448]);
FMA_FP16 FMA29 (RowA,RowB[29],RowC[479:464],RowProduct[479:464]);
FMA_FP16 FMA30 (RowA,RowB[30],RowC[495:480],RowProduct[495:480]);
FMA_FP16 FMA31 (RowA,RowB[31],RowC[511:496],RowProduct[511:496]);

endmodule
