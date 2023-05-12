// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VACA_br_version__Syms.h"
#include "VACA_br_version.h"
#include "VACA_br_version___024root.h"

// FUNCTIONS
VACA_br_version__Syms::~VACA_br_version__Syms()
{
}

VACA_br_version__Syms::VACA_br_version__Syms(VerilatedContext* contextp, const char* namep, VACA_br_version* modelp)
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
