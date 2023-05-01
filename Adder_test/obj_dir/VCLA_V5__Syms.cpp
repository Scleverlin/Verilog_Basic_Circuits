// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCLA_V5__Syms.h"
#include "VCLA_V5.h"
#include "VCLA_V5___024root.h"
#include "VCLA_V5_CLA_v5_8_bit.h"

// FUNCTIONS
VCLA_V5__Syms::~VCLA_V5__Syms()
{
}

VCLA_V5__Syms::VCLA_V5__Syms(VerilatedContext* contextp, const char* namep, VCLA_V5* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__CLA_v5_64__DOT__u1{this, Verilated::catName(namep, "CLA_v5_64.u1")}
    , TOP__CLA_v5_64__DOT__u2{this, Verilated::catName(namep, "CLA_v5_64.u2")}
    , TOP__CLA_v5_64__DOT__u3{this, Verilated::catName(namep, "CLA_v5_64.u3")}
    , TOP__CLA_v5_64__DOT__u4{this, Verilated::catName(namep, "CLA_v5_64.u4")}
    , TOP__CLA_v5_64__DOT__u5{this, Verilated::catName(namep, "CLA_v5_64.u5")}
    , TOP__CLA_v5_64__DOT__u6{this, Verilated::catName(namep, "CLA_v5_64.u6")}
    , TOP__CLA_v5_64__DOT__u7{this, Verilated::catName(namep, "CLA_v5_64.u7")}
    , TOP__CLA_v5_64__DOT__u8{this, Verilated::catName(namep, "CLA_v5_64.u8")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__CLA_v5_64__DOT__u1 = &TOP__CLA_v5_64__DOT__u1;
    TOP.__PVT__CLA_v5_64__DOT__u2 = &TOP__CLA_v5_64__DOT__u2;
    TOP.__PVT__CLA_v5_64__DOT__u3 = &TOP__CLA_v5_64__DOT__u3;
    TOP.__PVT__CLA_v5_64__DOT__u4 = &TOP__CLA_v5_64__DOT__u4;
    TOP.__PVT__CLA_v5_64__DOT__u5 = &TOP__CLA_v5_64__DOT__u5;
    TOP.__PVT__CLA_v5_64__DOT__u6 = &TOP__CLA_v5_64__DOT__u6;
    TOP.__PVT__CLA_v5_64__DOT__u7 = &TOP__CLA_v5_64__DOT__u7;
    TOP.__PVT__CLA_v5_64__DOT__u8 = &TOP__CLA_v5_64__DOT__u8;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__CLA_v5_64__DOT__u1.__Vconfigure(true);
    TOP__CLA_v5_64__DOT__u2.__Vconfigure(false);
    TOP__CLA_v5_64__DOT__u3.__Vconfigure(false);
    TOP__CLA_v5_64__DOT__u4.__Vconfigure(false);
    TOP__CLA_v5_64__DOT__u5.__Vconfigure(false);
    TOP__CLA_v5_64__DOT__u6.__Vconfigure(false);
    TOP__CLA_v5_64__DOT__u7.__Vconfigure(false);
    TOP__CLA_v5_64__DOT__u8.__Vconfigure(false);
}
