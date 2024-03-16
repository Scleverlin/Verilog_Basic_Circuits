`include "complex_fma.sv"

module TMUL_FP16_16_32 (RowA, MatrixB0, MatrixB1,MatrixB2,MatrixB3,MatrixB4,MatrixB5,MatrixB6,MatrixB7,MatrixB8,MatrixB9,MatrixB10,MatrixB11,MatrixB12,MatrixB13,MatrixB14,MatrixB15,RowProduct,  clk , rst);
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

assign zero = 512'b0;

logic [511:0]out_row0,out_row1,out_row2,out_row3,out_row4,out_row5,out_row6,out_row7,out_row8,out_row9,out_row10,out_row11,out_row12,out_row13,out_row14;
logic [511:0] reg_out_row0,reg_out_row1,reg_out_row2,reg_out_row3,reg_out_row4,reg_out_row5,reg_out_row6,reg_out_row7,reg_out_row8,reg_out_row9,reg_out_row10,reg_out_row11,reg_out_row12,reg_out_row13,reg_out_row14;

FMA_Row  Row0 (RowA[0],MatrixB0,zero,out_row0);
FMA_Row  Row1 (RowA[1],MatrixB1,reg_out_row0,out_row1);
FMA_Row  Row2 (RowA[2],MatrixB2,reg_out_row1,out_row2);
FMA_Row  Row3 (RowA[3],MatrixB3,reg_out_row2,out_row3);
FMA_Row  Row4 (RowA[4],MatrixB4,reg_out_row3,out_row4);
FMA_Row  Row5 (RowA[5],MatrixB5,reg_out_row4,out_row5);
FMA_Row  Row6 (RowA[6],MatrixB6,reg_out_row5,out_row6);
FMA_Row  Row7 (RowA[7],MatrixB7,reg_out_row6,out_row7);
FMA_Row  Row8 (RowA[8],MatrixB8,reg_out_row7,out_row8);
FMA_Row  Row9 (RowA[9],MatrixB9,reg_out_row8,out_row9);
FMA_Row  Row10 (RowA[10],MatrixB10,reg_out_row9,out_row10);
FMA_Row  Row11 (RowA[11],MatrixB11,reg_out_row10,out_row11);
FMA_Row  Row12 (RowA[12],MatrixB12,reg_out_row11,out_row12);
FMA_Row  Row13 (RowA[13],MatrixB13,reg_out_row12,out_row13);
FMA_Row  Row14 (RowA[14],MatrixB14,reg_out_row13,out_row14);
FMA_Row  Row15 (RowA[15],MatrixB15,reg_out_row14,RowProduct);

always_ff @(posedge clk)
    if (rst) begin
        reg_out_row0 <= 0;
        reg_out_row1 <= 0;
        reg_out_row2 <= 0;
        reg_out_row3 <= 0;
        reg_out_row4 <= 0;
        reg_out_row5 <= 0;
        reg_out_row6 <= 0;
        reg_out_row7 <= 0;
        reg_out_row8 <= 0;
        reg_out_row9 <= 0;
        reg_out_row10 <= 0;
        reg_out_row11 <= 0;
        reg_out_row12 <= 0;
        reg_out_row13 <= 0;
        reg_out_row14 <= 0;
    end else begin
        reg_out_row0 <= out_row0;
        reg_out_row1 <= out_row1;
        reg_out_row2 <= out_row2;
        reg_out_row3 <= out_row3;
        reg_out_row4 <= out_row4;
        reg_out_row5 <= out_row5;
        reg_out_row6 <= out_row6;
        reg_out_row7 <= out_row7;
        reg_out_row8 <= out_row8;
        reg_out_row9 <= out_row9;
        reg_out_row10 <= out_row10;
        reg_out_row11 <= out_row11;
        reg_out_row12 <= out_row12;
        reg_out_row13 <= out_row13;
        reg_out_row14 <= out_row14;
    end

endmodule