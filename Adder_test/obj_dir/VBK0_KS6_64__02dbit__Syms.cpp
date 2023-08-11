// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VBK0_KS6_64__02dbit__Syms.h"
#include "VBK0_KS6_64__02dbit.h"
#include "VBK0_KS6_64__02dbit___024root.h"

// FUNCTIONS
VBK0_KS6_64__02dbit__Syms::~VBK0_KS6_64__02dbit__Syms()
{
}

VBK0_KS6_64__02dbit__Syms::VBK0_KS6_64__02dbit__Syms(VerilatedContext* contextp, const char* namep, VBK0_KS6_64__02dbit* modelp)
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
