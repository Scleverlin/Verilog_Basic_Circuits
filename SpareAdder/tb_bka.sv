`include "bit_16.sv"
module tb_bka_16 (
    
);
reg [15:0] a,b;
output [15:0] sum;
output  cout;
reg cin;
parameter delay=20; 

sparse_adder_16  shi (a,b,cin,sum,cout);

initial begin
   $dumpfile("dump.vcd"); 
   $dumpvars;
end


initial begin                                                  
#10   a=2;b=5;cin=1'b0;             
#delay a=1;b=1;
#delay a=20;b=20;cin=1;
#delay a=75;b=75;cin=1;
#delay a=128;b=128;cin=0;
#delay a=200;b=20;cin=0;   
#delay a=1024;b=1500;cin=0;   
#delay a=2000;b=2000;cin=0;   
#delay a=6500;b=2000;cin=0;   

$display("The value of gg33 is %d", shi.ggmux33);
$display("The value of pp33 is %d", shi.ppmux33);
$display("The value of p11 is %d", shi.p[11]);
$display("The value of cin=1 is %d",(shi.ppmux33|shi.ggmux33)^shi.p[11]);

// #delay a=65000;b=200;cin=1;
// #delay a=6500000000000;b=2000000;cin=1;



end 
// initial begin
//   clk=0;
//      forever #10 clk = ~clk;  
// end 


initial begin 
    #1000 $finish;
end


endmodule //tb_c_select_adder_8