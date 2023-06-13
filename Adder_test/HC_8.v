/* verilator lint_off UNUSEDSIGNAL */
module HC_8 (a,b,cin,sum,cout);

input [8:1]a;
input [8:1]b;
input cin;
output [8:1]sum;
output cout;

wire [8:0]p;
wire [8:0]g;

P_G_gen_hc_8 pg_gen_hc (a,b,cin,p,g);

//level1

wire [3:0] gnpg_level1;
wire [3:0] pp_level1;

genvar i;
generate
     for (i = 0;i<4 ;i=i+1 ) begin
        assign gnpg_level1[i]=g[i*2+1]|p[i*2+1]&g[2*i];  // gnpg[0]=g1+p1g0
        assign pp_level1[i]=p[i*2+1]&p[i*2];              // pp[0]=p1p0
   end
endgenerate

//level2
wire  [3:0] gnpg_level2;
wire  [3:0] pp_level2;
assign gnpg_level2[0]=gnpg_level1[0];
assign pp_level2[0]=pp_level1[0];

generate
    for (i = 1;i<4 ;i=i+1 ) begin
        assign gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[i-1];  
        assign pp_level2[i]=pp_level1[i]&pp_level1[i-1];
   end
endgenerate


//level3
wire [3:0] gnpg_level3;
wire [3:0] pp_level3;
assign gnpg_level3[0]=gnpg_level2[0];
assign pp_level3[0]=pp_level2[0];
assign gnpg_level3[1]=gnpg_level2[1];
assign pp_level3[1]=pp_level2[1];

generate
    for (i = 2;i<4;i=i+1 ) begin
        assign gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[i-2]; 
        assign pp_level3[i]=pp_level2[i]&pp_level2[i-2];
   end
endgenerate

assign sum[1]= cin^p[1];
generate
    for (i =1 ;i<5 ;i=i+1 ) begin
        assign sum[2*i]=gnpg_level3[i-1]^p[2*i];  // 2 4 6 8 
    end
endgenerate

wire [4:1]c2n_1;
generate
    for (i =1;i<4 ;i=i+1 ) begin
     assign c2n_1[i]= g[2*i]|p[2*i]&gnpg_level3[i-1]; // 1 3 5 
     assign sum[2*i+1]=c2n_1[i]^p[2*i+1];
    end 
endgenerate

assign cout = g[8]| p[8]&gnpg_level3[3];

endmodule

module P_G_gen_hc_8 (a,b,cin,p,g);
input [7:0]a;
input [7:0]b;
input cin;
output [8:0]p;
output [8:0]g;
assign g[0]=cin;
assign p[0]=0;
assign p[8:1]=a^b;
assign g[8:1]=a&b;
endmodule

