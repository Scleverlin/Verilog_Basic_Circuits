// each 16 FMAs use one booth encoder

module partialproductgenerator (mantissa_a,one,two,three,four,minus_one,minus_two,minus_three,minus_four);
input logic [10:0]mantissa_a;

// a的11位浮点数需要加一个符号位，不然全是负数,所以总共是12位；

// output logic zero; // 0 不需要考虑位数， 只用1位来省导线
output logic [11:0] one;
output logic [11:0] minus_one;
output logic [12:0] two;
output logic [12:0] minus_two;
output logic [13:0] three;
output logic [13:0] minus_three;
output logic [13:0] four;
output logic [13:0] minus_four;
// output logic sign_a;
// output logic exp_a;

// These parts should be done in the extractor.

// assign sign_a=a[15];
// assign exp_a=a[14:10];
 
logic [11:0] mantissa_a_with_sign;

// assign mantissa_a[10]=(exp_a==0)?0:1;
// assign mantissa_a[9:0]=a[9:0];
assign mantissa_a_with_sign[11]=1'b0;

// assign zero=1'b0;
assign one=mantissa_a_with_sign
assign minus_one=~mantissa_a_with_sign
assign two={mantissa_a_with_sign,1'b0};
assign minus_two=~{mantissa_a_with_sign,1'b0};
assign three={2'b0,one}+{1'b0,two};
assign minus_three=~three;
assign four={mantissa_a_with_sign,2'b0};
assign minus_four=~four;

endmodule


// module booth_radix_8_lookup_table(mantissa_b);
// // typedef logic [15:0] Row [15:0];
// input logic [10:0] mantissa_b;
// output logic [11:0] booth_encoded_b;

// logic [3:0]lookup_table [15:0];



// endmodule

module multiplexer_small(B_mantissa,lookup_table,Row_A_mul);
input logic [10:0] B_mantissa;
input logic [3:0]lookup_table [15:0];
output logic [95:0] Row_A_mul ;

always_comb begin
        case ({ B_mantissa[2:0],1'b0})
             lookup_table[0],lookup_table[15]:begin // 0
             Row_A_mul[23:0]=24'b0; Row_A_mul[24]=1'b0;
             end
             lookup_table[1],lookup_table[2] : begin //1
             Row_A_mul[23:0]={12'b0,one}; Row_A_mul[24]=1'b0;  
             end
             lookup_table[3],lookup_table[4]:begin  // 2
             Row_A_mul[23:0]={11'b0,two}; Row_A_mul[24]=1'b0; 
             end
             lookup_table[5],lookup_table[6]:begin  // 3
             Row_A_mul[23:0]={10'b0,three}; Row_A_mul[24]=1'b0; 
             end
             lookup_table[7]:begin                  //4
             Row_A_mul[23:0]={10'b0,four}; Row_A_mul[24]=1'b0; 
             end
             lookup_table[8]:begin                  //-4
             Row_A_mul[23:0]={10'b1111111111,minus_four}; Row_A_mul[24]=1'b1; 
             end
             lookup_table[9],lookup_table[10]:begin // -3
             Row_A_mul[23:0]={10'b1111111111,minus_three}; Row_A_mul[24]=1'b1; 
             end
             lookup_table[11],lookup_table[12]:begin // -2
             Row_A_mul[23:0]={11'b11111111111,minus_two}; Row_A_mul[24]=1'b1; 
             end
             lookup_table[13],lookup_table[14]:begin //-1
             Row_A_mul[23:0]={12'b111111111111,minus_one}; Row_A_mul[24]=1'b1;  
             end
            default:begin 
             Row_A_mul[23:0]=24'b0; Row_A_mul[48]=1'b0;    
             end    
        endcase
end

always_comb begin
        case ( B_mantissa[5:2]) // shift 3 zeros
             lookup_table[0],lookup_table[15]:begin 
             Row_A_mul[47:25]=23'b0; Row_A_mul[48]=1'b0;
             end
             lookup_table[1],lookup_table[2]:begin 
             Row_A_mul[47:25]={9'b0,one,2'b0}; Row_A_mul[48]=1'b0;  
             end
             lookup_table[3],lookup_table[4]:begin
             Row_A_mul[47:25]={8'b0,two,2'b0}; Row_A_mul[48]=1'b0;  
             end
             lookup_table[5],lookup_table[6]:begin
             Row_A_mul[47:25]={7'b0,three,2'b0}; Row_A_mul[48]=1'b0;  
             end
             lookup_table[7]:begin
             Row_A_mul[47:25]={7'b0,four,2'b0}; Row_A_mul[48]=1'b0;  
             end
             lookup_table[8]:begin
             Row_A_mul[47:25]={7'b1111111,minus_four,2'b0}; Row_A_mul[48]=1'b1; 
             end
             lookup_table[9],lookup_table[10]:begin
             Row_A_mul[47:25]={7'b1111111,minus_three,2'b0}; Row_A_mul[48]=1'b1; 
             end
             lookup_table[11],lookup_table[12]:begin
             Row_A_mul[47:25]={8'b11111111,minus_two,2'b0}; Row_A_mul[48]=1'b1; 
             end
             lookup_table[13],lookup_table[14]:begin
             Row_A_mul[47:25]={9'b111111111,minus_one,2'b0}; Row_A_mul[48]=1'b1; 
             end

            default:begin    
             Row_A_mul[47:25]=24'b0; Row_A_mul[48]=1'b0;   
             end    
        endcase
end
 

always_comb begin
        case ( B_mantissa[8:5])  // shift 6 zeros
             lookup_table[0],lookup_table[15] : 
             begin 
             Row_A_mul[71:49]=23'b0; Row_A_mul[72]=1'b0;
             end
             lookup_table[1],lookup_table[2] : begin 
             Row_A_mul[71:49]={6'b0,one,5'b0}; Row_A_mul[72]=1'b0; 
             end
             lookup_table[3],lookup_table[4]:begin
             Row_A_mul[71:49]={5'b0,two,5'b0}; Row_A_mul[72]=1'b0; 
             end
             lookup_table[5],lookup_table[6]:begin
             Row_A_mul[71:49]={4'b0,three,5'b0}; Row_A_mul[72]=1'b0;  
             end
             lookup_table[7]:begin
             Row_A_mul[71:49]={4'b0,four,5'b0}; Row_A_mul[72]=1'b0; 
             end
             lookup_table[8]:begin
             Row_A_mul[71:49]={4'b1111,minus_four,5'b0}; Row_A_mul[72]=1'b1; 
             end
             lookup_table[9],lookup_table[10]:begin
             Row_A_mul[71:49]={4'b1111,minus_three,5'b0}; Row_A_mul[72]=1'b1; 
             end
             lookup_table[11],lookup_table[12]:begin
             Row_A_mul[71:49]={5'b11111,minus_two,5'b0}; Row_A_mul[72]=1'b1; 
             end
             lookup_table[13],lookup_table[14]:begin
             Row_A_mul[71:49]={6'b111111,minus_one,5'b0}; Row_A_mul[72]=1'b1;     
             end
            default:begin   
             Row_A_mul[71:49]=24'b0; Row_A_mul[72]=1'b0; 
             end    
        endcase
end
 
always_comb begin
        case ( {1'b0,B_mantissa[10:8]})  // shift 9 zeros, the first bit is always zero, 
                                        //so no need to consider the extra addition of 1 
                                        // in the case of complement                                                                                                                
             lookup_table[0],lookup_table[15] : 
             begin 
             Row_A_mul[95:73]=23'b0; 
             end
             lookup_table[1],lookup_table[2] : begin 
             Row_A_mul[95:73]={3'b0,one,8'b0};
             end
             lookup_table[3],lookup_table[4]:begin
             Row_A_mul[95:73]={2'b0,two,8'b0};
             end
             lookup_table[5],lookup_table[6]:begin
             Row_A_mul[95:73]={1'b0,three,8'b0};
             end
             lookup_table[7]:begin
             Row_A_mul[95:73]={1'b0,four,8'b0};
             end
            default:begin   
             end    
        endcase
end

endmodule


module multiplexer_for_row (one,two,three,four,minus_one,minus_two,minus_three,minus_four,RowB_mantissa,mode,Row_A_mul);

input logic [11:0] one;
input logic [11:0] minus_one;
input logic [12:0] two;
input logic [12:0] minus_two;
input logic [13:0] three;
input logic [13:0] minus_three;
input logic [13:0] four;
input logic [13:0] minus_four;

typedef logic [10:0] Row [15:0];
// typedef logic [10:0] Row_with_sign [15:0];
typedef logic [95:0] a_mul [15:0];
input Row RowB_mantissa;
input logic mode; // BF16 OR FP16.. INT8 should be same processed as FP16

output a_mul Row_A_mul;


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


multiplexer_small  multiplexer_0 (RowB_mantissa[0],lookup_table,Row_A_mul[0]);
multiplexer_small  multiplexer_1 (RowB_mantissa[1],lookup_table,Row_A_mul[1]);
multiplexer_small  multiplexer_2 (RowB_mantissa[2],lookup_table,Row_A_mul[2]);
multiplexer_small  multiplexer_3 (RowB_mantissa[3],lookup_table,Row_A_mul[3]);
multiplexer_small  multiplexer_4 (RowB_mantissa[4],lookup_table,Row_A_mul[4]);
multiplexer_small  multiplexer_5 (RowB_mantissa[5],lookup_table,Row_A_mul[5]);
multiplexer_small  multiplexer_6 (RowB_mantissa[6],lookup_table,Row_A_mul[6]);
multiplexer_small  multiplexer_7 (RowB_mantissa[7],lookup_table,Row_A_mul[7]);
multiplexer_small  multiplexer_8 (RowB_mantissa[8],lookup_table,Row_A_mul[8]);
multiplexer_small  multiplexer_9 (RowB_mantissa[8],lookup_table,Row_A_mul[9]);
multiplexer_small  multiplexer_10 (RowB_mantissa[10],lookup_table,Row_A_mul[10]);
multiplexer_small  multiplexer_11 (RowB_mantissa[11],lookup_table,Row_A_mul[11]);
multiplexer_small  multiplexer_12 (RowB_mantissa[12],lookup_table,Row_A_mul[12]);
multiplexer_small  multiplexer_13 (RowB_mantissa[13],lookup_table,Row_A_mul[13]);
multiplexer_small  multiplexer_14 (RowB_mantissa[14],lookup_table,Row_A_mul[14]);
multiplexer_small  multiplexer_15 (RowB_mantissa[15],lookup_table,Row_A_mul[15]);




endmodule


// module boothencoder_radix_8 (RowB,mul_RowA,Exp_A,mode);
// typedef logic [15:0] Row [15:0];

// input Row  RowB;
// // input  [15:0] a;

// endmodule


module extractor(a,b,c,sign_a,exp_a,sign_b,exp_b,sign_c,exp_c,mantissa_a,mantissa_b,mantissa_c);

input logic [15:0] a,
input logic [15:0] b,
input logic [15:0] c,
output logic sign_a,
output logic [4:0] exp_a, // True exponent, considering denormalized numbers
output logic sign_b,
output logic [4:0] exp_b, // True exponent, considering denormalized numbers
output logic sign_c,
output logic [4:0] exp_c, // True exponent, considering denormalized numbers
output logic [10:0] mantissa_a, // Includes implicit leading 1 for normalized
output logic [10:0] mantissa_b, // Includes implicit leading 1 for normalized
output logic [10:0] mantissa_c  // Includes implicit leading 1 for normalized


// Extract sign bits
assign sign_a = a[15];
assign sign_b = b[15];
assign sign_c = c[15];

// Adjust exponents for bias, directly setting for denormalized numbers
assign exp_a = (a[14:10] == 5'b00000) ? 5'b10010 : a[14:10] + 5'b10001; // -14 for denormalized
assign exp_b = (b[14:10] == 5'b00000) ? 5'b10010 : b[14:10] + 5'b10001; // -14 for denormalized
assign exp_c = (c[14:10] == 5'b00000) ? 5'b10010 : c[14:10] + 5'b10001; // -14 for denormalized

// Extract mantissas, adding implicit leading 1 for normalized numbers
assign mantissa_a = (a[14:10] != 5'b00000) ? {1'b1, a[9:0]} : {1'b0, a[9:0]};
assign mantissa_b = (b[14:10] != 5'b00000) ? {1'b1, b[9:0]} : {1'b0, b[9:0]};
assign mantissa_c = (c[14:10] != 5'b00000) ? {1'b1, c[9:0]} : {1'b0, c[9:0]};

endmodule




module simple_FMA();

endmodule

module FMA_Row(RowA,RowB,RowC,Row_product);


endmodule