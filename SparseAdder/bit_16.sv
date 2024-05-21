module sparse_adder_16 (a,b,cin,sum,cout);

input logic [15:0] a,b;
input logic cin;
output logic [15:0] sum;
output logic cout;

// p g generator:
logic [15:0] p, g;
assign p[0] = a[0] ^ b[0];
assign p [15:1]= a[15:1] ^ b[15:1];
assign g = a & b;


// CM0
logic [7:0]gglevel1,pplevel1;

genvar i;
generate
   for (i = 1;i<9 ;i=i+1 ) begin
     assign gglevel1[i-1]=g[2*i-1]|p[2*i-1]&g[2*i-2];
     assign pplevel1[i-1]=p[2*i-1]&p[2*i-2];
   end
endgenerate

// CM1  
logic [3:0]gglevel2,pplevel2;

generate
    for (i=1;i<5;i=i+1) begin
      assign gglevel2[i-1]=gglevel1[2*i-1]|pplevel1[2*i-1]&gglevel1[2*i-2];
      assign pplevel2[i-1]=pplevel1[2*i-1]&pplevel1[2*i-2];
    end
endgenerate

// CM2
logic [3:0]gglevel3,pplevel3;

assign gglevel3[0]=gglevel2[0]|pplevel2[0]&cin;
assign pplevel3[0]=1'b0;

assign gglevel3[1]=gglevel2[1];
assign pplevel3[1]=pplevel2[1];

assign gglevel3[2]=gglevel2[2]|pplevel2[2]&gglevel2[1];
assign pplevel3[2]=pplevel2[2]&pplevel2[1];

assign gglevel3[3]=gglevel2[3]|pplevel2[3]&gglevel2[2];
assign pplevel3[3]=pplevel2[3]&pplevel2[2];

// CM3

logic [3:0]gglevel4,pplevel4;

assign gglevel4[0]=gglevel3[0];
assign pplevel4[0]=pplevel3[0];

assign gglevel4[1]=gglevel3[1]|pplevel3[1]&gglevel3[0];
assign pplevel4[1]=pplevel3[1]&pplevel3[0];

assign gglevel4[2]=gglevel3[2]|pplevel3[2]&gglevel3[0];
assign pplevel4[2]=pplevel3[2]&pplevel3[0];

assign gglevel4[3]=gglevel3[3];
assign pplevel4[3]=pplevel3[3];

//CM4

logic [3:0]final_g,final_p;

assign final_g[2:0]=gglevel4[2:0];
assign final_p[2:0]=pplevel4[2:0];

assign final_g[3]=gglevel4[3]|pplevel4[3]&gglevel4[2];
assign final_p[3]=pplevel4[3]&pplevel4[2];


//MUX
//0~3bit

assign sum[0]=cin?~p[0]:p[0];

// assign mux0=cin?~pplevel1[0]:~gglevel1[0];
// assign sum[1]=mux0^p[1];
assign sum[1]=cin?(p[0]|g[0]^p[1]):(g[0]^p[1]);
logic ggmux11,ppmux11;
// assign ggmux1=(g[2]|p[2]&g[1]);
// assign ppmux1=(p[2]&p[1]);

assign sum[2]=cin?((pplevel1[0]|gglevel1[0])^p[2]):(gglevel1[0]^p[2]);
// assign sum[2]=p[2]^ (gglevel1[0]|pplevel1[0]&cin);
// assign sum[3]=final_g[0]^p[3];
assign ggmux11=(g[2]|p[2]&gglevel1[0]);
assign ppmux11=(p[2]&pplevel1[0]);

assign sum[3]=cin?((ppmux11|ggmux11)^p[3]):(ggmux11^p[3]);

assign sum[4]=final_g[0]?~p[4]:p[4];
assign sum[5]=final_g[0]?(p[4]|g[4]^p[5]):(g[4]^p[5]);

logic ggmux2,ppmux2,ggmux22,ppmux22;
// assign ggmux2=~(g[6]|p[6]&g[5]);
// assign ppmux2=~(p[6]&p[5]);

assign sum[6]=final_g[0]?(gglevel1[2]|pplevel1[2]^p[6]):(gglevel1[2]^p[6]);
// assign sum[7]=final_g[1]^p[7];
assign ggmux22=(g[6]|p[6]&gglevel1[2]);
assign ppmux22=(p[6]&pplevel1[2]);

assign sum[7]=final_g[0]?((ppmux22|ggmux22)^p[7]):(ggmux22^p[7]);

assign sum[8]=final_g[1]?~p[8]:p[8];
assign sum[9]=final_g[1]?(p[8]|g[8]^p[9]):(g[8]^p[9]);

logic ggmux3,ppmux3,ggmux33,ppmux33;
// assign ggmux3=(g[10]|p[10]&g[9]);
// assign ppmux3=(p[10]&p[9]);

assign sum[10]=final_g[1]?((gglevel1[4]|pplevel1[4])^p[10]):(gglevel1[4]^p[10]);
// assign ggmux33=~(g[11]|p[11]&g[10]);
// assign ppmux33=~(p[11]&p[10]);
assign ggmux33=(g[10]|p[10]&gglevel1[4]);
assign ppmux33=(p[10]&pplevel1[4]);

assign sum[11]=final_g[1]?((ppmux33|ggmux33)^p[11]):(ggmux33^p[11]);



assign sum[12]=final_g[2]?~p[12]:p[12];
assign sum[13]=final_g[2]?(p[12]|g[12]^p[13]):(g[12]^p[13]);
logic ggmux4,ppmux4,ggmux44,ppmux44;
// assign ggmux4=~(g[14]|p[14]&g[13]);
// assign ppmux4=~(p[14]&p[13]);

assign sum[14]=final_g[2]?(gglevel1[6]|pplevel1[6]^p[14]):(gglevel1[6]^p[14]);
assign ggmux44=(g[14]|p[14]&gglevel1[6]);
assign ppmux44=(p[14]&pplevel1[6]);

assign sum[15]=final_g[2]?(ppmux44|ggmux44^p[14]):(ggmux44^p[14]);
assign cout=final_g[3];
endmodule
