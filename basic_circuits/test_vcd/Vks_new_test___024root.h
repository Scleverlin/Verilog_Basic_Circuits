// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vks_new_test.h for the primary calling header

#ifndef VERILATED_VKS_NEW_TEST___024ROOT_H_
#define VERILATED_VKS_NEW_TEST___024ROOT_H_  // guard

#include "verilated.h"

class Vks_new_test__Syms;

class Vks_new_test___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(cin,0,0);
    VL_OUT8(cout,0,0);
    CData/*0:0*/ ks_new_test__DOT__c1;
    CData/*0:0*/ ks_new_test__DOT__c2;
    CData/*0:0*/ ks_new_test__DOT__c3;
    CData/*0:0*/ ks_new_test__DOT__c4;
    CData/*0:0*/ ks_new_test__DOT__c5;
    CData/*0:0*/ ks_new_test__DOT__c6;
    CData/*0:0*/ ks_new_test__DOT__c7;
    CData/*6:0*/ ks_new_test__DOT__u1__DOT__c;
    CData/*7:0*/ ks_new_test__DOT__u1__DOT__g;
    CData/*7:0*/ ks_new_test__DOT__u1__DOT__p;
    CData/*6:0*/ ks_new_test__DOT__u2__DOT__c;
    CData/*7:0*/ ks_new_test__DOT__u2__DOT__g;
    CData/*7:0*/ ks_new_test__DOT__u2__DOT__p;
    CData/*6:0*/ ks_new_test__DOT__u3__DOT__c;
    CData/*7:0*/ ks_new_test__DOT__u3__DOT__g;
    CData/*7:0*/ ks_new_test__DOT__u3__DOT__p;
    CData/*6:0*/ ks_new_test__DOT__u4__DOT__c;
    CData/*7:0*/ ks_new_test__DOT__u4__DOT__g;
    CData/*7:0*/ ks_new_test__DOT__u4__DOT__p;
    CData/*6:0*/ ks_new_test__DOT__u5__DOT__c;
    CData/*7:0*/ ks_new_test__DOT__u5__DOT__g;
    CData/*7:0*/ ks_new_test__DOT__u5__DOT__p;
    CData/*6:0*/ ks_new_test__DOT__u6__DOT__c;
    CData/*7:0*/ ks_new_test__DOT__u6__DOT__g;
    CData/*7:0*/ ks_new_test__DOT__u6__DOT__p;
    CData/*6:0*/ ks_new_test__DOT__u7__DOT__c;
    CData/*7:0*/ ks_new_test__DOT__u7__DOT__g;
    CData/*7:0*/ ks_new_test__DOT__u7__DOT__p;
    CData/*6:0*/ ks_new_test__DOT__u8__DOT__c;
    CData/*7:0*/ ks_new_test__DOT__u8__DOT__g;
    CData/*7:0*/ ks_new_test__DOT__u8__DOT__p;
    CData/*6:0*/ __Vtrigrprev__TOP__ks_new_test__DOT__u8__DOT__c;
    CData/*6:0*/ __Vtrigrprev__TOP__ks_new_test__DOT__u7__DOT__c;
    CData/*6:0*/ __Vtrigrprev__TOP__ks_new_test__DOT__u6__DOT__c;
    CData/*6:0*/ __Vtrigrprev__TOP__ks_new_test__DOT__u5__DOT__c;
    CData/*6:0*/ __Vtrigrprev__TOP__ks_new_test__DOT__u4__DOT__c;
    CData/*6:0*/ __Vtrigrprev__TOP__ks_new_test__DOT__u3__DOT__c;
    CData/*6:0*/ __Vtrigrprev__TOP__ks_new_test__DOT__u2__DOT__c;
    CData/*6:0*/ __Vtrigrprev__TOP__ks_new_test__DOT__u1__DOT__c;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(a,63,0);
    VL_IN64(b,63,0);
    VL_OUT64(sum,63,0);
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<9> __VstlTriggered;
    VlTriggerVec<9> __VicoTriggered;
    VlTriggerVec<8> __VactTriggered;
    VlTriggerVec<8> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vks_new_test__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vks_new_test___024root(Vks_new_test__Syms* symsp, const char* v__name);
    ~Vks_new_test___024root();
    VL_UNCOPYABLE(Vks_new_test___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
