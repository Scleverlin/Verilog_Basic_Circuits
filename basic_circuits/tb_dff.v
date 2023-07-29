module tb_DFF();
reg data,clk;
wire q;

RisingEdge_DFlipFlop u0(data,clk,q);

initial begin
  clk=0;
     forever #10 clk = ~clk;  
end 
 initial begin
   $dumpfile("dump.vcd"); 
   $dumpvars;
 end
initial begin 
    #1000 $finish;
end
initial begin
    #5 data=0;
    #5 data=1;
    #5 data=1;
    #5 data=0;
    #5 data=0;
    #5 data=1;
    #5 data=1;
    #5 data=0;
    #5 data=0;    #5 data=1;
    #5 data=1;
    #5 data=0;
    #5 data=0;    #5 data=1;
    #5 data=1;
    #50 data=0;
end

endmodule 