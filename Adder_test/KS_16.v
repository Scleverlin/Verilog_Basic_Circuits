/* verilator lint_off UNUSEDSIGNAL */
module KS_16 (a,b,cin,sum,cout);
input [16:1]a;
input [16:1]b;
input cin;
output [16:1]sum;
output cout;

wire [16:0]p;
wire [16:0]g;

pg_gen_ks_16 pg_gen_ks (a,b,cin,p,g);

//level1

wire [15:0] gnpg_level1;
wire [15:0] pp_level1;

genvar i;
assign gnpg_level1[0]=g[0];
assign pp_level1[0]=p[0];

generate
     for (i = 1;i<16 ;i=i+1 ) begin
        assign gnpg_level1[i]=g[i]|p[i]&g[i-1];  // gnpg[0]=g1+p1g0
        assign pp_level1[i]=p[i]&p[i-1];              // pp[0]=p1p0
   end
endgenerate

//level2

wire [15:0] gnpg_level2;
wire [15:0] pp_level2;
assign gnpg_level2[0]=gnpg_level1[0];
assign pp_level2[0]=pp_level1[0];

assign gnpg_level2[1]=gnpg_level1[1];
assign pp_level2[1]=pp_level1[1];

generate
     for (i = 2;i<16 ;i=i+1 ) begin
        assign gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[i-2];  // gnpg[0]=g1+p1g0
        assign pp_level2[i]=pp_level1[i]&pp_level1[i-2];              // pp[0]=p1p0
   end
endgenerate

//level3
wire [15:0] gnpg_level3;
wire [15:0] pp_level3;

assign gnpg_level3[0]=gnpg_level2[0];
assign pp_level3[0]=pp_level2[0];

assign gnpg_level3[1]=gnpg_level2[1];
assign pp_level3[1]=pp_level2[1];

assign gnpg_level3[2]=gnpg_level2[2];
assign pp_level3[2]=pp_level2[2];

assign gnpg_level3[3]=gnpg_level2[3];
assign pp_level3[3]=pp_level2[3];

generate
     for (i = 4;i<16 ;i=i+1 ) begin
        assign gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[i-4];  // gnpg[0]=g1+p1g0
        assign pp_level3[i]=pp_level2[i]&pp_level2[i-4];              // pp[0]=p1p0
   end
endgenerate

//level4
wire [7:0] gnpg_level4;


generate
     for (i = 0;i<8 ;i=i+1 ) begin
        assign gnpg_level4[i]=gnpg_level3[i+8]|pp_level3[i+8]&gnpg_level3[i];  // gnpg[0]=g1+p1g0         
   end
endgenerate

//for cout

assign cout= g[16]|p[16]&gnpg_level4[7];
assign sum[1]= p[1]^gnpg_level3[0];
assign sum[2]= p[2]^gnpg_level3[1];
assign sum[3]= p[3]^gnpg_level3[2];
assign sum[4]= p[4]^gnpg_level3[3]; 
assign sum[5]= p[5]^gnpg_level3[4];
assign sum[6]= p[6]^gnpg_level3[5];
assign sum[7]= p[7]^gnpg_level3[6];
assign sum[8]= p[8]^gnpg_level3[7];
assign sum[9]= p[9]^gnpg_level4[0];
assign sum[10]= p[10]^gnpg_level4[1];
assign sum[11]= p[11]^gnpg_level4[2];
assign sum[12]= p[12]^gnpg_level4[3];
assign sum[13]= p[13]^gnpg_level4[4];
assign sum[14]= p[14]^gnpg_level4[5];
assign sum[15]= p[15]^gnpg_level4[6];
assign sum[16]= p[16]^gnpg_level4[7];

endmodule

module pg_gen_ks_16 (a,b,cin,p,g);
input [15:0]a;
input [15:0]b;
input cin;
output [16:0]p;
output [16:0]g;
assign g[0]=cin;
assign p[0]=0;
assign p[16:1]=a^b;
assign g[16:1]=a&b;
endmodule

