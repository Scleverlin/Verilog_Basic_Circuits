`include "complex_fma.sv"
// `include "_fma_for_normal.sv"


module FMA_Row_tb;

// typedef logic [15:0] RowM [15:0];
logic [15:0]a;

// logic mode; // BF16 OR FP16.. INT8 should be same processed as FP16
logic [15:0] RowB [31:0];
logic [511:0] RowC;
logic [511:0] Row_product;

// logic [15:0]b,c;
// logic [15:0] product;

logic [15:0]C_array [31:0];
logic [15:0] Product_ar[31:0];
// assign C_array[0] = RowC[511:480];
genvar i;
generate
    for (i=0; i<32; i=i+1) begin: genC
        assign RowC[(i+1)*16-1:i*16]= C_array[i];
        assign Product_ar[i]=Row_product[(i+1)*16-1:i*16];
    end 
endgenerate

FMA_Row FMA_ROW (a,RowB,RowC,Row_product);
// FMA_FP16 FMA_ROW (a,b,c,product);

initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, FMA_ROW );
        #10 a = 16'h3F22; // 1.0
            RowB[0] = 16'h3FFF; // 1.0
            C_array[0] = 16'h3FFF; // 1.0
        #10 $display("Row_product = %h",Product_ar[0]);    
        #100 $finish;
    end

endmodule
