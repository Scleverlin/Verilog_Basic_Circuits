module t_Add_new ();
wire sum, cout;
reg a, b,cin;
new_adder m1 (a,b,cin,sum,cout);
initial begin 
    #100 $finish;
end
initial begin
   $dumpfile("dump.vcd"); 
   $dumpvars;
end

initial begin
    #10 a=0 ;b=0;cin=0;
    #10 a=1;cin=1;
    #10 b=1;a=0;
    #10 a=1;cin=1;
    #10 a=1;cin=1;
    #10 b=0;cin=0;
end
endmodule
