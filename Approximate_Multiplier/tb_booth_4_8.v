module tb_booth_4_8_bit ();

reg [7:0] a; 
reg [7:0] b; 
wire [15:0] c; 
parameter delay=20; 

booth_4_8_bit u1 (a,b,c);
initial begin
   $dumpfile("dump.vcd"); 
   $dumpvars;
end

// initial begin
//   clk=0;
//      forever #10 clk = ~clk;  
// end 

initial begin                                                  
#10   a=2;b=5;            
#delay a=1;b=1;
#delay a=12;b=12;
#delay a=12;b=13;
#delay a=75;b=75;
#delay a=-25;b=25;
#delay a=-25;b=25;
#delay a=25;b=-25;

                                                                        
end 


initial begin 
    #1000 $finish;
end


endmodule