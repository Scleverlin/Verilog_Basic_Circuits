// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VBK_64__Syms.h"
#include "VBK_64.h"
#include "VBK_64___024root.h"
#include "VBK_64_parallel_prefix_tree_first_half__Vrcm__pi3.h"

// FUNCTIONS
VBK_64__Syms::~VBK_64__Syms()
{
}

VBK_64__Syms::VBK_64__Syms(VerilatedContext* contextp, const char* namep, VBK_64* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh{this, Verilated::catName(namep, "Brent_Kung_Adder.t1.recursive_case.recursion_lsbh")}
    , TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh{this, Verilated::catName(namep, "Brent_Kung_Adder.t1.recursive_case.recursion_msbh")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh = &TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh;
    TOP.__PVT__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh = &TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh.__Vconfigure(true);
    TOP__Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh.__Vconfigure(false);
}
