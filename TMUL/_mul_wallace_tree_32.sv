// fixed the fault in the wallace tree multiplier.


module wallace_tree_multiplier_32(a,b,out);
input [31:0] a,b;
output [63:0] out;

logic [703:0] pp;

booth_radix_8 booth_radix_8_1 (a,b,pp);

function [127:0] FA_function ([63:0] x, [63:0] y, [63:0] z);
    reg [127:0] result;
    result[63:0] = x^y^z;
    result[64] = 0;
    result[127:65] = (x&y) | (y&z) | (z&x);
    return result;
endfunction

logic [127:0] level_0_0, level_0_1, level_0_2;

assign level_0_0 = FA_function(pp[63:0], pp[127:64], pp[191:128]);
assign level_0_1 = FA_function(pp[255:192], pp[319:256], pp[383:320]);
assign level_0_2 = FA_function(pp[447:384], pp[511:448], pp[575:512]);

logic [127:0] level_1_0, level_1_1;

assign level_1_0 = FA_function(level_0_0[63:0], level_0_0[127:64], level_0_1[63:0]);
assign level_1_1 = FA_function(level_0_1[127:64], level_0_2[63:0], level_0_2[127:64]);

logic [127:0] level_2_0, level_2_1;

assign level_2_0 = FA_function(level_1_0[63:0], level_1_0[127:64], level_1_1[63:0]);
assign level_2_1 = FA_function(level_1_1[127:64], pp[639:576], pp[703:640]);

logic [127:0] level_3_0;

assign level_3_0 = FA_function(level_2_0[63:0], level_2_0[127:64], level_2_1[63:0]);

logic [127:0] level_4_0;

assign level_4_0 = FA_function(level_3_0[63:0], level_3_0[127:64], level_2_1[127:64]);

logic cout;
adder adder_1 (level_4_0[63:0],level_4_0[127:64] , 1'b0, out, cout);

endmodule



module booth_radix_8(a,b,pp);
input [31:0] a,b;
output [703:0] pp;

logic [3:0]lookup_table [15:0];
assign lookup_table[0]=4'b0000;
assign lookup_table[1]=4'b0001;
assign lookup_table[2]=4'b0010;
assign lookup_table[3]=4'b0011;
assign lookup_table[4]=4'b0100;
assign lookup_table[5]=4'b0101;
assign lookup_table[6]=4'b0110;
assign lookup_table[7]=4'b0111;
assign lookup_table[8]=4'b1000;
assign lookup_table[9]=4'b1001;
assign lookup_table[10]=4'b1010;
assign lookup_table[11]=4'b1011;
assign lookup_table[12]=4'b1100;
assign lookup_table[13]=4'b1101;
assign lookup_table[14]=4'b1110;
assign lookup_table[15]=4'b1111;


logic [31:0] one;
logic [31:0] minus_one;
logic [32:0] two;
logic [32:0] minus_two;
logic [33:0] three;
logic [33:0] minus_three;
logic [33:0] four;
logic [33:0] minus_four;

assign one =a;
assign minus_one = ~a;
assign two = {a,1'b0};
assign minus_two = ~two;
assign four={two,1'b0};
assign minus_four = ~four;
logic cout;
logic [63:0] tmp_three;
adder adder ({32'b0,a},{31'b0,two},1'b0,tmp_three,cout);
assign three=tmp_three[33:0];
assign minus_three = ~three;
multiplexer_small mux_big (b,lookup_table,pp,one,minus_one,two,minus_two,three,minus_three,four,minus_four);

endmodule
module multiplexer_small( b,lookup_table,A_mul,one,minus_one,two,minus_two,three,minus_three,four,minus_four);
input logic [31:0] b;
input logic [3:0]lookup_table [15:0];
output logic [703:0] A_mul ;
input logic [31:0] one;
input logic [31:0] minus_one;
input logic [32:0] two;
input logic [32:0] minus_two;
input logic [33:0] three;
input logic [33:0] minus_three;
input logic [33:0] four;
input logic [33:0] minus_four;

logic [29:0]bit_1_30 ;

genvar i;

generate   
       for (i = 0;i<30 ;i=i+1 ) begin
        assign bit_1_30[i]=1'b1;  
   end
endgenerate

always @ (*) begin
        case ({ b[2:0],1'b0})
             lookup_table[0],lookup_table[15]:begin // 0
             A_mul[63:0]=64'b0; A_mul[66:64]=3'b000;
             end
             lookup_table[1],lookup_table[2] : begin //1
             A_mul[63:0]={32'b0,one};A_mul[66:64]=3'b000; 
             end
             lookup_table[3],lookup_table[4]:begin  // 2
             A_mul[63:0]={31'b0,two};A_mul[66:64]=3'b000;
             end
             lookup_table[5],lookup_table[6]:begin  // 3
             A_mul[63:0]={30'b0,three};A_mul[66:64]=3'b000;
             end
             lookup_table[7]:begin                  //4
             A_mul[63:0]={30'b0,four};A_mul[66:64]=3'b000;
             end
             lookup_table[8]:begin                  //-4
             A_mul[63:0]={bit_1_30,minus_four}; A_mul[66:64]=3'b001; 
             end
             lookup_table[9],lookup_table[10]:begin // -3
             A_mul[63:0]={bit_1_30,minus_three};A_mul[66:64]=3'b001; 
             end
             lookup_table[11],lookup_table[12]:begin // -2
             A_mul[63:0]={bit_1_30,1'b1,minus_two}; A_mul[66:64]=3'b001; 
             end
             lookup_table[13],lookup_table[14]:begin //-1
             A_mul[63:0]={bit_1_30,2'b11,minus_one}; A_mul[66:64]=3'b001;  
             end
            default:begin 
             A_mul[63:0]=64'b0;A_mul[66:64]=3'b000;   
             end    
        endcase
end
//  parameter int SHIFT_NUM = 1,
//  parameter int WIDTH_a = 63 - SHIFT_NUM - 32,
//  parameter int WIDTH_b = 63 - SHIFT_NUM - 33,
//  parameter int WIDTH_c = 63 - SHIFT_NUM - 34,
//  parameter int WIDTH_part = 63 - SHIFT_NUM,
//  parameter int next_width = SHIFT_NUM+4,
//  parameter int width_lc=    SHIFT_NUM+1

mux_for_booth  #( .SHIFT_NUM(2), .WIDTH_a(29),  .WIDTH_b(28),  .WIDTH_c(27), .WIDTH_part(61) , .next_width(6),.width_lc(3) )  mux2(A_mul[127:67],b[5:2],A_mul[133:128],one,minus_one,two,minus_two,three,minus_three,four,minus_four,lookup_table);
mux_for_booth  #( .SHIFT_NUM(5), .WIDTH_a(26),  .WIDTH_b(25),  .WIDTH_c(24), .WIDTH_part(58) , .next_width(9),.width_lc(6) )  mux3(A_mul[191:134],b[8:5],A_mul[200:192],one,minus_one,two,minus_two,three,minus_three,four,minus_four,lookup_table);
mux_for_booth  #( .SHIFT_NUM(8), .WIDTH_a(23),  .WIDTH_b(22),  .WIDTH_c(21), .WIDTH_part(55) , .next_width(12),.width_lc(9) )  mux4(A_mul[255:201],b[11:8],A_mul[267:256],one,minus_one,two,minus_two,three,minus_three,four,minus_four,lookup_table);
mux_for_booth  #( .SHIFT_NUM(11), .WIDTH_a(20),  .WIDTH_b(19),  .WIDTH_c(18), .WIDTH_part(52) , .next_width(15),.width_lc(12) )  mux5(A_mul[319:268],b[14:11],A_mul[334:320],one,minus_one,two,minus_two,three,minus_three,four,minus_four,lookup_table);
mux_for_booth  #( .SHIFT_NUM(14), .WIDTH_a(17),  .WIDTH_b(18),  .WIDTH_c(15), .WIDTH_part(49) , .next_width(18),.width_lc(15) )  mux6(A_mul[383:335],b[17:14],A_mul[401:384],one,minus_one,two,minus_two,three,minus_three,four,minus_four,lookup_table);
mux_for_booth  #( .SHIFT_NUM(17), .WIDTH_a(14),  .WIDTH_b(13),  .WIDTH_c(12), .WIDTH_part(46) , .next_width(21),.width_lc(18) )  mux7(A_mul[447:402],b[20:17],A_mul[468:448],one,minus_one,two,minus_two,three,minus_three,four,minus_four,lookup_table);
mux_for_booth  #( .SHIFT_NUM(20), .WIDTH_a(11),  .WIDTH_b(10),  .WIDTH_c(9), .WIDTH_part(43) , .next_width(24),.width_lc(21) )  mux8(A_mul[511:469],b[23:20],A_mul[535:512],one,minus_one,two,minus_two,three,minus_three,four,minus_four,lookup_table);
mux_for_booth  #( .SHIFT_NUM(23), .WIDTH_a(8),  .WIDTH_b(7),  .WIDTH_c(6), .WIDTH_part(40) , .next_width(27),.width_lc(24) )  mux9(A_mul[575:536],b[26:23],A_mul[602:576],one,minus_one,two,minus_two,three,minus_three,four,minus_four,lookup_table);
mux_for_booth  #( .SHIFT_NUM(26), .WIDTH_a(5),  .WIDTH_b(4),  .WIDTH_c(3), .WIDTH_part(37) , .next_width(30),.width_lc(27) )  mux10(A_mul[639:603],b[29:26],A_mul[669:640],one,minus_one,two,minus_two,three,minus_three,four,minus_four,lookup_table);

always @ (*) begin
        case ({ 1'b0, b[31:29]})
             lookup_table[0],lookup_table[15]:begin // 0
             A_mul[703:670]=34'b0; 
             end
             lookup_table[1],lookup_table[2] : begin //1
             A_mul[703:670]={2'b0,one};  
             end
             lookup_table[3],lookup_table[4]:begin  // 2
             A_mul[703:670]={1'b0,two};  
             end
             lookup_table[5],lookup_table[6]:begin  // 3
             A_mul[703:670]={three}; 
             end
             lookup_table[7]:begin                  //4
             A_mul[703:670]={four}; 
             end
            default:begin 
             A_mul[703:670]=34'b0;   
             end    
        endcase
end



endmodule

module mux_for_booth #(
  parameter int SHIFT_NUM = 1,
  parameter int WIDTH_a = 63 - SHIFT_NUM - 32,
  parameter int WIDTH_b = 63 - SHIFT_NUM - 33,
  parameter int WIDTH_c = 63 - SHIFT_NUM - 34,
  parameter int WIDTH_part = 63 - SHIFT_NUM,
  parameter int next_width = SHIFT_NUM+4,
  parameter int width_lc= SHIFT_NUM+1
)(a_mul_part,segment,amul_part_next_start,one,minus_one,two,minus_two,three,minus_three,four,minus_four,lookup_table);
input logic  [3:0] segment;
input logic [3:0]lookup_table [15:0];
input logic [31:0] one;
input logic [31:0] minus_one;
input logic [32:0] two;
input logic [32:0] minus_two;
input logic [33:0] three;
input logic [33:0] minus_three;
input logic [33:0] four;
input logic [33:0] minus_four;

output logic[WIDTH_part-1:0]a_mul_part;
output logic[next_width-1:0]amul_part_next_start;

// localparam WIDTH_a = 63 - SHIFT_NUM- 32;
// localparam WIDTH_b = 63 - SHIFT_NUM- 33;
// localparam WIDTH_b = 63 - SHIFT_NUM- 34;
logic [WIDTH_a-1:0] one_a,zero_a ;
logic [WIDTH_b-1:0] one_b,zero_b ;
logic [WIDTH_c-1:0]one_c,zero_c ;

assign one_a = {WIDTH_a{1'b1}}; 
assign one_b = {WIDTH_b{1'b1}}; 
assign one_c = {WIDTH_c{1'b1}}; 

assign zero_a=  {WIDTH_a{1'b0}}; 
assign zero_b = {WIDTH_b{1'b0}}; 
assign zero_c = {WIDTH_c{1'b0}}; 


logic [width_lc-1:0] zero_lc;
assign zero_lc = {width_lc{1'b0}};

always @ (*) begin
        case ( {segment})  // shift 9 zeros, the first bit is always zero, 
                                        //so no need to consider the extra addition of 1 
                                        // in the case of complement                                                                                                                
             lookup_table[0],lookup_table[15] :begin 
             a_mul_part={WIDTH_part{1'b0}};  
             amul_part_next_start[next_width-1:next_width-3]=3'b0;
             amul_part_next_start[width_lc-1:0]=zero_lc;
             end

             lookup_table[1],lookup_table[2] : begin 
             a_mul_part={zero_a,one}; 
             amul_part_next_start[next_width-1:next_width-3]=3'b0;
             amul_part_next_start[width_lc-1:0]=zero_lc;
             end

             lookup_table[3],lookup_table[4]:begin
             a_mul_part={zero_b,two}; 
             amul_part_next_start[next_width-1:next_width-3]=3'b0;
             amul_part_next_start[width_lc-1:0]=zero_lc;
             end

             lookup_table[5],lookup_table[6]:begin
             a_mul_part={zero_c,three}; 
             amul_part_next_start[next_width-1:next_width-3]=3'b0;
             amul_part_next_start[width_lc-1:0]=zero_lc;
             end

             lookup_table[7]:begin
             a_mul_part={zero_c,four};
             amul_part_next_start[next_width-1:next_width-3]=3'b0;
             amul_part_next_start[width_lc-1:0]=zero_lc;
             end

             lookup_table[8]:begin
             a_mul_part={one_c,minus_four}; 
             amul_part_next_start[next_width-1:next_width-3]=3'b001;
             amul_part_next_start[width_lc-1:0]=zero_lc;
             end

             lookup_table[9],lookup_table[10]:begin
             a_mul_part={one_c,minus_three};
             amul_part_next_start[next_width-1:next_width-3]=3'b001;
             amul_part_next_start[width_lc-1:0]=zero_lc;
             end

             lookup_table[11],lookup_table[12]:begin
             a_mul_part={one_b,minus_two}; 
             amul_part_next_start[next_width-1:next_width-3]=3'b001;
             amul_part_next_start[width_lc-1:0]=zero_lc;
             end

             lookup_table[13],lookup_table[14]:begin
             a_mul_part={one_a,minus_one}; 
             amul_part_next_start[next_width-1:next_width-3]=3'b001;
             amul_part_next_start[width_lc-1:0]=zero_lc;    
             end
            default:begin   
             a_mul_part={WIDTH_part{1'b0}};          
             amul_part_next_start[next_width-1:next_width-3]=3'b0;
             amul_part_next_start[width_lc-1:0]=zero_lc;
             end    
        endcase
end
endmodule


module adder (a,b,cin,sum,cout);
input [63:0] a,b;
input cin;
output [63:0] sum;
output cout;
assign {cout,sum} = a + b + cin;

endmodule