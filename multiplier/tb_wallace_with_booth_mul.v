module tb_mul_32bit (
    
);
reg [31:0] a,b;
wire  [63:0]out;
wire [63:0] pp0,pp1,pp2,pp3,pp4,pp5,pp6,pp7,pp8,pp9,pp10;
result_output u0 (a,b,out);
// partial_product_generator u0 (a,b,pp0,pp1,pp2,pp3,pp4,pp5,pp6,pp7,pp8,pp9,pp10);

initial begin
   $dumpfile("dump.vcd"); 
   $dumpvars;
end

initial begin                                                  
#10 a=255;b=32;
#20 a=12;b=74;
#20 a=12;b=24;
#20 a=43;b=7;
            
                                                                               
end 
// initial begin
//   clk=0;
//      forever #10 clk = ~clk;  
// end 


initial begin 
    #1000 $finish;
end

endmodule //tb_pipeline_mul_8bit