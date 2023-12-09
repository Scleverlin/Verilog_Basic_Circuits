// `timescale 1ns / 1ps
`include "mul24.sv"
module mul24_tb;


    reg signed [23:0] a;
    reg signed [23:0] b;

    wire signed [47:0] out;

    reg signed [47:0] expected_out;
    integer errors = 0;


    mul24 uut (
        .a(a), 
        .b(b), 
        .out(out)
    );


    task check_mul;
        input [23:0] in_a, in_b;
        begin
            a = in_a;
            b = in_b;
            expected_out = a * b; 
            #10; 
            if (out !== expected_out) begin
                $display("ERROR at time %0t: a=%d, b=%d, out=%d (expected %d)", $time, a, b, out, expected_out);
                errors = errors + 1;
            end
        end
    endtask

    // Generate random test cases
    initial begin
        repeat (100) begin 
            check_mul($random % (1 << 24), $random % (1 << 24)); 
        end

        if (errors == 0) 
            $display("All tests passed successfully.");
        else
            $display("%0d errors found during testing.", errors);

        $finish;
    end

    // Optional: Add a waveform generation command if using a simulator that supports it
    initial begin
        $dumpfile("mul24_tb.vcd");
        $dumpvars(0, mul24_tb);
    end

endmodule
