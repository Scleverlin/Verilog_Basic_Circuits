// `include "complex_fma.sv"
`include "_fma_for_normal.sv"


module FMA_Row_tb;

// typedef logic [15:0] RowM [15:0];
logic [15:0]a;

// logic mode; // BF16 OR FP16.. INT8 should be same processed as FP16
// logic [15:0] RowB [15:0];
// logic [15:0] RowC [15:0];
// logic [255:0] Row_product;

logic [15:0]b,c;
logic [15:0] product;


// FMA_FP16 FMA_ROW (a,RowB,RowC,Row_product);
FMA_FP16 FMA_ROW (a,b,c,product);

initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, FMA_ROW );
        #10 a = 16'h3F22; // 1.0
            b = 16'h3FFF; // 1.0
            c = 16'h3FFF; // 1.0
        #10 $display("Row_product = %h",product);    
        #100 $finish;
    end

endmodule
