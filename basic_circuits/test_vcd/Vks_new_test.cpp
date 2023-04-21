// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vks_new_test.h for the primary calling header

#include "Vks_new_test.h"
#include "Vks_new_test__Syms.h"

//==========

void Vks_new_test::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vks_new_test::eval\n"); );
    Vks_new_test__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vks_new_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("ks_new_test.v", 2, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vks_new_test::_eval_initial_loop(Vks_new_test__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("ks_new_test.v", 2, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vks_new_test::_combo__TOP__1(Vks_new_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test::_combo__TOP__1\n"); );
    Vks_new_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ks_new_test__DOT__u8__DOT__g = (0xffU & 
                                            ((IData)(
                                                     (vlTOPp->a 
                                                      >> 0x38U)) 
                                             & (IData)(
                                                       (vlTOPp->b 
                                                        >> 0x38U))));
    vlTOPp->ks_new_test__DOT__u8__DOT__p = (0xffU & 
                                            ((IData)(
                                                     (vlTOPp->a 
                                                      >> 0x38U)) 
                                             ^ (IData)(
                                                       (vlTOPp->b 
                                                        >> 0x38U))));
    vlTOPp->ks_new_test__DOT__u7__DOT__g = (0xffU & 
                                            ((IData)(
                                                     (vlTOPp->a 
                                                      >> 0x30U)) 
                                             & (IData)(
                                                       (vlTOPp->b 
                                                        >> 0x30U))));
    vlTOPp->ks_new_test__DOT__u7__DOT__p = (0xffU & 
                                            ((IData)(
                                                     (vlTOPp->a 
                                                      >> 0x30U)) 
                                             ^ (IData)(
                                                       (vlTOPp->b 
                                                        >> 0x30U))));
    vlTOPp->ks_new_test__DOT__u6__DOT__g = (0xffU & 
                                            ((IData)(
                                                     (vlTOPp->a 
                                                      >> 0x28U)) 
                                             & (IData)(
                                                       (vlTOPp->b 
                                                        >> 0x28U))));
    vlTOPp->ks_new_test__DOT__u6__DOT__p = (0xffU & 
                                            ((IData)(
                                                     (vlTOPp->a 
                                                      >> 0x28U)) 
                                             ^ (IData)(
                                                       (vlTOPp->b 
                                                        >> 0x28U))));
    vlTOPp->ks_new_test__DOT__u5__DOT__g = (0xffU & 
                                            ((IData)(
                                                     (vlTOPp->a 
                                                      >> 0x20U)) 
                                             & (IData)(
                                                       (vlTOPp->b 
                                                        >> 0x20U))));
    vlTOPp->ks_new_test__DOT__u5__DOT__p = (0xffU & 
                                            ((IData)(
                                                     (vlTOPp->a 
                                                      >> 0x20U)) 
                                             ^ (IData)(
                                                       (vlTOPp->b 
                                                        >> 0x20U))));
    vlTOPp->ks_new_test__DOT__u4__DOT__g = (0xffU & 
                                            ((IData)(
                                                     (vlTOPp->a 
                                                      >> 0x18U)) 
                                             & (IData)(
                                                       (vlTOPp->b 
                                                        >> 0x18U))));
    vlTOPp->ks_new_test__DOT__u4__DOT__p = (0xffU & 
                                            ((IData)(
                                                     (vlTOPp->a 
                                                      >> 0x18U)) 
                                             ^ (IData)(
                                                       (vlTOPp->b 
                                                        >> 0x18U))));
    vlTOPp->ks_new_test__DOT__u3__DOT__g = (0xffU & 
                                            ((IData)(
                                                     (vlTOPp->a 
                                                      >> 0x10U)) 
                                             & (IData)(
                                                       (vlTOPp->b 
                                                        >> 0x10U))));
    vlTOPp->ks_new_test__DOT__u3__DOT__p = (0xffU & 
                                            ((IData)(
                                                     (vlTOPp->a 
                                                      >> 0x10U)) 
                                             ^ (IData)(
                                                       (vlTOPp->b 
                                                        >> 0x10U))));
    vlTOPp->ks_new_test__DOT__u2__DOT__g = (0xffU & 
                                            ((IData)(
                                                     (vlTOPp->a 
                                                      >> 8U)) 
                                             & (IData)(
                                                       (vlTOPp->b 
                                                        >> 8U))));
    vlTOPp->ks_new_test__DOT__u2__DOT__p = (0xffU & 
                                            ((IData)(
                                                     (vlTOPp->a 
                                                      >> 8U)) 
                                             ^ (IData)(
                                                       (vlTOPp->b 
                                                        >> 8U))));
    vlTOPp->ks_new_test__DOT__u1__DOT__g = (0xffU & 
                                            ((IData)(vlTOPp->a) 
                                             & (IData)(vlTOPp->b)));
    vlTOPp->ks_new_test__DOT__u1__DOT__p = (0xffU & 
                                            ((IData)(vlTOPp->a) 
                                             ^ (IData)(vlTOPp->b)));
    vlTOPp->ks_new_test__DOT____Vcellout__u1____pinNumber4 
        = ((0xfeU & (IData)(vlTOPp->ks_new_test__DOT____Vcellout__u1____pinNumber4)) 
           | (1U & ((IData)(vlTOPp->cin) ^ (IData)(vlTOPp->ks_new_test__DOT__u1__DOT__p))));
    vlTOPp->ks_new_test__DOT__u1__DOT__c = ((0x7eU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u1__DOT__c)) 
                                            | (1U & 
                                               ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__g) 
                                                | ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__p) 
                                                   & (IData)(vlTOPp->cin)))));
    vlTOPp->ks_new_test__DOT__u1__DOT__c = ((0x7dU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u1__DOT__c)) 
                                            | (2U & 
                                               (((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__g) 
                                                 | ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__g) 
                                                       << 1U))) 
                                                | (((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__p) 
                                                       << 1U)) 
                                                   & ((IData)(vlTOPp->cin) 
                                                      << 1U)))));
    vlTOPp->ks_new_test__DOT__u1__DOT__c = ((0x7bU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u1__DOT__c)) 
                                            | (4U & 
                                               (((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__g) 
                                                 | ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__g) 
                                                       << 1U))) 
                                                | (((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__p) 
                                                       << 1U)) 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__c) 
                                                      << 2U)))));
    vlTOPp->ks_new_test__DOT__u1__DOT__c = ((0x77U 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u1__DOT__c)) 
                                            | (8U & 
                                               ((0xfffffff8U 
                                                 & ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__g) 
                                                    | ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__p) 
                                                       & ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__g) 
                                                          << 1U)))) 
                                                | (0xfffffff8U 
                                                   & (((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__p) 
                                                       & ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__p) 
                                                          << 1U)) 
                                                      & ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__c) 
                                                         << 2U))))));
    vlTOPp->ks_new_test__DOT__u1__DOT__c = ((0x6fU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u1__DOT__c)) 
                                            | (0x10U 
                                               & ((0xfffffff0U 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__g) 
                                                      | ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__g) 
                                                            << 1U)))) 
                                                  | (0xfffffff0U 
                                                     & (((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__p) 
                                                            << 1U)) 
                                                        & ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__c) 
                                                           << 2U))))));
    vlTOPp->ks_new_test__DOT__u1__DOT__c = ((0x5fU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u1__DOT__c)) 
                                            | (0x20U 
                                               & ((0xffffffe0U 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__g) 
                                                      | ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__g) 
                                                            << 1U)))) 
                                                  | (0xffffffe0U 
                                                     & (((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__p) 
                                                            << 1U)) 
                                                        & ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__c) 
                                                           << 2U))))));
    vlTOPp->ks_new_test__DOT__u1__DOT__c = ((0x3fU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u1__DOT__c)) 
                                            | (0x40U 
                                               & ((0xffffffc0U 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__g) 
                                                      | ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__g) 
                                                            << 1U)))) 
                                                  | (0xffffffc0U 
                                                     & (((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__p) 
                                                            << 1U)) 
                                                        & ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__c) 
                                                           << 2U))))));
    vlTOPp->ks_new_test__DOT____Vcellout__u1____pinNumber4 
        = ((1U & (IData)(vlTOPp->ks_new_test__DOT____Vcellout__u1____pinNumber4)) 
           | (0xfeU & (((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__c) 
                        << 1U) ^ (0xfffffffeU & (IData)(vlTOPp->ks_new_test__DOT__u1__DOT__p)))));
    vlTOPp->ks_new_test__DOT__c1 = (1U & ((((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__g) 
                                            >> 7U) 
                                           | (((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__p) 
                                               >> 7U) 
                                              & ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__g) 
                                                 >> 6U))) 
                                          | ((((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__p) 
                                               >> 7U) 
                                              & ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__p) 
                                                 >> 6U)) 
                                             & ((IData)(vlTOPp->ks_new_test__DOT__u1__DOT__c) 
                                                >> 5U))));
    vlTOPp->sum = ((0xffffffffffffff00ULL & vlTOPp->sum) 
                   | (IData)((IData)(vlTOPp->ks_new_test__DOT____Vcellout__u1____pinNumber4)));
    vlTOPp->ks_new_test__DOT____Vcellout__u2____pinNumber4 
        = ((0xfeU & (IData)(vlTOPp->ks_new_test__DOT____Vcellout__u2____pinNumber4)) 
           | (1U & ((IData)(vlTOPp->ks_new_test__DOT__c1) 
                    ^ (IData)(vlTOPp->ks_new_test__DOT__u2__DOT__p))));
    vlTOPp->ks_new_test__DOT__u2__DOT__c = ((0x7eU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u2__DOT__c)) 
                                            | (1U & 
                                               ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__g) 
                                                | ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__p) 
                                                   & (IData)(vlTOPp->ks_new_test__DOT__c1)))));
    vlTOPp->ks_new_test__DOT__u2__DOT__c = ((0x7dU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u2__DOT__c)) 
                                            | (2U & 
                                               (((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__g) 
                                                 | ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__g) 
                                                       << 1U))) 
                                                | (((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__p) 
                                                       << 1U)) 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__c1) 
                                                      << 1U)))));
    vlTOPp->ks_new_test__DOT__u2__DOT__c = ((0x7bU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u2__DOT__c)) 
                                            | (4U & 
                                               (((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__g) 
                                                 | ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__g) 
                                                       << 1U))) 
                                                | (((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__p) 
                                                       << 1U)) 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__c) 
                                                      << 2U)))));
    vlTOPp->ks_new_test__DOT__u2__DOT__c = ((0x77U 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u2__DOT__c)) 
                                            | (8U & 
                                               ((0xfffffff8U 
                                                 & ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__g) 
                                                    | ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__p) 
                                                       & ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__g) 
                                                          << 1U)))) 
                                                | (0xfffffff8U 
                                                   & (((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__p) 
                                                       & ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__p) 
                                                          << 1U)) 
                                                      & ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__c) 
                                                         << 2U))))));
    vlTOPp->ks_new_test__DOT__u2__DOT__c = ((0x6fU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u2__DOT__c)) 
                                            | (0x10U 
                                               & ((0xfffffff0U 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__g) 
                                                      | ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__g) 
                                                            << 1U)))) 
                                                  | (0xfffffff0U 
                                                     & (((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__p) 
                                                            << 1U)) 
                                                        & ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__c) 
                                                           << 2U))))));
    vlTOPp->ks_new_test__DOT__u2__DOT__c = ((0x5fU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u2__DOT__c)) 
                                            | (0x20U 
                                               & ((0xffffffe0U 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__g) 
                                                      | ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__g) 
                                                            << 1U)))) 
                                                  | (0xffffffe0U 
                                                     & (((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__p) 
                                                            << 1U)) 
                                                        & ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__c) 
                                                           << 2U))))));
    vlTOPp->ks_new_test__DOT__u2__DOT__c = ((0x3fU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u2__DOT__c)) 
                                            | (0x40U 
                                               & ((0xffffffc0U 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__g) 
                                                      | ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__g) 
                                                            << 1U)))) 
                                                  | (0xffffffc0U 
                                                     & (((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__p) 
                                                            << 1U)) 
                                                        & ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__c) 
                                                           << 2U))))));
    vlTOPp->ks_new_test__DOT____Vcellout__u2____pinNumber4 
        = ((1U & (IData)(vlTOPp->ks_new_test__DOT____Vcellout__u2____pinNumber4)) 
           | (0xfeU & (((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__c) 
                        << 1U) ^ (0xfffffffeU & (IData)(vlTOPp->ks_new_test__DOT__u2__DOT__p)))));
    vlTOPp->ks_new_test__DOT__c2 = (1U & ((((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__g) 
                                            >> 7U) 
                                           | (((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__p) 
                                               >> 7U) 
                                              & ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__g) 
                                                 >> 6U))) 
                                          | ((((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__p) 
                                               >> 7U) 
                                              & ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__p) 
                                                 >> 6U)) 
                                             & ((IData)(vlTOPp->ks_new_test__DOT__u2__DOT__c) 
                                                >> 5U))));
    vlTOPp->sum = ((0xffffffffffff00ffULL & vlTOPp->sum) 
                   | ((QData)((IData)(vlTOPp->ks_new_test__DOT____Vcellout__u2____pinNumber4)) 
                      << 8U));
    vlTOPp->ks_new_test__DOT____Vcellout__u3____pinNumber4 
        = ((0xfeU & (IData)(vlTOPp->ks_new_test__DOT____Vcellout__u3____pinNumber4)) 
           | (1U & ((IData)(vlTOPp->ks_new_test__DOT__c2) 
                    ^ (IData)(vlTOPp->ks_new_test__DOT__u3__DOT__p))));
    vlTOPp->ks_new_test__DOT__u3__DOT__c = ((0x7eU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u3__DOT__c)) 
                                            | (1U & 
                                               ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__g) 
                                                | ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__p) 
                                                   & (IData)(vlTOPp->ks_new_test__DOT__c2)))));
    vlTOPp->ks_new_test__DOT__u3__DOT__c = ((0x7dU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u3__DOT__c)) 
                                            | (2U & 
                                               (((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__g) 
                                                 | ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__g) 
                                                       << 1U))) 
                                                | (((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__p) 
                                                       << 1U)) 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__c2) 
                                                      << 1U)))));
    vlTOPp->ks_new_test__DOT__u3__DOT__c = ((0x7bU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u3__DOT__c)) 
                                            | (4U & 
                                               (((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__g) 
                                                 | ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__g) 
                                                       << 1U))) 
                                                | (((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__p) 
                                                       << 1U)) 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__c) 
                                                      << 2U)))));
    vlTOPp->ks_new_test__DOT__u3__DOT__c = ((0x77U 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u3__DOT__c)) 
                                            | (8U & 
                                               ((0xfffffff8U 
                                                 & ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__g) 
                                                    | ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__p) 
                                                       & ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__g) 
                                                          << 1U)))) 
                                                | (0xfffffff8U 
                                                   & (((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__p) 
                                                       & ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__p) 
                                                          << 1U)) 
                                                      & ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__c) 
                                                         << 2U))))));
    vlTOPp->ks_new_test__DOT__u3__DOT__c = ((0x6fU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u3__DOT__c)) 
                                            | (0x10U 
                                               & ((0xfffffff0U 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__g) 
                                                      | ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__g) 
                                                            << 1U)))) 
                                                  | (0xfffffff0U 
                                                     & (((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__p) 
                                                            << 1U)) 
                                                        & ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__c) 
                                                           << 2U))))));
    vlTOPp->ks_new_test__DOT__u3__DOT__c = ((0x5fU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u3__DOT__c)) 
                                            | (0x20U 
                                               & ((0xffffffe0U 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__g) 
                                                      | ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__g) 
                                                            << 1U)))) 
                                                  | (0xffffffe0U 
                                                     & (((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__p) 
                                                            << 1U)) 
                                                        & ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__c) 
                                                           << 2U))))));
    vlTOPp->ks_new_test__DOT__u3__DOT__c = ((0x3fU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u3__DOT__c)) 
                                            | (0x40U 
                                               & ((0xffffffc0U 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__g) 
                                                      | ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__g) 
                                                            << 1U)))) 
                                                  | (0xffffffc0U 
                                                     & (((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__p) 
                                                            << 1U)) 
                                                        & ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__c) 
                                                           << 2U))))));
    vlTOPp->ks_new_test__DOT____Vcellout__u3____pinNumber4 
        = ((1U & (IData)(vlTOPp->ks_new_test__DOT____Vcellout__u3____pinNumber4)) 
           | (0xfeU & (((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__c) 
                        << 1U) ^ (0xfffffffeU & (IData)(vlTOPp->ks_new_test__DOT__u3__DOT__p)))));
    vlTOPp->ks_new_test__DOT__c3 = (1U & ((((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__g) 
                                            >> 7U) 
                                           | (((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__p) 
                                               >> 7U) 
                                              & ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__g) 
                                                 >> 6U))) 
                                          | ((((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__p) 
                                               >> 7U) 
                                              & ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__p) 
                                                 >> 6U)) 
                                             & ((IData)(vlTOPp->ks_new_test__DOT__u3__DOT__c) 
                                                >> 5U))));
    vlTOPp->sum = ((0xffffffffff00ffffULL & vlTOPp->sum) 
                   | ((QData)((IData)(vlTOPp->ks_new_test__DOT____Vcellout__u3____pinNumber4)) 
                      << 0x10U));
    vlTOPp->ks_new_test__DOT____Vcellout__u4____pinNumber4 
        = ((0xfeU & (IData)(vlTOPp->ks_new_test__DOT____Vcellout__u4____pinNumber4)) 
           | (1U & ((IData)(vlTOPp->ks_new_test__DOT__c3) 
                    ^ (IData)(vlTOPp->ks_new_test__DOT__u4__DOT__p))));
    vlTOPp->ks_new_test__DOT__u4__DOT__c = ((0x7eU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u4__DOT__c)) 
                                            | (1U & 
                                               ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__g) 
                                                | ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__p) 
                                                   & (IData)(vlTOPp->ks_new_test__DOT__c3)))));
    vlTOPp->ks_new_test__DOT__u4__DOT__c = ((0x7dU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u4__DOT__c)) 
                                            | (2U & 
                                               (((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__g) 
                                                 | ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__g) 
                                                       << 1U))) 
                                                | (((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__p) 
                                                       << 1U)) 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__c3) 
                                                      << 1U)))));
    vlTOPp->ks_new_test__DOT__u4__DOT__c = ((0x7bU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u4__DOT__c)) 
                                            | (4U & 
                                               (((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__g) 
                                                 | ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__g) 
                                                       << 1U))) 
                                                | (((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__p) 
                                                       << 1U)) 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__c) 
                                                      << 2U)))));
    vlTOPp->ks_new_test__DOT__u4__DOT__c = ((0x77U 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u4__DOT__c)) 
                                            | (8U & 
                                               ((0xfffffff8U 
                                                 & ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__g) 
                                                    | ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__p) 
                                                       & ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__g) 
                                                          << 1U)))) 
                                                | (0xfffffff8U 
                                                   & (((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__p) 
                                                       & ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__p) 
                                                          << 1U)) 
                                                      & ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__c) 
                                                         << 2U))))));
    vlTOPp->ks_new_test__DOT__u4__DOT__c = ((0x6fU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u4__DOT__c)) 
                                            | (0x10U 
                                               & ((0xfffffff0U 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__g) 
                                                      | ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__g) 
                                                            << 1U)))) 
                                                  | (0xfffffff0U 
                                                     & (((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__p) 
                                                            << 1U)) 
                                                        & ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__c) 
                                                           << 2U))))));
    vlTOPp->ks_new_test__DOT__u4__DOT__c = ((0x5fU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u4__DOT__c)) 
                                            | (0x20U 
                                               & ((0xffffffe0U 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__g) 
                                                      | ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__g) 
                                                            << 1U)))) 
                                                  | (0xffffffe0U 
                                                     & (((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__p) 
                                                            << 1U)) 
                                                        & ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__c) 
                                                           << 2U))))));
    vlTOPp->ks_new_test__DOT__u4__DOT__c = ((0x3fU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u4__DOT__c)) 
                                            | (0x40U 
                                               & ((0xffffffc0U 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__g) 
                                                      | ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__g) 
                                                            << 1U)))) 
                                                  | (0xffffffc0U 
                                                     & (((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__p) 
                                                            << 1U)) 
                                                        & ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__c) 
                                                           << 2U))))));
    vlTOPp->ks_new_test__DOT____Vcellout__u4____pinNumber4 
        = ((1U & (IData)(vlTOPp->ks_new_test__DOT____Vcellout__u4____pinNumber4)) 
           | (0xfeU & (((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__c) 
                        << 1U) ^ (0xfffffffeU & (IData)(vlTOPp->ks_new_test__DOT__u4__DOT__p)))));
    vlTOPp->ks_new_test__DOT__c4 = (1U & ((((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__g) 
                                            >> 7U) 
                                           | (((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__p) 
                                               >> 7U) 
                                              & ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__g) 
                                                 >> 6U))) 
                                          | ((((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__p) 
                                               >> 7U) 
                                              & ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__p) 
                                                 >> 6U)) 
                                             & ((IData)(vlTOPp->ks_new_test__DOT__u4__DOT__c) 
                                                >> 5U))));
    vlTOPp->sum = ((0xffffffff00ffffffULL & vlTOPp->sum) 
                   | ((QData)((IData)(vlTOPp->ks_new_test__DOT____Vcellout__u4____pinNumber4)) 
                      << 0x18U));
    vlTOPp->ks_new_test__DOT____Vcellout__u5____pinNumber4 
        = ((0xfeU & (IData)(vlTOPp->ks_new_test__DOT____Vcellout__u5____pinNumber4)) 
           | (1U & ((IData)(vlTOPp->ks_new_test__DOT__c4) 
                    ^ (IData)(vlTOPp->ks_new_test__DOT__u5__DOT__p))));
    vlTOPp->ks_new_test__DOT__u5__DOT__c = ((0x7eU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u5__DOT__c)) 
                                            | (1U & 
                                               ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__g) 
                                                | ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__p) 
                                                   & (IData)(vlTOPp->ks_new_test__DOT__c4)))));
    vlTOPp->ks_new_test__DOT__u5__DOT__c = ((0x7dU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u5__DOT__c)) 
                                            | (2U & 
                                               (((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__g) 
                                                 | ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__g) 
                                                       << 1U))) 
                                                | (((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__p) 
                                                       << 1U)) 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__c4) 
                                                      << 1U)))));
    vlTOPp->ks_new_test__DOT__u5__DOT__c = ((0x7bU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u5__DOT__c)) 
                                            | (4U & 
                                               (((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__g) 
                                                 | ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__g) 
                                                       << 1U))) 
                                                | (((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__p) 
                                                       << 1U)) 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__c) 
                                                      << 2U)))));
    vlTOPp->ks_new_test__DOT__u5__DOT__c = ((0x77U 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u5__DOT__c)) 
                                            | (8U & 
                                               ((0xfffffff8U 
                                                 & ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__g) 
                                                    | ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__p) 
                                                       & ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__g) 
                                                          << 1U)))) 
                                                | (0xfffffff8U 
                                                   & (((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__p) 
                                                       & ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__p) 
                                                          << 1U)) 
                                                      & ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__c) 
                                                         << 2U))))));
    vlTOPp->ks_new_test__DOT__u5__DOT__c = ((0x6fU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u5__DOT__c)) 
                                            | (0x10U 
                                               & ((0xfffffff0U 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__g) 
                                                      | ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__g) 
                                                            << 1U)))) 
                                                  | (0xfffffff0U 
                                                     & (((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__p) 
                                                            << 1U)) 
                                                        & ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__c) 
                                                           << 2U))))));
    vlTOPp->ks_new_test__DOT__u5__DOT__c = ((0x5fU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u5__DOT__c)) 
                                            | (0x20U 
                                               & ((0xffffffe0U 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__g) 
                                                      | ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__g) 
                                                            << 1U)))) 
                                                  | (0xffffffe0U 
                                                     & (((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__p) 
                                                            << 1U)) 
                                                        & ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__c) 
                                                           << 2U))))));
    vlTOPp->ks_new_test__DOT__u5__DOT__c = ((0x3fU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u5__DOT__c)) 
                                            | (0x40U 
                                               & ((0xffffffc0U 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__g) 
                                                      | ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__g) 
                                                            << 1U)))) 
                                                  | (0xffffffc0U 
                                                     & (((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__p) 
                                                            << 1U)) 
                                                        & ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__c) 
                                                           << 2U))))));
    vlTOPp->ks_new_test__DOT____Vcellout__u5____pinNumber4 
        = ((1U & (IData)(vlTOPp->ks_new_test__DOT____Vcellout__u5____pinNumber4)) 
           | (0xfeU & (((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__c) 
                        << 1U) ^ (0xfffffffeU & (IData)(vlTOPp->ks_new_test__DOT__u5__DOT__p)))));
    vlTOPp->ks_new_test__DOT__c5 = (1U & ((((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__g) 
                                            >> 7U) 
                                           | (((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__p) 
                                               >> 7U) 
                                              & ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__g) 
                                                 >> 6U))) 
                                          | ((((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__p) 
                                               >> 7U) 
                                              & ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__p) 
                                                 >> 6U)) 
                                             & ((IData)(vlTOPp->ks_new_test__DOT__u5__DOT__c) 
                                                >> 5U))));
    vlTOPp->sum = ((0xffffff00ffffffffULL & vlTOPp->sum) 
                   | ((QData)((IData)(vlTOPp->ks_new_test__DOT____Vcellout__u5____pinNumber4)) 
                      << 0x20U));
    vlTOPp->ks_new_test__DOT____Vcellout__u6____pinNumber4 
        = ((0xfeU & (IData)(vlTOPp->ks_new_test__DOT____Vcellout__u6____pinNumber4)) 
           | (1U & ((IData)(vlTOPp->ks_new_test__DOT__c5) 
                    ^ (IData)(vlTOPp->ks_new_test__DOT__u6__DOT__p))));
    vlTOPp->ks_new_test__DOT__u6__DOT__c = ((0x7eU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u6__DOT__c)) 
                                            | (1U & 
                                               ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__g) 
                                                | ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__p) 
                                                   & (IData)(vlTOPp->ks_new_test__DOT__c5)))));
    vlTOPp->ks_new_test__DOT__u6__DOT__c = ((0x7dU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u6__DOT__c)) 
                                            | (2U & 
                                               (((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__g) 
                                                 | ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__g) 
                                                       << 1U))) 
                                                | (((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__p) 
                                                       << 1U)) 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__c5) 
                                                      << 1U)))));
    vlTOPp->ks_new_test__DOT__u6__DOT__c = ((0x7bU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u6__DOT__c)) 
                                            | (4U & 
                                               (((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__g) 
                                                 | ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__g) 
                                                       << 1U))) 
                                                | (((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__p) 
                                                       << 1U)) 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__c) 
                                                      << 2U)))));
    vlTOPp->ks_new_test__DOT__u6__DOT__c = ((0x77U 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u6__DOT__c)) 
                                            | (8U & 
                                               ((0xfffffff8U 
                                                 & ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__g) 
                                                    | ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__p) 
                                                       & ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__g) 
                                                          << 1U)))) 
                                                | (0xfffffff8U 
                                                   & (((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__p) 
                                                       & ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__p) 
                                                          << 1U)) 
                                                      & ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__c) 
                                                         << 2U))))));
    vlTOPp->ks_new_test__DOT__u6__DOT__c = ((0x6fU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u6__DOT__c)) 
                                            | (0x10U 
                                               & ((0xfffffff0U 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__g) 
                                                      | ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__g) 
                                                            << 1U)))) 
                                                  | (0xfffffff0U 
                                                     & (((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__p) 
                                                            << 1U)) 
                                                        & ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__c) 
                                                           << 2U))))));
    vlTOPp->ks_new_test__DOT__u6__DOT__c = ((0x5fU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u6__DOT__c)) 
                                            | (0x20U 
                                               & ((0xffffffe0U 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__g) 
                                                      | ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__g) 
                                                            << 1U)))) 
                                                  | (0xffffffe0U 
                                                     & (((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__p) 
                                                            << 1U)) 
                                                        & ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__c) 
                                                           << 2U))))));
    vlTOPp->ks_new_test__DOT__u6__DOT__c = ((0x3fU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u6__DOT__c)) 
                                            | (0x40U 
                                               & ((0xffffffc0U 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__g) 
                                                      | ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__g) 
                                                            << 1U)))) 
                                                  | (0xffffffc0U 
                                                     & (((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__p) 
                                                            << 1U)) 
                                                        & ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__c) 
                                                           << 2U))))));
    vlTOPp->ks_new_test__DOT____Vcellout__u6____pinNumber4 
        = ((1U & (IData)(vlTOPp->ks_new_test__DOT____Vcellout__u6____pinNumber4)) 
           | (0xfeU & (((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__c) 
                        << 1U) ^ (0xfffffffeU & (IData)(vlTOPp->ks_new_test__DOT__u6__DOT__p)))));
    vlTOPp->ks_new_test__DOT__c6 = (1U & ((((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__g) 
                                            >> 7U) 
                                           | (((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__p) 
                                               >> 7U) 
                                              & ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__g) 
                                                 >> 6U))) 
                                          | ((((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__p) 
                                               >> 7U) 
                                              & ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__p) 
                                                 >> 6U)) 
                                             & ((IData)(vlTOPp->ks_new_test__DOT__u6__DOT__c) 
                                                >> 5U))));
    vlTOPp->sum = ((0xffff00ffffffffffULL & vlTOPp->sum) 
                   | ((QData)((IData)(vlTOPp->ks_new_test__DOT____Vcellout__u6____pinNumber4)) 
                      << 0x28U));
    vlTOPp->ks_new_test__DOT____Vcellout__u7____pinNumber4 
        = ((0xfeU & (IData)(vlTOPp->ks_new_test__DOT____Vcellout__u7____pinNumber4)) 
           | (1U & ((IData)(vlTOPp->ks_new_test__DOT__c6) 
                    ^ (IData)(vlTOPp->ks_new_test__DOT__u7__DOT__p))));
    vlTOPp->ks_new_test__DOT__u7__DOT__c = ((0x7eU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u7__DOT__c)) 
                                            | (1U & 
                                               ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__g) 
                                                | ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__p) 
                                                   & (IData)(vlTOPp->ks_new_test__DOT__c6)))));
    vlTOPp->ks_new_test__DOT__u7__DOT__c = ((0x7dU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u7__DOT__c)) 
                                            | (2U & 
                                               (((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__g) 
                                                 | ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__g) 
                                                       << 1U))) 
                                                | (((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__p) 
                                                       << 1U)) 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__c6) 
                                                      << 1U)))));
    vlTOPp->ks_new_test__DOT__u7__DOT__c = ((0x7bU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u7__DOT__c)) 
                                            | (4U & 
                                               (((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__g) 
                                                 | ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__g) 
                                                       << 1U))) 
                                                | (((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__p) 
                                                       << 1U)) 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__c) 
                                                      << 2U)))));
    vlTOPp->ks_new_test__DOT__u7__DOT__c = ((0x77U 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u7__DOT__c)) 
                                            | (8U & 
                                               ((0xfffffff8U 
                                                 & ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__g) 
                                                    | ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__p) 
                                                       & ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__g) 
                                                          << 1U)))) 
                                                | (0xfffffff8U 
                                                   & (((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__p) 
                                                       & ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__p) 
                                                          << 1U)) 
                                                      & ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__c) 
                                                         << 2U))))));
    vlTOPp->ks_new_test__DOT__u7__DOT__c = ((0x6fU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u7__DOT__c)) 
                                            | (0x10U 
                                               & ((0xfffffff0U 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__g) 
                                                      | ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__g) 
                                                            << 1U)))) 
                                                  | (0xfffffff0U 
                                                     & (((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__p) 
                                                            << 1U)) 
                                                        & ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__c) 
                                                           << 2U))))));
    vlTOPp->ks_new_test__DOT__u7__DOT__c = ((0x5fU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u7__DOT__c)) 
                                            | (0x20U 
                                               & ((0xffffffe0U 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__g) 
                                                      | ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__g) 
                                                            << 1U)))) 
                                                  | (0xffffffe0U 
                                                     & (((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__p) 
                                                            << 1U)) 
                                                        & ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__c) 
                                                           << 2U))))));
    vlTOPp->ks_new_test__DOT__u7__DOT__c = ((0x3fU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u7__DOT__c)) 
                                            | (0x40U 
                                               & ((0xffffffc0U 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__g) 
                                                      | ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__g) 
                                                            << 1U)))) 
                                                  | (0xffffffc0U 
                                                     & (((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__p) 
                                                            << 1U)) 
                                                        & ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__c) 
                                                           << 2U))))));
    vlTOPp->ks_new_test__DOT____Vcellout__u7____pinNumber4 
        = ((1U & (IData)(vlTOPp->ks_new_test__DOT____Vcellout__u7____pinNumber4)) 
           | (0xfeU & (((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__c) 
                        << 1U) ^ (0xfffffffeU & (IData)(vlTOPp->ks_new_test__DOT__u7__DOT__p)))));
    vlTOPp->ks_new_test__DOT__c7 = (1U & ((((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__g) 
                                            >> 7U) 
                                           | (((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__p) 
                                               >> 7U) 
                                              & ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__g) 
                                                 >> 6U))) 
                                          | ((((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__p) 
                                               >> 7U) 
                                              & ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__p) 
                                                 >> 6U)) 
                                             & ((IData)(vlTOPp->ks_new_test__DOT__u7__DOT__c) 
                                                >> 5U))));
    vlTOPp->sum = ((0xff00ffffffffffffULL & vlTOPp->sum) 
                   | ((QData)((IData)(vlTOPp->ks_new_test__DOT____Vcellout__u7____pinNumber4)) 
                      << 0x30U));
    vlTOPp->ks_new_test__DOT____Vcellout__u8____pinNumber4 
        = ((0xfeU & (IData)(vlTOPp->ks_new_test__DOT____Vcellout__u8____pinNumber4)) 
           | (1U & ((IData)(vlTOPp->ks_new_test__DOT__c7) 
                    ^ (IData)(vlTOPp->ks_new_test__DOT__u8__DOT__p))));
    vlTOPp->ks_new_test__DOT__u8__DOT__c = ((0x7eU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u8__DOT__c)) 
                                            | (1U & 
                                               ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__g) 
                                                | ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__p) 
                                                   & (IData)(vlTOPp->ks_new_test__DOT__c7)))));
    vlTOPp->ks_new_test__DOT__u8__DOT__c = ((0x7dU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u8__DOT__c)) 
                                            | (2U & 
                                               (((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__g) 
                                                 | ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__g) 
                                                       << 1U))) 
                                                | (((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__p) 
                                                       << 1U)) 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__c7) 
                                                      << 1U)))));
    vlTOPp->ks_new_test__DOT__u8__DOT__c = ((0x7bU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u8__DOT__c)) 
                                            | (4U & 
                                               (((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__g) 
                                                 | ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__g) 
                                                       << 1U))) 
                                                | (((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__p) 
                                                    & ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__p) 
                                                       << 1U)) 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__c) 
                                                      << 2U)))));
    vlTOPp->ks_new_test__DOT__u8__DOT__c = ((0x77U 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u8__DOT__c)) 
                                            | (8U & 
                                               ((0xfffffff8U 
                                                 & ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__g) 
                                                    | ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__p) 
                                                       & ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__g) 
                                                          << 1U)))) 
                                                | (0xfffffff8U 
                                                   & (((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__p) 
                                                       & ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__p) 
                                                          << 1U)) 
                                                      & ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__c) 
                                                         << 2U))))));
    vlTOPp->ks_new_test__DOT__u8__DOT__c = ((0x6fU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u8__DOT__c)) 
                                            | (0x10U 
                                               & ((0xfffffff0U 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__g) 
                                                      | ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__g) 
                                                            << 1U)))) 
                                                  | (0xfffffff0U 
                                                     & (((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__p) 
                                                            << 1U)) 
                                                        & ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__c) 
                                                           << 2U))))));
    vlTOPp->ks_new_test__DOT__u8__DOT__c = ((0x5fU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u8__DOT__c)) 
                                            | (0x20U 
                                               & ((0xffffffe0U 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__g) 
                                                      | ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__g) 
                                                            << 1U)))) 
                                                  | (0xffffffe0U 
                                                     & (((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__p) 
                                                            << 1U)) 
                                                        & ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__c) 
                                                           << 2U))))));
    vlTOPp->ks_new_test__DOT__u8__DOT__c = ((0x3fU 
                                             & (IData)(vlTOPp->ks_new_test__DOT__u8__DOT__c)) 
                                            | (0x40U 
                                               & ((0xffffffc0U 
                                                   & ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__g) 
                                                      | ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__g) 
                                                            << 1U)))) 
                                                  | (0xffffffc0U 
                                                     & (((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__p) 
                                                         & ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__p) 
                                                            << 1U)) 
                                                        & ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__c) 
                                                           << 2U))))));
    vlTOPp->cout = (1U & ((((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__g) 
                            >> 7U) | (((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__p) 
                                       >> 7U) & ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__g) 
                                                 >> 6U))) 
                          | ((((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__p) 
                               >> 7U) & ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__p) 
                                         >> 6U)) & 
                             ((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__c) 
                              >> 5U))));
    vlTOPp->ks_new_test__DOT____Vcellout__u8____pinNumber4 
        = ((1U & (IData)(vlTOPp->ks_new_test__DOT____Vcellout__u8____pinNumber4)) 
           | (0xfeU & (((IData)(vlTOPp->ks_new_test__DOT__u8__DOT__c) 
                        << 1U) ^ (0xfffffffeU & (IData)(vlTOPp->ks_new_test__DOT__u8__DOT__p)))));
    vlTOPp->sum = ((0xffffffffffffffULL & vlTOPp->sum) 
                   | ((QData)((IData)(vlTOPp->ks_new_test__DOT____Vcellout__u8____pinNumber4)) 
                      << 0x38U));
}

void Vks_new_test::_eval(Vks_new_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test::_eval\n"); );
    Vks_new_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
}

VL_INLINE_OPT QData Vks_new_test::_change_request(Vks_new_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test::_change_request\n"); );
    Vks_new_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vks_new_test::_change_request_1(Vks_new_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test::_change_request_1\n"); );
    Vks_new_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->ks_new_test__DOT__u1__DOT__c ^ vlTOPp->__Vchglast__TOP__ks_new_test__DOT__u1__DOT__c)
         | (vlTOPp->ks_new_test__DOT__u2__DOT__c ^ vlTOPp->__Vchglast__TOP__ks_new_test__DOT__u2__DOT__c)
         | (vlTOPp->ks_new_test__DOT__u3__DOT__c ^ vlTOPp->__Vchglast__TOP__ks_new_test__DOT__u3__DOT__c)
         | (vlTOPp->ks_new_test__DOT__u4__DOT__c ^ vlTOPp->__Vchglast__TOP__ks_new_test__DOT__u4__DOT__c)
         | (vlTOPp->ks_new_test__DOT__u5__DOT__c ^ vlTOPp->__Vchglast__TOP__ks_new_test__DOT__u5__DOT__c)
         | (vlTOPp->ks_new_test__DOT__u6__DOT__c ^ vlTOPp->__Vchglast__TOP__ks_new_test__DOT__u6__DOT__c)
         | (vlTOPp->ks_new_test__DOT__u7__DOT__c ^ vlTOPp->__Vchglast__TOP__ks_new_test__DOT__u7__DOT__c)
         | (vlTOPp->ks_new_test__DOT__u8__DOT__c ^ vlTOPp->__Vchglast__TOP__ks_new_test__DOT__u8__DOT__c));
    VL_DEBUG_IF( if(__req && ((vlTOPp->ks_new_test__DOT__u1__DOT__c ^ vlTOPp->__Vchglast__TOP__ks_new_test__DOT__u1__DOT__c))) VL_DBG_MSGF("        CHANGE: ks_new_test.v:28: ks_new_test.u1.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->ks_new_test__DOT__u2__DOT__c ^ vlTOPp->__Vchglast__TOP__ks_new_test__DOT__u2__DOT__c))) VL_DBG_MSGF("        CHANGE: ks_new_test.v:28: ks_new_test.u2.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->ks_new_test__DOT__u3__DOT__c ^ vlTOPp->__Vchglast__TOP__ks_new_test__DOT__u3__DOT__c))) VL_DBG_MSGF("        CHANGE: ks_new_test.v:28: ks_new_test.u3.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->ks_new_test__DOT__u4__DOT__c ^ vlTOPp->__Vchglast__TOP__ks_new_test__DOT__u4__DOT__c))) VL_DBG_MSGF("        CHANGE: ks_new_test.v:28: ks_new_test.u4.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->ks_new_test__DOT__u5__DOT__c ^ vlTOPp->__Vchglast__TOP__ks_new_test__DOT__u5__DOT__c))) VL_DBG_MSGF("        CHANGE: ks_new_test.v:28: ks_new_test.u5.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->ks_new_test__DOT__u6__DOT__c ^ vlTOPp->__Vchglast__TOP__ks_new_test__DOT__u6__DOT__c))) VL_DBG_MSGF("        CHANGE: ks_new_test.v:28: ks_new_test.u6.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->ks_new_test__DOT__u7__DOT__c ^ vlTOPp->__Vchglast__TOP__ks_new_test__DOT__u7__DOT__c))) VL_DBG_MSGF("        CHANGE: ks_new_test.v:28: ks_new_test.u7.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->ks_new_test__DOT__u8__DOT__c ^ vlTOPp->__Vchglast__TOP__ks_new_test__DOT__u8__DOT__c))) VL_DBG_MSGF("        CHANGE: ks_new_test.v:28: ks_new_test.u8.c\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__ks_new_test__DOT__u1__DOT__c 
        = vlTOPp->ks_new_test__DOT__u1__DOT__c;
    vlTOPp->__Vchglast__TOP__ks_new_test__DOT__u2__DOT__c 
        = vlTOPp->ks_new_test__DOT__u2__DOT__c;
    vlTOPp->__Vchglast__TOP__ks_new_test__DOT__u3__DOT__c 
        = vlTOPp->ks_new_test__DOT__u3__DOT__c;
    vlTOPp->__Vchglast__TOP__ks_new_test__DOT__u4__DOT__c 
        = vlTOPp->ks_new_test__DOT__u4__DOT__c;
    vlTOPp->__Vchglast__TOP__ks_new_test__DOT__u5__DOT__c 
        = vlTOPp->ks_new_test__DOT__u5__DOT__c;
    vlTOPp->__Vchglast__TOP__ks_new_test__DOT__u6__DOT__c 
        = vlTOPp->ks_new_test__DOT__u6__DOT__c;
    vlTOPp->__Vchglast__TOP__ks_new_test__DOT__u7__DOT__c 
        = vlTOPp->ks_new_test__DOT__u7__DOT__c;
    vlTOPp->__Vchglast__TOP__ks_new_test__DOT__u8__DOT__c 
        = vlTOPp->ks_new_test__DOT__u8__DOT__c;
    return __req;
}

#ifdef VL_DEBUG
void Vks_new_test::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((cin & 0xfeU))) {
        Verilated::overWidthError("cin");}
}
#endif  // VL_DEBUG
