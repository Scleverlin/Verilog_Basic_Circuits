// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vks_new_test.h for the primary calling header

#include "Vks_new_test.h"
#include "Vks_new_test__Syms.h"

//==========

VL_CTOR_IMP(Vks_new_test) {
    Vks_new_test__Syms* __restrict vlSymsp = __VlSymsp = new Vks_new_test__Syms(this, name());
    Vks_new_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vks_new_test::__Vconfigure(Vks_new_test__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vks_new_test::~Vks_new_test() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vks_new_test::_eval_initial(Vks_new_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test::_eval_initial\n"); );
    Vks_new_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vks_new_test::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test::final\n"); );
    // Variables
    Vks_new_test__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vks_new_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vks_new_test::_eval_settle(Vks_new_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test::_eval_settle\n"); );
    Vks_new_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vks_new_test::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_Q(64);
    b = VL_RAND_RESET_Q(64);
    cin = VL_RAND_RESET_I(1);
    sum = VL_RAND_RESET_Q(64);
    cout = VL_RAND_RESET_I(1);
    ks_new_test__DOT__c1 = VL_RAND_RESET_I(1);
    ks_new_test__DOT__c2 = VL_RAND_RESET_I(1);
    ks_new_test__DOT__c3 = VL_RAND_RESET_I(1);
    ks_new_test__DOT__c4 = VL_RAND_RESET_I(1);
    ks_new_test__DOT__c5 = VL_RAND_RESET_I(1);
    ks_new_test__DOT__c6 = VL_RAND_RESET_I(1);
    ks_new_test__DOT__c7 = VL_RAND_RESET_I(1);
    ks_new_test__DOT____Vcellout__u1____pinNumber4 = VL_RAND_RESET_I(8);
    ks_new_test__DOT____Vcellout__u2____pinNumber4 = VL_RAND_RESET_I(8);
    ks_new_test__DOT____Vcellout__u3____pinNumber4 = VL_RAND_RESET_I(8);
    ks_new_test__DOT____Vcellout__u4____pinNumber4 = VL_RAND_RESET_I(8);
    ks_new_test__DOT____Vcellout__u5____pinNumber4 = VL_RAND_RESET_I(8);
    ks_new_test__DOT____Vcellout__u6____pinNumber4 = VL_RAND_RESET_I(8);
    ks_new_test__DOT____Vcellout__u7____pinNumber4 = VL_RAND_RESET_I(8);
    ks_new_test__DOT____Vcellout__u8____pinNumber4 = VL_RAND_RESET_I(8);
    ks_new_test__DOT__u1__DOT__c = VL_RAND_RESET_I(7);
    ks_new_test__DOT__u1__DOT__g = VL_RAND_RESET_I(8);
    ks_new_test__DOT__u1__DOT__p = VL_RAND_RESET_I(8);
    ks_new_test__DOT__u2__DOT__c = VL_RAND_RESET_I(7);
    ks_new_test__DOT__u2__DOT__g = VL_RAND_RESET_I(8);
    ks_new_test__DOT__u2__DOT__p = VL_RAND_RESET_I(8);
    ks_new_test__DOT__u3__DOT__c = VL_RAND_RESET_I(7);
    ks_new_test__DOT__u3__DOT__g = VL_RAND_RESET_I(8);
    ks_new_test__DOT__u3__DOT__p = VL_RAND_RESET_I(8);
    ks_new_test__DOT__u4__DOT__c = VL_RAND_RESET_I(7);
    ks_new_test__DOT__u4__DOT__g = VL_RAND_RESET_I(8);
    ks_new_test__DOT__u4__DOT__p = VL_RAND_RESET_I(8);
    ks_new_test__DOT__u5__DOT__c = VL_RAND_RESET_I(7);
    ks_new_test__DOT__u5__DOT__g = VL_RAND_RESET_I(8);
    ks_new_test__DOT__u5__DOT__p = VL_RAND_RESET_I(8);
    ks_new_test__DOT__u6__DOT__c = VL_RAND_RESET_I(7);
    ks_new_test__DOT__u6__DOT__g = VL_RAND_RESET_I(8);
    ks_new_test__DOT__u6__DOT__p = VL_RAND_RESET_I(8);
    ks_new_test__DOT__u7__DOT__c = VL_RAND_RESET_I(7);
    ks_new_test__DOT__u7__DOT__g = VL_RAND_RESET_I(8);
    ks_new_test__DOT__u7__DOT__p = VL_RAND_RESET_I(8);
    ks_new_test__DOT__u8__DOT__c = VL_RAND_RESET_I(7);
    ks_new_test__DOT__u8__DOT__g = VL_RAND_RESET_I(8);
    ks_new_test__DOT__u8__DOT__p = VL_RAND_RESET_I(8);
    __Vchglast__TOP__ks_new_test__DOT__u1__DOT__c = VL_RAND_RESET_I(7);
    __Vchglast__TOP__ks_new_test__DOT__u2__DOT__c = VL_RAND_RESET_I(7);
    __Vchglast__TOP__ks_new_test__DOT__u3__DOT__c = VL_RAND_RESET_I(7);
    __Vchglast__TOP__ks_new_test__DOT__u4__DOT__c = VL_RAND_RESET_I(7);
    __Vchglast__TOP__ks_new_test__DOT__u5__DOT__c = VL_RAND_RESET_I(7);
    __Vchglast__TOP__ks_new_test__DOT__u6__DOT__c = VL_RAND_RESET_I(7);
    __Vchglast__TOP__ks_new_test__DOT__u7__DOT__c = VL_RAND_RESET_I(7);
    __Vchglast__TOP__ks_new_test__DOT__u8__DOT__c = VL_RAND_RESET_I(7);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
