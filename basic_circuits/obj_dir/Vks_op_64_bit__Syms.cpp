// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vks_op_64_bit__Syms.h"
#include "Vks_op_64_bit.h"
#include "Vks_op_64_bit___024root.h"
#include "Vks_op_64_bit_ks_adder_2.h"

// FUNCTIONS
Vks_op_64_bit__Syms::~Vks_op_64_bit__Syms()
{
}

Vks_op_64_bit__Syms::Vks_op_64_bit__Syms(VerilatedContext* contextp, const char* namep, Vks_op_64_bit* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__ks_op_64_bit__DOT__u1{this, Verilated::catName(namep, "ks_op_64_bit.u1")}
    , TOP__ks_op_64_bit__DOT__u2{this, Verilated::catName(namep, "ks_op_64_bit.u2")}
    , TOP__ks_op_64_bit__DOT__u3{this, Verilated::catName(namep, "ks_op_64_bit.u3")}
    , TOP__ks_op_64_bit__DOT__u4{this, Verilated::catName(namep, "ks_op_64_bit.u4")}
    , TOP__ks_op_64_bit__DOT__u5{this, Verilated::catName(namep, "ks_op_64_bit.u5")}
    , TOP__ks_op_64_bit__DOT__u6{this, Verilated::catName(namep, "ks_op_64_bit.u6")}
    , TOP__ks_op_64_bit__DOT__u7{this, Verilated::catName(namep, "ks_op_64_bit.u7")}
    , TOP__ks_op_64_bit__DOT__u8{this, Verilated::catName(namep, "ks_op_64_bit.u8")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__ks_op_64_bit__DOT__u1 = &TOP__ks_op_64_bit__DOT__u1;
    TOP.__PVT__ks_op_64_bit__DOT__u2 = &TOP__ks_op_64_bit__DOT__u2;
    TOP.__PVT__ks_op_64_bit__DOT__u3 = &TOP__ks_op_64_bit__DOT__u3;
    TOP.__PVT__ks_op_64_bit__DOT__u4 = &TOP__ks_op_64_bit__DOT__u4;
    TOP.__PVT__ks_op_64_bit__DOT__u5 = &TOP__ks_op_64_bit__DOT__u5;
    TOP.__PVT__ks_op_64_bit__DOT__u6 = &TOP__ks_op_64_bit__DOT__u6;
    TOP.__PVT__ks_op_64_bit__DOT__u7 = &TOP__ks_op_64_bit__DOT__u7;
    TOP.__PVT__ks_op_64_bit__DOT__u8 = &TOP__ks_op_64_bit__DOT__u8;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__ks_op_64_bit__DOT__u1.__Vconfigure(true);
    TOP__ks_op_64_bit__DOT__u2.__Vconfigure(false);
    TOP__ks_op_64_bit__DOT__u3.__Vconfigure(false);
    TOP__ks_op_64_bit__DOT__u4.__Vconfigure(false);
    TOP__ks_op_64_bit__DOT__u5.__Vconfigure(false);
    TOP__ks_op_64_bit__DOT__u6.__Vconfigure(false);
    TOP__ks_op_64_bit__DOT__u7.__Vconfigure(false);
    TOP__ks_op_64_bit__DOT__u8.__Vconfigure(false);
}
