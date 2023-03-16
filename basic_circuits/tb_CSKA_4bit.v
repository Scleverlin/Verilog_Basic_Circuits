module tb_CSKA_4bit (
    
);
reg [63:0] a,b;
output [63:0] sum;
output  cout;
reg rst,clk;
reg cin;
parameter delay=20; 

CSKA_64_bit  cksa (a,b,cin,sum,cout,clk,rst);
initial begin
   $dumpfile("dump.vcd"); 
   $dumpvars;
end

initial begin
  clk=0;
     forever #10 clk = ~clk;  
end 
initial begin                                                  
#10   a=2;b=5;cin=1'b0;             
#delay a=1;b=1;
#delay a=3;b=4;cin=1;
#delay a=5;b=5;cin=1;
#delay a=8;b=8;cin=0;
#delay a=100;b=102;cin=0;     
#delay a=61;b=72;cin=1;          
#delay a=4091;b=3072;cin=1;        
#delay a=4091;b=3072;cin=1;    
#delay a=30091;b=30972;cin=1;              
#delay a=3000000091;b=300000972;cin=1;                                                                   
#delay a=3000000091;b=300000972;cin=0;           
#delay a=900000123123091;b=300001231230972;cin=0;                                                                   
                                                        
end


initial begin 
    #1000 $finish;
end



endmodule //tb_CSKA_4bit