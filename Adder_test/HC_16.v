/* verilator lint_off UNUSEDSIGNAL */
module HC_16 (a,b,cin,sum,cout);

input [16:1]a;
input [16:1]b;
input cin;
output [16:1]sum;
output cout;

wire [16:0]p;
wire [16:0]g;

P_G_gen_hc_16 pg_gen_hc (a,b,cin,p,g);
//level1

wire [7:0] gnpg_level1;
wire [7:0] pp_level1;

genvar i;
generate
     for (i = 0;i<8 ;i=i+1 ) begin
        assign gnpg_level1[i]=g[i*2+1]|p[i*2+1]&g[2*i];  // gnpg[0]=g1+p1g0
        assign pp_level1[i]=p[i*2+1]&p[i*2];              // pp[0]=p1p0
   end
endgenerate

//level2
wire  [7:0] gnpg_level2;
wire  [7:0] pp_level2;
assign gnpg_level2[0]=gnpg_level1[0];
assign pp_level2[0]=pp_level1[0];

generate
    for (i = 1;i<8 ;i=i+1 ) begin
        assign gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[i-1];  
        assign pp_level2[i]=pp_level1[i]&pp_level1[i-1];
   end
endgenerate


//level3
wire [7:0] gnpg_level3;
wire [7:0] pp_level3;
assign gnpg_level3[0]=gnpg_level2[0];
assign pp_level3[0]=pp_level2[0];
assign gnpg_level3[1]=gnpg_level2[1];
assign pp_level3[1]=pp_level2[1];

generate
    for (i = 2;i<8;i=i+1 ) begin
        assign gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[i-2]; 
        assign pp_level3[i]=pp_level2[i]&pp_level2[i-2];
   end
endgenerate


// level 4
wire [7:0] gnpg_level4;
wire [7:0] pp_level4;
assign gnpg_level4[0]=gnpg_level3[0];
assign pp_level4[0]=pp_level3[0];
assign gnpg_level4[1]=gnpg_level3[1];
assign pp_level4[1]=pp_level3[1];
assign gnpg_level4[2]=gnpg_level3[2];
assign pp_level4[2]=pp_level3[2];
assign gnpg_level4[3]=gnpg_level3[3];
assign pp_level4[3]=pp_level3[3];
generate
    for (i = 4;i<8 ;i=i+1 ) begin
        assign gnpg_level4[i]= gnpg_level3[i]|pp_level3[i]&gnpg_level3[i-4];
        assign pp_level4[i]= pp_level3[i]&pp_level3[i-4];
   end
endgenerate


// for sum 2n
assign sum[1]= cin^p[1];
generate
    for (i =1 ;i<9 ;i=i+1 ) begin
        assign sum[2*i]=gnpg_level4[i-1]^p[2*i]; 
    end
endgenerate

// for sum 2n+1
wire [7:1]c2n_1;
generate
    for (i =1;i<8 ;i=i+1 ) begin
     assign c2n_1[i]= g[2*i]|p[2*i]&gnpg_level4[i-1];
     assign sum[2*i+1]=c2n_1[i]^p[2*i+1];
    end 
endgenerate


// for cout
assign cout = g[16]| p[16]&gnpg_level4[7];


endmodule

module P_G_gen_hc_16 (a,b,cin,p,g);
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

