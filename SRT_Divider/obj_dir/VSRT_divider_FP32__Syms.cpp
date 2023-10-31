// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VSRT_divider_FP32__Syms.h"
#include "VSRT_divider_FP32.h"
#include "VSRT_divider_FP32___024root.h"

// FUNCTIONS
VSRT_divider_FP32__Syms::~VSRT_divider_FP32__Syms()
{
}

VSRT_divider_FP32__Syms::VSRT_divider_FP32__Syms(VerilatedContext* contextp, const char* namep, VSRT_divider_FP32* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
