module tb_mul_32bit (
    
);
reg [31:0] a,b;
reg [63:0]c;
wire  [63:0]out;
reg clk,rst;
FMA_32_128  u0 (a,b,c,out,clk,rst);


initial begin
   $dumpfile("dump.vcd"); 
   $dumpvars;
end

initial begin                                                  
#10 a=255;b=32;c=1;rst=1;
#20 a=12;c=2;
#20 a=12;c=2;
#20 a=43;c=3;                                                                      
end 

initial begin
  clk=0;
     forever #10 clk = ~clk;  
end 


initial begin 
    #1000 $finish;
end

endmodule //tb_pipeline_mul_8bit