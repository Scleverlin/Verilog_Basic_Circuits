module dff(data,clk,q);
input reg data; // Data input 
input clk; // clock input 
output reg q; // output Q 

always @(posedge clk) 
begin
 q <= data; 
end
 
endmodule 
