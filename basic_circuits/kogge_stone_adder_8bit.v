module kogge_stone_adder_8bit (
    a,b,cin,sum,cout
);

input [7:0]a,b;
input cin;
output [7:0]sum;
output cout;

wire [9:1]p;  // for matching the index of g
wire [9:1]g;  // for g[0] =cin

pg_gen u0 (a,b,p[9:2],g[9:2]);

assign  g[1]=cin;
assign  p[1]=1'b0;
wire [9:2]level_1_p;
wire [9:1]level_1_q;

// level 1
assign level_1_q[1]=cin;
assign level_1_p=p[9:2];
genvar i;
generate
    for (i=2;i<=9;i=i+1) begin
       assign level_1_q[i]= (level_1_p[i]&g[i-1])|g[i]; // Q(I,J) ,J=I-1;
    end
endgenerate

// level 2
wire [9:2]level_2_p;
wire [9:1]level_2_q;
generate
    for (i=3;i<=9;i=i+1) begin
       assign level_2_p[i]=level_1_p[i] & level_1_p[i-1]; // p9p8 p8p7 p7p6 p6p5 p5p4 p4p3 p3p2 
    end
endgenerate
assign level_2_q[1]=level_1_q[1];
assign level_2_q[2]=level_1_q[2];
generate
    for (i=3;i<=9;i=i+1) begin
     assign level_2_q[i]= (level_2_p[i]&level_1_q[i-2])|level_1_q[i]; // Q(I,J) ,J=I-3;
    end    
endgenerate

// level 3
wire [9:2]level_3_p;
wire [9:1]level_3_q;
generate
    for (i=4;i<=9;i=i+1) begin
       assign level_3_p[i]=level_2_p[i] & level_2_p[i-2]; // p9p8p7p6 p8p7p6p5 p7p6p5p4 p6p5p4p3 p5p4p3p2
    end
endgenerate//kogge_stone_adder_8bit
generate
    for (i=1;i<=4;i=i+1) begin
     assign level_3_q[i]=level_2_q[i];
    end
    for (i=5;i<=9;i=i+1) begin
     assign level_3_q[i]= (level_3_p[i]&level_2_q[i-4])|level_2_q[i]; // Q(I,J) ,J=I-7;
    end
endgenerate

// level 4 only for final sum and carry
wire level_4_p;
assign level_4_p = level_3_p[9] & level_3_p[5];
wire level_4_q;
assign level_4_q = (level_4_p&level_3_q[1])|level_3_q[9];


// sum and carry 
assign sum = p[9:2]^level_3_q[8:1];
assign cout = level_4_q;
endmodule
module pg_gen (
    a,b,p,g    
);
input [7:0]a,b;
output [7:0]p,g;
assign p=a^b;
assign g=a&b;
endmodule