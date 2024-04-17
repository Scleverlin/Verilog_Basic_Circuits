//ecndoer for booth radix 16

interface EncoderInterface;
    // possible partial products
    logic [31:0]one,two,three,four,five,six,seven,eight; //1,2,3,4,5,6,7,8
    logic [31:0]_one,_two,_three,_four,_five,_six,_seven,_eight; //-1,-2,-3,-4,-5,-6,-7,-8
    logic zero; //0
    // output
    logic [31:0]result;
    logic [4:0]segment;
  // Modports for multiplier and adder
    logic [4:0]lookup_table[31:0];
    function configure();
        lookup_table[0] = 5'b00000;
        lookup_table[1] = 5'b00001;
        lookup_table[2] = 5'b00010;
        lookup_table[3] = 5'b00011;
        lookup_table[4] = 5'b00100;
        lookup_table[5] = 5'b00101;
        lookup_table[6] = 5'b00110;
        lookup_table[7] = 5'b00111;
        lookup_table[8] = 5'b01000;
        lookup_table[9] = 5'b01001;
        lookup_table[10] = 5'b01010;
        lookup_table[11] = 5'b01011;
        lookup_table[12] = 5'b01100;
        lookup_table[13] = 5'b01101;
        lookup_table[14] = 5'b01110;
        lookup_table[15] = 5'b01111;
        lookup_table[16] = 5'b10000;
        lookup_table[17] = 5'b10001;
        lookup_table[18] = 5'b10010;
        lookup_table[19] = 5'b10011;
        lookup_table[20] = 5'b10100;
        lookup_table[21] = 5'b10101;
        lookup_table[22] = 5'b10110;
        lookup_table[23] = 5'b10111;
        lookup_table[24] = 5'b11000;
        lookup_table[25] = 5'b11001;
        lookup_table[26] = 5'b11010;
        lookup_table[27] = 5'b11011;
        lookup_table[28] = 5'b11100;
        lookup_table[29] = 5'b11101;
        lookup_table[30] = 5'b11110;
        lookup_table[31] = 5'b11111;
    endfunction

  modport endcoder (
    input zero,one,two,three,four,five,six,seven,eight,lookup_table,segment,
    output result);

endinterface

typedef struct packed {
    logic [31:0]mux6to1;
    logic [31:0]ShiftedData;
    logic [31:0]InvData;
} InsideMux; 

module Mutiplexer (EncoderInterface.endcoder enc);
InsideMux intf;

always @ (*) begin
        case ( {enc.segment})                                                                                                            
              :begin 
            
             end
            default:begin   
             intf.mux6to1 = 32'b0;
             end    
        endcase
end



endmodule

