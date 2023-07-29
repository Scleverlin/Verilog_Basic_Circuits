#include "Vdff.h"
#include "verilated.h"
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <random>
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);
    Vdff* top = new Vdff;
    Verilated::traceEverOn(true);  // Verilator must compute traced signals
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);  // Trace 99 levels of hierarchy
    tfp->open("wave.vcd");  // Open the dump file

    top->clk = 0;
    unsigned int main_time = 0;

    while (!Verilated::gotFinish() && main_time < 2000) {
        top->data = main_time / 20 % 2; // change data every 50 time units
        top->data = main_time / 30 % 2; 
        if (main_time % 20 == 0) {
            top->clk = !top->clk; // toggle clock every 20 time units
        }
        top->eval();
        tfp->dump(main_time);  // Write waveform data for this timepoint
        main_time++;
    }

    tfp->close();  // Close dump file
    delete top;
    return 0;
}
