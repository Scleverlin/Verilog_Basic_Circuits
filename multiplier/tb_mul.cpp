#include "Vmultiplier_32.h"
#include "verilated.h"
#include <iostream>
#include <cstdlib>

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);

    Vmultiplier_32* top = new Vmultiplier_32;
    for(int i = 0; i < 1000; i++) {
        top->a = rand();
        top->b = rand();
        top->eval();
        uint64_t expected = static_cast<uint64_t>(top->a) * static_cast<uint64_t>(top->b);
        if (top->out != expected) {
            std::cerr << "Mismatch: " << top->out << " != " << expected << "\n";
            exit(EXIT_FAILURE);
        }
    }

    top->final();
    delete top;
    return 0;
}
