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
    while (main_time < 2330 && !Verilated::gotFinish()) { // Added an end time to the simulation
        // Toggle the clock
        bool clk_rising_edge = (main_time % 10) == 0;
        bool clk_falling_edge = (main_time % 10) == 5;

        if (clk_rising_edge) {
            top->clk = 1;  // Clock rising edge
        } else if (clk_falling_edge) {
            top->clk = 0;  // Clock falling edge
        }

        if (main_time == 10) {
            top->rst = 1;
            top->dividend = 0x40800000;
            top->divisor = 0x40000000;
        } else if (main_time == 170) {
            top->dividend = 0x420098BA;
            top->divisor = 0x48004ABC;
        } else if (main_time == 320) {
            top->dividend = 0x42BA98BA;
            top->divisor = 0x48004ABC;
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
