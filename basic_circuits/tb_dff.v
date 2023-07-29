module tb_DFF();
reg a,b,clk,data;
wire c,q;

dff_test u0 (a,b,clk,c);
dff u1 (data,clk,q);
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
#10 a=0;b=0;data=0;
#10 a=0;b=1;data=1;
#10 a=1;b=0;data=1;
#10 a=1;b=1;data=0;
#10 a=0;b=0;data=1;
#10 a=0;b=1;data=1;

end

endmodule 