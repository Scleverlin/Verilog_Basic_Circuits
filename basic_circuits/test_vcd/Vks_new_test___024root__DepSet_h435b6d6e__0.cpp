// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vks_new_test.h for the primary calling header

#include "verilated.h"

#include "Vks_new_test__Syms.h"
#include "Vks_new_test___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vks_new_test___024root___dump_triggers__ico(Vks_new_test___024root* vlSelf);
#endif  // VL_DEBUG

void Vks_new_test___024root___eval_triggers__ico(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
    vlSelf->__VicoTriggered.at(1U) = ((IData)(vlSelf->ks_new_test__DOT__u8__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u8__DOT__c));
    vlSelf->__VicoTriggered.at(2U) = ((IData)(vlSelf->ks_new_test__DOT__u7__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u7__DOT__c));
    vlSelf->__VicoTriggered.at(3U) = ((IData)(vlSelf->ks_new_test__DOT__u6__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u6__DOT__c));
    vlSelf->__VicoTriggered.at(4U) = ((IData)(vlSelf->ks_new_test__DOT__u5__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u5__DOT__c));
    vlSelf->__VicoTriggered.at(5U) = ((IData)(vlSelf->ks_new_test__DOT__u4__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u4__DOT__c));
    vlSelf->__VicoTriggered.at(6U) = ((IData)(vlSelf->ks_new_test__DOT__u3__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u3__DOT__c));
    vlSelf->__VicoTriggered.at(7U) = ((IData)(vlSelf->ks_new_test__DOT__u2__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u2__DOT__c));
    vlSelf->__VicoTriggered.at(8U) = ((IData)(vlSelf->ks_new_test__DOT__u1__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u1__DOT__c));
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u8__DOT__c 
        = vlSelf->ks_new_test__DOT__u8__DOT__c;
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u7__DOT__c 
        = vlSelf->ks_new_test__DOT__u7__DOT__c;
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u6__DOT__c 
        = vlSelf->ks_new_test__DOT__u6__DOT__c;
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u5__DOT__c 
        = vlSelf->ks_new_test__DOT__u5__DOT__c;
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u4__DOT__c 
        = vlSelf->ks_new_test__DOT__u4__DOT__c;
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u3__DOT__c 
        = vlSelf->ks_new_test__DOT__u3__DOT__c;
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u2__DOT__c 
        = vlSelf->ks_new_test__DOT__u2__DOT__c;
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u1__DOT__c 
        = vlSelf->ks_new_test__DOT__u1__DOT__c;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.at(1U) = 1U;
        vlSelf->__VicoTriggered.at(2U) = 1U;
        vlSelf->__VicoTriggered.at(3U) = 1U;
        vlSelf->__VicoTriggered.at(4U) = 1U;
        vlSelf->__VicoTriggered.at(5U) = 1U;
        vlSelf->__VicoTriggered.at(6U) = 1U;
        vlSelf->__VicoTriggered.at(7U) = 1U;
        vlSelf->__VicoTriggered.at(8U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vks_new_test___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vks_new_test___024root___dump_triggers__act(Vks_new_test___024root* vlSelf);
#endif  // VL_DEBUG

void Vks_new_test___024root___eval_triggers__act(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->ks_new_test__DOT__u8__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u8__DOT__c));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->ks_new_test__DOT__u7__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u7__DOT__c));
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSelf->ks_new_test__DOT__u6__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u6__DOT__c));
    vlSelf->__VactTriggered.at(3U) = ((IData)(vlSelf->ks_new_test__DOT__u5__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u5__DOT__c));
    vlSelf->__VactTriggered.at(4U) = ((IData)(vlSelf->ks_new_test__DOT__u4__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u4__DOT__c));
    vlSelf->__VactTriggered.at(5U) = ((IData)(vlSelf->ks_new_test__DOT__u3__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u3__DOT__c));
    vlSelf->__VactTriggered.at(6U) = ((IData)(vlSelf->ks_new_test__DOT__u2__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u2__DOT__c));
    vlSelf->__VactTriggered.at(7U) = ((IData)(vlSelf->ks_new_test__DOT__u1__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u1__DOT__c));
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u8__DOT__c 
        = vlSelf->ks_new_test__DOT__u8__DOT__c;
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u7__DOT__c 
        = vlSelf->ks_new_test__DOT__u7__DOT__c;
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u6__DOT__c 
        = vlSelf->ks_new_test__DOT__u6__DOT__c;
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u5__DOT__c 
        = vlSelf->ks_new_test__DOT__u5__DOT__c;
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u4__DOT__c 
        = vlSelf->ks_new_test__DOT__u4__DOT__c;
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u3__DOT__c 
        = vlSelf->ks_new_test__DOT__u3__DOT__c;
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u2__DOT__c 
        = vlSelf->ks_new_test__DOT__u2__DOT__c;
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u1__DOT__c 
        = vlSelf->ks_new_test__DOT__u1__DOT__c;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
        vlSelf->__VactTriggered.at(2U) = 1U;
        vlSelf->__VactTriggered.at(3U) = 1U;
        vlSelf->__VactTriggered.at(4U) = 1U;
        vlSelf->__VactTriggered.at(5U) = 1U;
        vlSelf->__VactTriggered.at(6U) = 1U;
        vlSelf->__VactTriggered.at(7U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vks_new_test___024root___dump_triggers__act(vlSelf);
    }
#endif
}
