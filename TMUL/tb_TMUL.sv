`include "TMUL.sv"

module wal_mul_tb;

reg [31:0] a [7:0];
logic [31:0] b [7:0][7:0];
reg clk, rst;
wire [63:0] c [7:0];
integer i, j, k,m; 
logic [255:0] tmp_b [7:0];
assign tmp_b[0][31:0]=b[0][0];
assign tmp_b[0][63:32]=b[0][1];
assign tmp_b[0][95:64]=b[0][2];
assign tmp_b[0][127:96]=b[0][3];
assign tmp_b[0][159:128]=b[0][4];
assign tmp_b[0][191:160]=b[0][5];
assign tmp_b[0][223:192]=b[0][6];
assign tmp_b[0][255:224]=b[0][7];
assign tmp_b[1][31:0]=b[1][0];
assign tmp_b[1][63:32]=b[1][1];
assign tmp_b[1][95:64]=b[1][2];
assign tmp_b[1][127:96]=b[1][3];
assign tmp_b[1][159:128]=b[1][4];
assign tmp_b[1][191:160]=b[1][5];
assign tmp_b[1][223:192]=b[1][6];
assign tmp_b[1][255:224]=b[1][7];
assign tmp_b[2][31:0]=b[2][0];
assign tmp_b[2][63:32]=b[2][1];
assign tmp_b[2][95:64]=b[2][2];
assign tmp_b[2][127:96]=b[2][3];
assign tmp_b[2][159:128]=b[2][4];
assign tmp_b[2][191:160]=b[2][5];
assign tmp_b[2][223:192]=b[2][6];
assign tmp_b[2][255:224]=b[2][7];
assign tmp_b[3][31:0]=b[3][0];
assign tmp_b[3][63:32]=b[3][1];
assign tmp_b[3][95:64]=b[3][2];
assign tmp_b[3][127:96]=b[3][3];
assign tmp_b[3][159:128]=b[3][4];
assign tmp_b[3][191:160]=b[3][5];
assign tmp_b[3][223:192]=b[3][6];
assign tmp_b[3][255:224]=b[3][7];
assign tmp_b[4][31:0]=b[4][0];
assign tmp_b[4][63:32]=b[4][1];
assign tmp_b[4][95:64]=b[4][2];
assign tmp_b[4][127:96]=b[4][3];
assign tmp_b[4][159:128]=b[4][4];
assign tmp_b[4][191:160]=b[4][5];
assign tmp_b[4][223:192]=b[4][6];
assign tmp_b[4][255:224]=b[4][7];
assign tmp_b[5][31:0]=b[5][0];
assign tmp_b[5][63:32]=b[5][1];
assign tmp_b[5][95:64]=b[5][2];
assign tmp_b[5][127:96]=b[5][3];
assign tmp_b[5][159:128]=b[5][4];
assign tmp_b[5][191:160]=b[5][5];
assign tmp_b[5][223:192]=b[5][6];
assign tmp_b[5][255:224]=b[5][7];
assign tmp_b[6][31:0]=b[6][0];
assign tmp_b[6][63:32]=b[6][1];
assign tmp_b[6][95:64]=b[6][2];
assign tmp_b[6][127:96]=b[6][3];
assign tmp_b[6][159:128]=b[6][4];
assign tmp_b[6][191:160]=b[6][5];
assign tmp_b[6][223:192]=b[6][6];
assign tmp_b[6][255:224]=b[6][7];
assign tmp_b[7][31:0]=b[7][0];
assign tmp_b[7][63:32]=b[7][1];
assign tmp_b[7][95:64]=b[7][2];
assign tmp_b[7][127:96]=b[7][3];
assign tmp_b[7][159:128]=b[7][4];
assign tmp_b[7][191:160]=b[7][5];
assign tmp_b[7][223:192]=b[7][6];
assign tmp_b[7][255:224]=b[7][7];

TMUL_32_8mul8 u0 (a, tmp_b, c,clk,rst);

// 时钟生成器
always begin
    #5 clk = ~clk;
end
initial begin
   $dumpfile("dump.vcd"); 
   $dumpvars;
end
// 测试向量生成
initial begin
    // 初始化
    clk = 0;
    // rst = 1;
    #10 rst = 1; // 在10个时间单位后释放复位

    // 初始化a和b为0
    for(j = 0; j < 8; j++) begin
        a[j] = 0;
        for(k = 0; k < 8; k++) begin
            b[j][k] = 0;
            // $display("k=%d", k);
        end
    end

    for(i = 0; i <10000; i = i+1) begin // 10 cycles

        for(j = 0; j < 8; j++) begin
            a[j] = j + 1 + i; // 这将为a赋值 1,2,3...等
            $display("a[%d]=%d", j, a[j]);
            for(k = 0; k < 8; k++) begin
                b[j][k] = k + 1 + i; // 这将为b的每个元素赋值1,2,3...等
                $display("b[%d][%d]=%d", j, k, b[j][k]);
            end
        for (m=0;m<8;m=m+1)begin
        $display("c[%d]=%d", m, c[m]);
         end
        #10; // 等待一个时钟周期
    end

    // $stop; // 结束仿真
end
end

endmodule
