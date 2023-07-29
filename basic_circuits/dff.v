module dff(data,clk,q);
input data; // Data input 
input clk; // clock input 
output reg q; // output Q 

always @(posedge clk) 
begin
 q <= data; 
end
 
endmodule 

module dff_test (a,b,clk,c);
input a,b; // Data input 
input clk; // clock input 
output  c; // output Q 

wire c_w;
assign c_w=a+b;


dff u1(c_w,clk,c);

 
endmodule 