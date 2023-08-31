module tb_booth_4_8_bit ();

reg [31:0] data;

wire [63:0] partial_product;
reg [3:0] segment; 
parameter delay=20; 

booth4_radix_8_32bit_encoder u0 (data,segment,partial_product);
initial begin
   $dumpfile("dump.vcd"); 
   $dumpvars;
end

// initial begin
//   clk=0;
//      forever #10 clk = ~clk;  
// end 

initial begin                                                  
#10   data=278; segment=0;           
#delay segment=1;
#delay segment=2;
#delay segment=3;
#delay segment=4;
#delay segment=5;
#delay segment=6;
#delay segment=7;
#delay segment=8;
#delay segment=9;
#delay segment=10;
#delay segment=11;
#delay segment=12;
#delay segment=13;
#delay segment=14;
#delay segment=15;                                                         
end 


initial begin 
    #1000 $finish;
end


endmodule