// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vks_adder_op_3_64__Syms.h"
#include "Vks_adder_op_3_64.h"
#include "Vks_adder_op_3_64___024root.h"
#include "Vks_adder_op_3_64_ks_adder_3.h"

// FUNCTIONS
Vks_adder_op_3_64__Syms::~Vks_adder_op_3_64__Syms()
{
}

Vks_adder_op_3_64__Syms::Vks_adder_op_3_64__Syms(VerilatedContext* contextp, const char* namep, Vks_adder_op_3_64* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__ks_adder_op_3_64__DOT__u0{this, Verilated::catName(namep, "ks_adder_op_3_64.u0")}
    , TOP__ks_adder_op_3_64__DOT__u1{this, Verilated::catName(namep, "ks_adder_op_3_64.u1")}
    , TOP__ks_adder_op_3_64__DOT__u2{this, Verilated::catName(namep, "ks_adder_op_3_64.u2")}
    , TOP__ks_adder_op_3_64__DOT__u3{this, Verilated::catName(namep, "ks_adder_op_3_64.u3")}
    , TOP__ks_adder_op_3_64__DOT__u4{this, Verilated::catName(namep, "ks_adder_op_3_64.u4")}
    , TOP__ks_adder_op_3_64__DOT__u5{this, Verilated::catName(namep, "ks_adder_op_3_64.u5")}
    , TOP__ks_adder_op_3_64__DOT__u6{this, Verilated::catName(namep, "ks_adder_op_3_64.u6")}
    , TOP__ks_adder_op_3_64__DOT__u7{this, Verilated::catName(namep, "ks_adder_op_3_64.u7")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__ks_adder_op_3_64__DOT__u0 = &TOP__ks_adder_op_3_64__DOT__u0;
    TOP.__PVT__ks_adder_op_3_64__DOT__u1 = &TOP__ks_adder_op_3_64__DOT__u1;
    TOP.__PVT__ks_adder_op_3_64__DOT__u2 = &TOP__ks_adder_op_3_64__DOT__u2;
    TOP.__PVT__ks_adder_op_3_64__DOT__u3 = &TOP__ks_adder_op_3_64__DOT__u3;
    TOP.__PVT__ks_adder_op_3_64__DOT__u4 = &TOP__ks_adder_op_3_64__DOT__u4;
    TOP.__PVT__ks_adder_op_3_64__DOT__u5 = &TOP__ks_adder_op_3_64__DOT__u5;
    TOP.__PVT__ks_adder_op_3_64__DOT__u6 = &TOP__ks_adder_op_3_64__DOT__u6;
    TOP.__PVT__ks_adder_op_3_64__DOT__u7 = &TOP__ks_adder_op_3_64__DOT__u7;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__ks_adder_op_3_64__DOT__u0.__Vconfigure(true);
    TOP__ks_adder_op_3_64__DOT__u1.__Vconfigure(false);
    TOP__ks_adder_op_3_64__DOT__u2.__Vconfigure(false);
    TOP__ks_adder_op_3_64__DOT__u3.__Vconfigure(false);
    TOP__ks_adder_op_3_64__DOT__u4.__Vconfigure(false);
    TOP__ks_adder_op_3_64__DOT__u5.__Vconfigure(false);
    TOP__ks_adder_op_3_64__DOT__u6.__Vconfigure(false);
    TOP__ks_adder_op_3_64__DOT__u7.__Vconfigure(false);
}
