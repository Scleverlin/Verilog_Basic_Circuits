// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdff.h for the primary calling header

#include "verilated.h"

#include "Vdff__Syms.h"
#include "Vdff__Syms.h"
#include "Vdff___024root.h"

void Vdff___024root___ctor_var_reset(Vdff___024root* vlSelf);

Vdff___024root::Vdff___024root(Vdff__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdff___024root___ctor_var_reset(this);
}

void Vdff___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdff___024root::~Vdff___024root() {
}
