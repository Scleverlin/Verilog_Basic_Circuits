module tb_mul_32bit (
    
);
reg [63:0] a,b;
reg cin;
wire [63:0] sum;
wire  cout;
Hybrid_64_BK1_KL5_Fanout8  u0 (a,b,cin,sum,cout);


initial begin
   $dumpfile("dump.vcd"); 
   $dumpvars;
end

initial begin                                                  
#10 a=255;b=32;cin=1;
#20 a=12;b=32;
#20 a=12;b=32;
#20 a=43;b=32  ;
end 

// initial begin
//   clk=0;
//      forever #10 clk = ~clk;  
// end 


initial begin 
    #1000 $finish;
end

endmodule //tb_pipeline_mul_8bit