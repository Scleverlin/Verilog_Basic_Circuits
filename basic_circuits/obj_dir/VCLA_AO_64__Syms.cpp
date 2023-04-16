// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCLA_AO_64__Syms.h"
#include "VCLA_AO_64.h"
#include "VCLA_AO_64___024root.h"

// FUNCTIONS
VCLA_AO_64__Syms::~VCLA_AO_64__Syms()
{
}

VCLA_AO_64__Syms::VCLA_AO_64__Syms(VerilatedContext* contextp, const char* namep, VCLA_AO_64* modelp)
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
