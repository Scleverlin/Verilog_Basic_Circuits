module tb_KSA_64 (
    
);
reg [63:0] a,b;
output [63:0] sum;
output  cout;
reg cin;
parameter delay=20; 

kogge_stone_adder_64_bit KSA(
    a,b,cin,sum,cout
);
initial begin
   $dumpfile("dump.vcd"); 
   $dumpvars;
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
#delay a=1024;b=1024;cin=0;
#delay a=2048;b=2048;cin=0;
#delay a=4096;b=4096;cin=0;
#delay a=8192;b=8192;cin=0;
#delay a=16384;b=16384;cin=0;         
#delay a=2000;b=2230;cin=0;                                                                                             
end 
// initial begin
//   clk=0;
//      forever #10 clk = ~clk;  
// end 


initial begin 
    #1000 $finish;
end



endmodule //tb_c_select_adder_8