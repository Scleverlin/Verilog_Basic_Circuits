// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBK_64.h for the primary calling header

#include "verilated.h"

#include "VBK_64__Syms.h"
#include "VBK_64___024root.h"

void VBK_64___024root___ctor_var_reset(VBK_64___024root* vlSelf);

VBK_64___024root::VBK_64___024root(VBK_64__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VBK_64___024root___ctor_var_reset(this);
}

void VBK_64___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VBK_64___024root::~VBK_64___024root() {
}
