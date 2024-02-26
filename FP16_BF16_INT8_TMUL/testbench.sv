`include "complex_fma.sv"

module FMA_Row_tb;

typedef logic [15:0] RowM [15:0];
logic [15:0]a;
// logic mode; // BF16 OR FP16.. INT8 should be same processed as FP16
logic [15:0] RowB [15:0];
logic [15:0] RowC [15:0];

logic [15:0] Row_product[15:0];

FMA_Row FMA_ROW (a,RowB,RowC,Row_product);

initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, FMA_ROW );
        #10 a = 16'h3c00; // 1.0
            RowB[0] = 16'h3c00; // 1.0
            RowC[0] = 16'h3c00; // 1.0
            RowB[1] = 16'h3c00; // 1.0
            RowC[1] = 16'h3c00; // 1.0
            RowB[2] = 16'h3c00; // 1.0
            RowC[2] = 16'h3c00; // 1.0
            RowB[3] = 16'h3c00; // 1.0
            RowC[3] = 16'h3c00; // 1.0
            RowB[4] = 16'h3c00; // 1.0
            RowC[4] = 16'h3c00; // 1.0
            RowB[5] = 16'h3c00; // 1.0
            RowC[5] = 16'h3c00; // 1.0
            RowB[6] = 16'h3c00; // 1.0
            RowC[6] = 16'h3c00; // 1.0
            RowB[7] = 16'h3c00; // 1.0
            RowC[7] = 16'h3c00; // 1.0
            RowB[8] = 16'h3c00; // 1.0
            RowC[8] = 16'h3c00; // 1.0
            RowB[9] = 16'h3c00; // 1.0
            RowC[9] = 16'h3c00; // 1.0
            RowB[10] = 16'h3c00; // 1.0
            RowC[10] = 16'h3c00; // 1.0
            RowB[11] = 16'h3c00; // 1.0
            RowC[11] = 16'h3c00; // 1.0
            RowB[12] = 16'h3c00; // 1.0
            RowC[12] = 16'h3c00; // 1.0
            RowB[13] = 16'h3c00; // 1.0
            RowC[13] = 16'h3c00; // 1.0
            RowB[14] = 16'h3c00; // 1.0
            RowC[14] = 16'h3c00; // 1.0
            RowB[15] = 16'h3c00; // 1.0
            RowC[15] = 16'h3c00; // 1.0

        #100 $finish;
    end

endmodule
