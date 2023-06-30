// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCS_index_3__Syms.h"
#include "VCS_index_3.h"
#include "VCS_index_3___024root.h"

// FUNCTIONS
VCS_index_3__Syms::~VCS_index_3__Syms()
{
}

VCS_index_3__Syms::VCS_index_3__Syms(VerilatedContext* contextp, const char* namep, VCS_index_3* modelp)
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
