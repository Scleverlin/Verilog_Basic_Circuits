// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmultiplier_32__Syms.h"
#include "Vmultiplier_32.h"
#include "Vmultiplier_32___024root.h"
#include "Vmultiplier_32_HC_64.h"

// FUNCTIONS
Vmultiplier_32__Syms::~Vmultiplier_32__Syms()
{
}

Vmultiplier_32__Syms::Vmultiplier_32__Syms(VerilatedContext* contextp, const char* namep, Vmultiplier_32* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__multiplier_32__DOT__hc_64_0{this, Verilated::catName(namep, "multiplier_32.hc_64_0")}
    , TOP__multiplier_32__DOT__hc_64_1{this, Verilated::catName(namep, "multiplier_32.hc_64_1")}
    , TOP__multiplier_32__DOT__hc_64_10{this, Verilated::catName(namep, "multiplier_32.hc_64_10")}
    , TOP__multiplier_32__DOT__hc_64_11{this, Verilated::catName(namep, "multiplier_32.hc_64_11")}
    , TOP__multiplier_32__DOT__hc_64_12{this, Verilated::catName(namep, "multiplier_32.hc_64_12")}
    , TOP__multiplier_32__DOT__hc_64_13{this, Verilated::catName(namep, "multiplier_32.hc_64_13")}
    , TOP__multiplier_32__DOT__hc_64_14{this, Verilated::catName(namep, "multiplier_32.hc_64_14")}
    , TOP__multiplier_32__DOT__hc_64_15{this, Verilated::catName(namep, "multiplier_32.hc_64_15")}
    , TOP__multiplier_32__DOT__hc_64_16{this, Verilated::catName(namep, "multiplier_32.hc_64_16")}
    , TOP__multiplier_32__DOT__hc_64_17{this, Verilated::catName(namep, "multiplier_32.hc_64_17")}
    , TOP__multiplier_32__DOT__hc_64_18{this, Verilated::catName(namep, "multiplier_32.hc_64_18")}
    , TOP__multiplier_32__DOT__hc_64_19{this, Verilated::catName(namep, "multiplier_32.hc_64_19")}
    , TOP__multiplier_32__DOT__hc_64_2{this, Verilated::catName(namep, "multiplier_32.hc_64_2")}
    , TOP__multiplier_32__DOT__hc_64_20{this, Verilated::catName(namep, "multiplier_32.hc_64_20")}
    , TOP__multiplier_32__DOT__hc_64_21{this, Verilated::catName(namep, "multiplier_32.hc_64_21")}
    , TOP__multiplier_32__DOT__hc_64_22{this, Verilated::catName(namep, "multiplier_32.hc_64_22")}
    , TOP__multiplier_32__DOT__hc_64_23{this, Verilated::catName(namep, "multiplier_32.hc_64_23")}
    , TOP__multiplier_32__DOT__hc_64_24{this, Verilated::catName(namep, "multiplier_32.hc_64_24")}
    , TOP__multiplier_32__DOT__hc_64_25{this, Verilated::catName(namep, "multiplier_32.hc_64_25")}
    , TOP__multiplier_32__DOT__hc_64_26{this, Verilated::catName(namep, "multiplier_32.hc_64_26")}
    , TOP__multiplier_32__DOT__hc_64_27{this, Verilated::catName(namep, "multiplier_32.hc_64_27")}
    , TOP__multiplier_32__DOT__hc_64_28{this, Verilated::catName(namep, "multiplier_32.hc_64_28")}
    , TOP__multiplier_32__DOT__hc_64_29{this, Verilated::catName(namep, "multiplier_32.hc_64_29")}
    , TOP__multiplier_32__DOT__hc_64_3{this, Verilated::catName(namep, "multiplier_32.hc_64_3")}
    , TOP__multiplier_32__DOT__hc_64_30{this, Verilated::catName(namep, "multiplier_32.hc_64_30")}
    , TOP__multiplier_32__DOT__hc_64_4{this, Verilated::catName(namep, "multiplier_32.hc_64_4")}
    , TOP__multiplier_32__DOT__hc_64_5{this, Verilated::catName(namep, "multiplier_32.hc_64_5")}
    , TOP__multiplier_32__DOT__hc_64_6{this, Verilated::catName(namep, "multiplier_32.hc_64_6")}
    , TOP__multiplier_32__DOT__hc_64_7{this, Verilated::catName(namep, "multiplier_32.hc_64_7")}
    , TOP__multiplier_32__DOT__hc_64_8{this, Verilated::catName(namep, "multiplier_32.hc_64_8")}
    , TOP__multiplier_32__DOT__hc_64_9{this, Verilated::catName(namep, "multiplier_32.hc_64_9")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__multiplier_32__DOT__hc_64_0 = &TOP__multiplier_32__DOT__hc_64_0;
    TOP.__PVT__multiplier_32__DOT__hc_64_1 = &TOP__multiplier_32__DOT__hc_64_1;
    TOP.__PVT__multiplier_32__DOT__hc_64_10 = &TOP__multiplier_32__DOT__hc_64_10;
    TOP.__PVT__multiplier_32__DOT__hc_64_11 = &TOP__multiplier_32__DOT__hc_64_11;
    TOP.__PVT__multiplier_32__DOT__hc_64_12 = &TOP__multiplier_32__DOT__hc_64_12;
    TOP.__PVT__multiplier_32__DOT__hc_64_13 = &TOP__multiplier_32__DOT__hc_64_13;
    TOP.__PVT__multiplier_32__DOT__hc_64_14 = &TOP__multiplier_32__DOT__hc_64_14;
    TOP.__PVT__multiplier_32__DOT__hc_64_15 = &TOP__multiplier_32__DOT__hc_64_15;
    TOP.__PVT__multiplier_32__DOT__hc_64_16 = &TOP__multiplier_32__DOT__hc_64_16;
    TOP.__PVT__multiplier_32__DOT__hc_64_17 = &TOP__multiplier_32__DOT__hc_64_17;
    TOP.__PVT__multiplier_32__DOT__hc_64_18 = &TOP__multiplier_32__DOT__hc_64_18;
    TOP.__PVT__multiplier_32__DOT__hc_64_19 = &TOP__multiplier_32__DOT__hc_64_19;
    TOP.__PVT__multiplier_32__DOT__hc_64_2 = &TOP__multiplier_32__DOT__hc_64_2;
    TOP.__PVT__multiplier_32__DOT__hc_64_20 = &TOP__multiplier_32__DOT__hc_64_20;
    TOP.__PVT__multiplier_32__DOT__hc_64_21 = &TOP__multiplier_32__DOT__hc_64_21;
    TOP.__PVT__multiplier_32__DOT__hc_64_22 = &TOP__multiplier_32__DOT__hc_64_22;
    TOP.__PVT__multiplier_32__DOT__hc_64_23 = &TOP__multiplier_32__DOT__hc_64_23;
    TOP.__PVT__multiplier_32__DOT__hc_64_24 = &TOP__multiplier_32__DOT__hc_64_24;
    TOP.__PVT__multiplier_32__DOT__hc_64_25 = &TOP__multiplier_32__DOT__hc_64_25;
    TOP.__PVT__multiplier_32__DOT__hc_64_26 = &TOP__multiplier_32__DOT__hc_64_26;
    TOP.__PVT__multiplier_32__DOT__hc_64_27 = &TOP__multiplier_32__DOT__hc_64_27;
    TOP.__PVT__multiplier_32__DOT__hc_64_28 = &TOP__multiplier_32__DOT__hc_64_28;
    TOP.__PVT__multiplier_32__DOT__hc_64_29 = &TOP__multiplier_32__DOT__hc_64_29;
    TOP.__PVT__multiplier_32__DOT__hc_64_3 = &TOP__multiplier_32__DOT__hc_64_3;
    TOP.__PVT__multiplier_32__DOT__hc_64_30 = &TOP__multiplier_32__DOT__hc_64_30;
    TOP.__PVT__multiplier_32__DOT__hc_64_4 = &TOP__multiplier_32__DOT__hc_64_4;
    TOP.__PVT__multiplier_32__DOT__hc_64_5 = &TOP__multiplier_32__DOT__hc_64_5;
    TOP.__PVT__multiplier_32__DOT__hc_64_6 = &TOP__multiplier_32__DOT__hc_64_6;
    TOP.__PVT__multiplier_32__DOT__hc_64_7 = &TOP__multiplier_32__DOT__hc_64_7;
    TOP.__PVT__multiplier_32__DOT__hc_64_8 = &TOP__multiplier_32__DOT__hc_64_8;
    TOP.__PVT__multiplier_32__DOT__hc_64_9 = &TOP__multiplier_32__DOT__hc_64_9;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__multiplier_32__DOT__hc_64_0.__Vconfigure(true);
    TOP__multiplier_32__DOT__hc_64_1.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_10.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_11.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_12.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_13.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_14.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_15.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_16.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_17.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_18.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_19.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_2.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_20.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_21.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_22.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_23.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_24.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_25.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_26.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_27.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_28.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_29.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_3.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_30.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_4.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_5.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_6.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_7.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_8.__Vconfigure(false);
    TOP__multiplier_32__DOT__hc_64_9.__Vconfigure(false);
}
