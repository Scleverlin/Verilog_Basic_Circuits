// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCS_Index_16_mod__Syms.h"
#include "VCS_Index_16_mod.h"
#include "VCS_Index_16_mod___024root.h"

// FUNCTIONS
VCS_Index_16_mod__Syms::~VCS_Index_16_mod__Syms()
{
}

VCS_Index_16_mod__Syms::VCS_Index_16_mod__Syms(VerilatedContext* contextp, const char* namep, VCS_Index_16_mod* modelp)
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
