def generate_lzc(bit_width):
    if bit_width < 1:
        return "Error: Bit width must be greater than 0"

    code = f"module leading_zero_counter (\n"
    code += f"    input [{bit_width-1}:0] data,\n"
    code += f"    output reg [{bit_width.bit_length()-1}:0] lz_count\n);\n\n"
    code += f"    always @(*) begin\n"
    code += f"        casez(data)\n"
    
    for i in range(bit_width):
        pattern = '0' * i + '1' + '?' * (bit_width - i - 1)
        code += f"            {bit_width}'b{pattern}: lz_count = {i};\n"
    
    code += f"            {bit_width}'b{'0' * bit_width}: lz_count = {bit_width};\n"
    code += f"            default: lz_count = {bit_width}; // for unknown or high-impedance states\n"
    code += f"        endcase\n"
    code += f"    end\n\n"
    code += f"endmodule\n"

    return code

# Get user input for bit width
bit_width = int(input("Enter the bit width for the Leading Zero Counter: "))
print(generate_lzc(bit_width))
