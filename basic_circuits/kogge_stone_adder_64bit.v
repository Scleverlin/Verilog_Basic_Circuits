module kogge_stone_adder_64_bit (
    a,b,cin,sum,cout
);

input [63:0]a,b;
input cin;
output [63:0]sum;
output cout;

wire [65:1]p;  // for matching the index of g
wire [65:1]g;  // for g[0] =cin

pg_gen u0 (a,b,p[65:2],g[65:2]);

assign  g[1]=cin;
assign  p[1]=1'b0;
wire [65:2]level_1_p;
wire [65:1]level_1_q;

// level 1
assign level_1_q[1]=cin;
assign level_1_p=p[65:2];
genvar i;
generate
    for (i=2;i<=65;i=i+1) begin
       assign level_1_q[i]= (level_1_p[i]&g[i-1])|g[i]; // Q(I,J) ,J=I-1;
    end
endgenerate

// level 2
wire [65:2]level_2_p;
wire [65:1]level_2_q;
generate
    for (i=3;i<=65;i=i+1) begin
       assign level_2_p[i]=level_1_p[i] & level_1_p[i-1]; // p9p8 p8p7 p7p6 p6p5 p5p4 p4p3 p3p2 
    end
endgenerate
assign level_2_q[1]=level_1_q[1];
assign level_2_q[2]=level_1_q[2];
generate
    for (i=3;i<=65;i=i+1) begin
     assign level_2_q[i]= (level_2_p[i]&level_1_q[i-2])|level_1_q[i]; // Q(I,J) ,J=I-3;
    end    
endgenerate

// level 3
wire [65:2]level_3_p;
wire [65:1]level_3_q;
generate
    for (i=5;i<=65;i=i+1) begin
       assign level_3_p[i]=level_2_p[i] & level_2_p[i-2]; // p9p8p7p6 p8p7p6p5 p7p6p5p4 p6p5p4p3 p5p4p3p2
    end
endgenerate
generate
    for (i=1;i<=4;i=i+1) begin
     assign level_3_q[i]=level_2_q[i];
    end
    for (i=5;i<=65;i=i+1) begin
     assign level_3_q[i]= (level_3_p[i]&level_2_q[i-4])|level_2_q[i]; // Q(I,J) ,J=I-7;
    end
endgenerate

// level 4 
wire [65:2] level_4_p;
wire [65:1] level_4_q;
generate
    for (i=9;i<=65;i=i+1) begin
       assign  level_4_p = level_3_p[i] & level_3_p[i-4]; // 
    end
endgenerate
generate
    for (i=1;i<=8;i=i+1) begin
     assign level_4_q[i]=level_3_q[i];
    end
    for (i=9;i<=65;i=i+1) begin
     assign level_4_q[i]= (level_4_p[i]&level_3_q[i-8])|level_3_q[i]; // Q(I,J) ,J=I-15;
    end
endgenerate

// level 5 

wire [65:2] level_5_p;
wire [65:1] level_5_q;
generate
    for (i=17;i<=65;i=i+1) begin
       assign  level_5_p = level_4_p[i] & level_4_p[i-8];// 
    end
endgenerate
generate
    for (i=1;i<=16;i=i+1) begin
     assign level_5_q[i]=level_4_q[i];
    end
    for (i=17;i<=65;i=i+1) begin
     assign level_5_q[i]= (level_5_p[i]&level_4_q[i-16])|level_3_q[i]; // Q(I,J) ,J=I-31;
    end
endgenerate

// level 6

wire [65:2] level_6_p;
wire [65:1] level_6_q;

generate
    for (i=33;i<=65;i=i+1) begin
       assign  level_6_p = level_5_p[i] & level_5_p[i-16]; // 
    end
endgenerate
generate
    for (i=1;i<=32;i=i+1) begin
     assign level_6_q[i]=level_5_q[i];
    end
    for (i=33;i<=65;i=i+1) begin
     assign level_6_q[i]= (level_6_p[i]&level_5_q[i-32])|level_5_q[i]; // Q(I,J) ,J=I-63;
    end
endgenerate

// level 7 only for final sum and carry

wire level_7_p;
wire level_7_q;

assign level_7_p = level_6_p[65] & level_6_p[33];
assign level_7_q = (level_7_p&level_6_q[1])|level_6_q[65];



// sum and carry 

assign sum = p[65:2]^level_6_q[64:1];
assign cout = level_7_q;
endmodule
module pg_gen (
    a,b,p,g    
);
input [63:0]a,b;
output [63:0]p,g;
assign p=a^b;
assign g=a&b;
endmodule