// tb_dff.v
module tb_dff;
reg data;
reg clk;
wire q;

// Instantiate the DFF
dff u1 (.data(data), .clk(clk), .q(q));

initial begin
    data = 0; clk = 0;
    #10 data = 1; // Change data
    #10 clk = 1; // Toggle clock
    #10 data = 0; // Change data again
    #10 clk = 0; // Toggle clock again
    #10 $finish; // Finish the simulation
end

always #5 clk = ~clk; // Continuously toggle clock

always @(posedge clk)
    $display("At time %t, data = %b, q = %b", $time, data, q);
endmodule
