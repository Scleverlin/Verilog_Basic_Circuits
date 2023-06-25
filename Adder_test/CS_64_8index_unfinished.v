module CS_64(a,b,cin,sum,cout);

input [64:1] a,b;
input cin;
output [64:1] sum;
output cout;

wire [64:0]p;
wire [64:0]g;

P_G_gen_cs_64 pg_gen_cs (a,b,cin,p,g);

//level 1
wire [31:0] gnpg_level1;
wire [31:0] pp_level1;

genvar i;
generate
     for (i = 0;i<32 ;i=i+1 ) begin
        assign gnpg_level1[i]=g[i*2+1]|p[i*2+1]&g[2*i];  // gnpg[0]=g1+p1g0
        assign pp_level1[i]=p[i*2+1]&p[i*2];              // pp[0]=p1p0
   end
endgenerate

//level 2
wire [15:0] gnpg_level2;
wire [15:0] pp_level2;
generate 
    for (i = 0;i<16 ;i=i+1 ) begin
        assign gnpg_level2[i]=gnpg_level1[i*2+1]|pp_level1[i*2+1]&gnpg_level1[i*2];  
        assign pp_level2[i]=pp_level1[i*2+1]&pp_level1[i*2];
   end
endgenerate

//level3
wire [7:0] gnpg_level3;
wire [7:0] pp_level3;

generate
    for (i = 0;i<8;i=i+1 ) begin
        assign gnpg_level3[i]=gnpg_level2[i*2+1]|pp_level2[i*2+1]&gnpg_level2[i*2]; 
        assign pp_level3[i]=pp_level2[i*2+1]&pp_level2[i*2];
   end
endgenerate

// level 4
wire [7:0] gnpg_level4;
wire [7:0] pp_level4;
assign gnpg_level4[0]=gnpg_level3[0];
assign pp_level4[0]=pp_level3[0];

generate
    for (i = 1;i<8;i=i+1 ) begin
        assign gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[i-1]; 
        assign pp_level4[i]=pp_level3[i]&pp_level3[i-1];
   end
endgenerate

// level 5
wire [7:0] gnpg_level5;
wire [7:0] pp_level5;
assign gnpg_level5[0]=gnpg_level4[0];
assign pp_level5[0]=pp_level4[0];
assign gnpg_level5[1]=gnpg_level4[1];
assign pp_level5[1]=pp_level4[1];

generate
    for (i = 2;i<8;i=i+1 ) begin
        assign gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[i-2]; 
        assign pp_level5[i]=pp_level4[i]&pp_level4[i-2];
   end
endgenerate

// level 6

wire [3:0] gnpg_level6;
wire [3:0] pp_level6;

generate 
    for (i = 0;i<4;i=i+1 ) begin
        assign gnpg_level6[i]=gnpg_level5[i+4]|pp_level5[i+4]&gnpg_level5[i]; 
   end
endgenerate

assign cout = g[64]| p[64]&gnpg_level6[3];
assign sum[1]= cin^p[1];
assign sum[2]= gnpg_level1[0]^p[2];
assign tmp1=g[2]|p[2]&gnpg_level1[0];//c2
assign sum[3]= tmp1^p[3];
assign sum[4]= gnpg_level2[0]^p[4];
assign tmp2=g[4]|p[4]&gnpg_level2[0];//c4
assign tmp3=gnpg_level1[2]|pp_level1[2]&gnpg_level2[0];//c5
assign tmp4=g[6]|p[6] & tmp3;//c6
assign sum[5]= tmp2^p[5];
assign sum[6]= tmp3^p[6];
assign sum[7]= tmp4^p[7];
assign sum[8]= gnpg_level5[0]^p[8];
assign sum[16]= gnpg_level5[1]^p[16];
assign sum[24]= gnpg_level5[2]^p[24];
assign sum[32]= gnpg_level5[3]^p[32];
assign sum[40]= gnpg_level6[0]^p[40];
assign sum[48]= gnpg_level6[1]^p[48];
assign sum[56]= gnpg_level6[2]^p[56];
assign sum[64]= gnpg_level6[3]^p[64];



endmodule

module P_G_gen_cs_64 (a,b,cin,p,g);
input [63:0]a;
input [63:0]b;
input cin;
output [64:0]p;
output [64:0]g;
assign g[0]=cin;
assign p[0]=0;
assign p[64:1]=a^b;
assign g[64:1]=a&b;
endmodule