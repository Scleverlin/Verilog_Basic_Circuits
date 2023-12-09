module mul24(a,b,out);
input logic [23:0]a,b;
output logic [47:0]out;

logic [47:0] partial_product [11:0];
booth4_encoding booth4_encoding   (a,{b[1:0],1'b0},partial_product[0],5'd0);
booth4_encoding booth4_encoding2  (a,b[3:1],partial_product[1],5'd2);
booth4_encoding booth4_encoding3  (a,b[5:3],partial_product[2],5'd4);
booth4_encoding booth4_encoding4  (a,b[7:5],partial_product[3],5'd6);
booth4_encoding booth4_encoding5  (a,b[9:7],partial_product[4],5'd8);
booth4_encoding booth4_encoding6  (a,b[11:9],partial_product[5],5'd10);
booth4_encoding booth4_encoding7  (a,b[13:11],partial_product[6],5'd12);
booth4_encoding booth4_encoding8  (a,b[15:13],partial_product[7],5'd14);
booth4_encoding booth4_encoding9  (a,b[17:15],partial_product[8],5'd16);
booth4_encoding booth4_encoding10 (a,b[19:17],partial_product[9],5'd18);
booth4_encoding booth4_encoding11 (a,b[21:19],partial_product[10],5'd20);
booth4_encoding booth4_encoding12 (a,b[23:21],partial_product[11],5'd22);




assign out= partial_product[0]+partial_product[1]+partial_product[2]+partial_product[3]+partial_product[4]+partial_product[5]+partial_product[6]+partial_product[7]+partial_product[8]+partial_product[9]+partial_product[10]+partial_product[11];

endmodule



module booth4_encoding(a,code,partial_product,shift);
   input logic [23:0]a;
   input logic [2:0] code;
   input [4:0] shift;
   output logic [47:0] partial_product;

//    logic [47:0] two_b,b,minus_b,minus_two_b;

//    assign b={24'b0,b} ;
//    assign two_b=b<< 1;
//    assign minus_b=~b+1'b1;
//    assign minus_two_b=~two_b+1'b1;
logic [47:0] one;
assign one =a[23]?{24'hFFFFFF,a}:{24'b0,a};
logic [47:0] two;
assign two =a[23]?{3'b111,20'hFFFFF,a,1'b0}:{23'b0,a,1'b0};
logic [47:0] minus_one;
assign minus_one = ~one+1'b1;
logic [47:0] minus_two;
assign minus_two = ~two+1'b1;

    always_comb begin
        case (code)
            3'b000, 3'b111:  partial_product = 48'b0;    //  0
            3'b001, 3'b010:  partial_product = one<<shift;            //  1
            3'b011:          partial_product = two<<shift;        //  2
            3'b100:          partial_product = minus_two<<shift;  // -2
            3'b101, 3'b110:  partial_product = minus_one<<shift;      // -1
            default:         partial_product = 48'b0;      
        endcase
    end
endmodule


// module gen_product(a,encode,out);
// input logic [23:0]a;
// input logic signed [2:0]encode;
// output logic [47:0]out;

// always_comb begin
//     case (encode)
//             0:  out = 48'b0;    //  0
//             1:  out = {24'b0,a};            //  1
//             2:  out = {23'b0,a,1'b0};        //  2
//             -2: out = ~{23'b0,a,1'b0}+1'b1;  // -2
//             -1: out = ~{24'b0,a}+1'b1;      // -1
//        default:         out = 48'b0;      
//         endcase
//     end

// endmodule
