#include "VSRT_divider_FP32.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    // Instantiate the top level module
    VSRT_divider_FP32* top = new VSRT_divider_FP32;

    // Create a VCD dump file
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("dump.vcd");

    // Initialize signals
    top->clk = 0;
    top->rst = 0;

    int main_time = 0;
    while (main_time < 2390 && !Verilated::gotFinish()) {
        // Toggle the clock
        bool clk_rising_edge = (main_time % 20) == 0;
        bool clk_falling_edge = (main_time % 20) == 10;

        if (clk_rising_edge) {
            top->clk = 1;
        } else if (clk_falling_edge) {
            top->clk = 0;
        }

        if (main_time == 10) {
            top->rst = 1;
        } else if (main_time == 20) {
            top->dividend = 0x40800000;
            top->divisor = 0x40000000;
        } else if (main_time == 30) {
            top->rst = 0;
        } else if (main_time == 40) {
            top->rst = 1;
        } else if (main_time == 200) {
            top->rst = 0;
        } else if (main_time == 210) {
            top->rst = 1;
        } else if (main_time == 220) {
            top->dividend = 0x420098BA;
            top->divisor = 0x48004ABC;
        } else if (main_time == 230) {
            top->rst = 0;
        } else if (main_time == 240) {
            top->rst = 1;
        } else if (main_time == 400) {
            top->dividend = 0x42BA98BA;
            top->divisor = 0x48004ABC;
        } else if (main_time == 410) {
            top->rst = 0;
        } else if (main_time == 420) {
            top->rst = 1;
        } else if (main_time == 2420) {
            break;  // End the simulation
        }

        // Evaluate the design
        top->eval();

        // Dump waveform data on every time step
        tfp->dump(main_time);

        main_time++;
    }

    // Finalize and close the dump file
    top->final();
    tfp->close();

    // Cleanup
    delete top;
    delete tfp;

    return 0;
}
