/* verilator lint_off UNUSEDSIGNAL */
module BK_adder_16bit (
    a,b,cin,sum,cout
);
input [16:1]a,b;
input cin;
output [16:1]sum;
output cout;
wire [16:0]p,g;
p_g_gen p_g_gen_0(a,b,p,g,cin);

//level1
wire [7:0]gnpg_level1;
wire [7:0]pp;

genvar i;
generate
   for (i = 1;i<9 ;i=i+1 ) begin
     assign gnpg_level1[i-1]=g[2*i-1]|p[2*i-1]&g[2*i-2];
     assign pp[i-1]=p[2*i-1]&p[2*i-2];
   end
endgenerate


//level2
wire [3:0]gnpg_level2;
wire [3:0]pppp;
generate
   for (i = 1;i<5 ;i=i+1 ) begin
     assign  gnpg_level2[i-1]=gnpg_level1[2*i-1]|(pp[2*i-1]&gnpg_level1[2*i-2]);
     assign pppp[i-1]=pp[2*i-1]*pp[2*i-2];
   end
endgenerate


//level3
wire [1:0]gnpg_level3;
wire [1:0]ultra_pp;
assign gnpg_level3[0]=gnpg_level2[1]|pppp[1]&gnpg_level2[0];
assign gnpg_level3[1]=gnpg_level2[3]|pppp[3]&gnpg_level2[2];
assign ultra_pp[0]=pppp[1]&pppp[0];
assign ultra_pp[1]=pppp[3]&pppp[2];

//level4
wire complex_gnpg;
assign complex_gnpg=gnpg_level3[1]|ultra_pp[1]&gnpg_level3[0];

assign cout = g[16]|p[16]&complex_gnpg;

assign sum[1]=p[1]^cin;
assign sum[2]=p[2]^gnpg_level1[0];
wire tmp1;
assign tmp1=g[2]|p[2]&gnpg_level1[0]; //c2
assign sum[3]=p[3]^tmp1;
assign sum[4]=p[4]^gnpg_level2[0];//c3
wire tmp2;
assign tmp2=g[4]|p[4]&gnpg_level2[0];//c4
assign sum[5]=p[5]^tmp2;
wire tmp3;
assign tmp3=gnpg_level1[2]|pp[2]&gnpg_level2[0];//c5
assign sum[6]=p[6]^tmp3;
wire tmp4;
assign tmp4=g[6]|p[6]& tmp3 ;//c6
assign sum[7]=p[7]^tmp4;
assign sum[8]=p[8]^gnpg_level3[0];//c7
wire tmp5;
assign tmp5=g[8]|p[8]&gnpg_level3[0];//c8
assign sum[9]=p[9]^tmp5;
wire tmp6;
assign tmp6=gnpg_level1[4]|pp[4]&gnpg_level3[0];//c9
assign sum[10]=p[10]^tmp6;
wire tmp7;
assign tmp7=g[10]|p[10]&tmp6;//c10
assign sum[11]=p[11]^tmp7;
wire tmp8;
assign tmp8=gnpg_level2[2]|pppp[2]&gnpg_level3[0];//c11
assign sum[12]=p[12]^tmp8;
wire tmp9;
assign tmp9=g[12]|p[12]&tmp8;//c12
assign sum[13]=p[13]^tmp9;
wire tmp10;
assign tmp10=gnpg_level1[6]|pp[6]&tmp8;//c13
assign sum[14]=p[14]^tmp10;
wire tmp11;
assign tmp11=g[14]|p[14]&tmp10;//c14
assign sum[15]=p[15]^tmp11;
assign sum[16]=p[16]^complex_gnpg;//c15



endmodule //BK_adder_8bit

module p_g_gen(a,b,p,g,cin);
input [16:1]a,b;
output [16:0]p,g;
input cin;
assign p[0]=0;
assign g[0]=cin;
assign g[16:1]=a[16:1]&b[16:1];
assign p[16:1]=a[16:1]^b[16:1];
endmodule

