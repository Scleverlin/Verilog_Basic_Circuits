module tb_aca (
    
);

reg [15:0]a;
reg [15:0]b;
reg cin;
wire [15:0]sum;

wire cout;

parameter delay=20; 

 ACA_br_version br(
    a,b,cin,sum,cout
);


initial begin
   $dumpfile("dump.vcd"); 
   $dumpvars;
end



initial begin                                                  
#10   a=2;b=5;cin=1 ;         
#delay a=1;b=1;cin=0;
#delay a=956;b=4587;
#delay a=1234;b=5678;
#delay a=1234;b=7897;
#delay a=9352;b=4589;



                                                              
end 

initial begin 
    #1000 $finish;
end
endmodule //tb_aca