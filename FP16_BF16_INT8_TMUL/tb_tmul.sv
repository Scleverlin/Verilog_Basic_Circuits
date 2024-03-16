`include "TMUL_fma_booth4.sv"
`include "tile_a.sv"

module wal_mul_tb;

logic [15:0] RowA [15:0];
logic [15:0] a_arr [15:0];
logic [255:0] a_out ;
logic [15:0] MatrixB0 [31:0];
logic [15:0] MatrixB1 [31:0];
logic [15:0] MatrixB2 [31:0];
logic [15:0] MatrixB3 [31:0];
logic [15:0] MatrixB4 [31:0];
logic [15:0] MatrixB5 [31:0];
logic [15:0] MatrixB6 [31:0];
logic [15:0] MatrixB7 [31:0];
logic [15:0] MatrixB8 [31:0];
logic [15:0] MatrixB9 [31:0];
logic [15:0] MatrixB10 [31:0];
logic [15:0] MatrixB11 [31:0];
logic [15:0] MatrixB12 [31:0];
logic [15:0] MatrixB13 [31:0];
logic [15:0] MatrixB14 [31:0];
logic [15:0] MatrixB15 [31:0];
logic clk,rst;
logic [511:0] RowProduct;
tile_a  tile_a_inst0 (RowA,clk,a_out,rst);
genvar l;
generate
    for (l=0; l<16; l=l+1) begin
        assign a_arr[l]= a_out[(l+1)*16-1:l*16];
    end 
endgenerate

// TMUL_FP16_16_32  tmul  (a_arr, MatrixB0, MatrixB1,MatrixB2,MatrixB3,MatrixB4,MatrixB5,MatrixB6,MatrixB7,MatrixB8,MatrixB9,MatrixB10,MatrixB11,MatrixB12,MatrixB13,MatrixB14,MatrixB15,RowProduct,  clk , rst);
TMUL_fma  tmul  (a_arr, MatrixB0, MatrixB1,MatrixB2,MatrixB3,MatrixB4,MatrixB5,MatrixB6,MatrixB7,MatrixB8,MatrixB9,MatrixB10,MatrixB11,MatrixB12,MatrixB13,MatrixB14,MatrixB15,RowProduct,  clk , rst);

logic [15:0] result [31:0];
logic [15:0] b [16][32];

generate
    for (l=0; l<32; l=l+1) begin: genC
        assign result[l]=RowProduct[(l+1)*16-1:l*16];
    end 
endgenerate

generate
    for (l=0;l<32;l=l+1) begin
        assign MatrixB0[l]=b[0][l];
        assign MatrixB1[l]=b[1][l];
        assign MatrixB2[l]=b[2][l];
        assign MatrixB3[l]=b[3][l];
        assign MatrixB4[l]=b[4][l];
        assign MatrixB5[l]=b[5][l];
        assign MatrixB6[l]=b[6][l];
        assign MatrixB7[l]=b[7][l];
        assign MatrixB8[l]=b[8][l];
        assign MatrixB9[l]=b[9][l];
        assign MatrixB10[l]=b[10][l];
        assign MatrixB11[l]=b[11][l];
        assign MatrixB12[l]=b[12][l];
        assign MatrixB13[l]=b[13][l];
        assign MatrixB14[l]=b[14][l];
        assign MatrixB15[l]=b[15][l];
     end
endgenerate

// 时钟生成器
always begin
    #1 clk = ~clk;
end
initial begin
   $dumpfile("dump.vcd"); 
   $dumpvars(0, wal_mul_tb); // 0表示记录所有层次，wal_mul_tb是模块的实例名
end

integer  i,j,k,m; 
// 测试向量生成
initial begin
    // 初始化
    clk = 0;
    // rst = 1;
   
    #2 rst = 1; // 在10个时间单位后释放复位
    #2 rst=0;
    #2    for(k = 0; k < 32; k++) begin
         for(j = 0; j < 16; j++) begin
          b[j][k] = $urandom%65536; // 这将为b的每个元素赋值1,2,3...等
          $display("b[%d][%d]=%h", j, k, b[j][k]);
         end
    end;
    for(i = 0; i <32; i = i+1) begin // 10 cycles
        for(j = 0; j < 16; j++) begin
            RowA[j] = $urandom%65536; // 这将为a赋值 1,2,3...等
            $display("a[%d]=%h", j,  RowA[j]);
        end
        for (m=0;m<32;m=m+1)begin
        $display("c[%d]=%h", m, result[m]);
         end
        $display("Row Result");
        $display("```````````");
        $display("A0=%h",tmul.RowA[0]);
        $display("B_0_0=%h",tmul.MatrixB0[0]);
        $display("row00_product=%h",tmul.out0[15:0]);

        $display("A1=%h",tmul.RowA[1]);
        $display("B_1_0=%h",tmul.MatrixB1[0]);
        $display("row10_product=%h",tmul.out1[15:0]);

 

    #2; // 等待一个时钟周期

end
    $finish; // 结束仿真
end
endmodule
