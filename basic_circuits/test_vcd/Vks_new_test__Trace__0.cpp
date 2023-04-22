// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vks_new_test__Syms.h"


void Vks_new_test___024root__trace_chg_sub_0(Vks_new_test___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vks_new_test___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root__trace_chg_top_0\n"); );
    // Init
    Vks_new_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vks_new_test___024root*>(voidSelf);
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vks_new_test___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vks_new_test___024root__trace_chg_sub_0(Vks_new_test___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->ks_new_test__DOT__u1__DOT__g),8);
        bufp->chgCData(oldp+1,(vlSelf->ks_new_test__DOT__u1__DOT__p),8);
        bufp->chgCData(oldp+2,(vlSelf->ks_new_test__DOT__u2__DOT__g),8);
        bufp->chgCData(oldp+3,(vlSelf->ks_new_test__DOT__u2__DOT__p),8);
        bufp->chgCData(oldp+4,(vlSelf->ks_new_test__DOT__u3__DOT__g),8);
        bufp->chgCData(oldp+5,(vlSelf->ks_new_test__DOT__u3__DOT__p),8);
        bufp->chgCData(oldp+6,(vlSelf->ks_new_test__DOT__u4__DOT__g),8);
        bufp->chgCData(oldp+7,(vlSelf->ks_new_test__DOT__u4__DOT__p),8);
        bufp->chgCData(oldp+8,(vlSelf->ks_new_test__DOT__u5__DOT__g),8);
        bufp->chgCData(oldp+9,(vlSelf->ks_new_test__DOT__u5__DOT__p),8);
        bufp->chgCData(oldp+10,(vlSelf->ks_new_test__DOT__u6__DOT__g),8);
        bufp->chgCData(oldp+11,(vlSelf->ks_new_test__DOT__u6__DOT__p),8);
        bufp->chgCData(oldp+12,(vlSelf->ks_new_test__DOT__u7__DOT__g),8);
        bufp->chgCData(oldp+13,(vlSelf->ks_new_test__DOT__u7__DOT__p),8);
        bufp->chgCData(oldp+14,(vlSelf->ks_new_test__DOT__u8__DOT__g),8);
        bufp->chgCData(oldp+15,(vlSelf->ks_new_test__DOT__u8__DOT__p),8);
    }
    bufp->chgQData(oldp+16,(vlSelf->a),64);
    bufp->chgQData(oldp+18,(vlSelf->b),64);
    bufp->chgBit(oldp+20,(vlSelf->cin));
    bufp->chgQData(oldp+21,(vlSelf->sum),64);
    bufp->chgBit(oldp+23,(vlSelf->cout));
    bufp->chgBit(oldp+24,(vlSelf->ks_new_test__DOT__c1));
    bufp->chgBit(oldp+25,(vlSelf->ks_new_test__DOT__c2));
    bufp->chgBit(oldp+26,(vlSelf->ks_new_test__DOT__c3));
    bufp->chgBit(oldp+27,(vlSelf->ks_new_test__DOT__c4));
    bufp->chgBit(oldp+28,(vlSelf->ks_new_test__DOT__c5));
    bufp->chgBit(oldp+29,(vlSelf->ks_new_test__DOT__c6));
    bufp->chgBit(oldp+30,(vlSelf->ks_new_test__DOT__c7));
    bufp->chgCData(oldp+31,((0xffU & (IData)(vlSelf->a))),8);
    bufp->chgCData(oldp+32,((0xffU & (IData)(vlSelf->b))),8);
    bufp->chgCData(oldp+33,(vlSelf->ks_new_test__DOT__u1__DOT__c),7);
    bufp->chgCData(oldp+34,(((0xfeU & (((IData)(vlSelf->ks_new_test__DOT__u1__DOT__c) 
                                        << 1U) ^ (0xfffffffeU 
                                                  & (IData)(vlSelf->ks_new_test__DOT__u1__DOT__p)))) 
                             | (1U & ((IData)(vlSelf->cin) 
                                      ^ (IData)(vlSelf->ks_new_test__DOT__u1__DOT__p))))),8);
    bufp->chgCData(oldp+35,((0xffU & (IData)((vlSelf->a 
                                              >> 8U)))),8);
    bufp->chgCData(oldp+36,((0xffU & (IData)((vlSelf->b 
                                              >> 8U)))),8);
    bufp->chgCData(oldp+37,(vlSelf->ks_new_test__DOT__u2__DOT__c),7);
    bufp->chgCData(oldp+38,(((0xfeU & (((IData)(vlSelf->ks_new_test__DOT__u2__DOT__c) 
                                        << 1U) ^ (0xfffffffeU 
                                                  & (IData)(vlSelf->ks_new_test__DOT__u2__DOT__p)))) 
                             | (1U & ((IData)(vlSelf->ks_new_test__DOT__c1) 
                                      ^ (IData)(vlSelf->ks_new_test__DOT__u2__DOT__p))))),8);
    bufp->chgCData(oldp+39,((0xffU & (IData)((vlSelf->a 
                                              >> 0x10U)))),8);
    bufp->chgCData(oldp+40,((0xffU & (IData)((vlSelf->b 
                                              >> 0x10U)))),8);
    bufp->chgCData(oldp+41,(vlSelf->ks_new_test__DOT__u3__DOT__c),7);
    bufp->chgCData(oldp+42,(((0xfeU & (((IData)(vlSelf->ks_new_test__DOT__u3__DOT__c) 
                                        << 1U) ^ (0xfffffffeU 
                                                  & (IData)(vlSelf->ks_new_test__DOT__u3__DOT__p)))) 
                             | (1U & ((IData)(vlSelf->ks_new_test__DOT__c2) 
                                      ^ (IData)(vlSelf->ks_new_test__DOT__u3__DOT__p))))),8);
    bufp->chgCData(oldp+43,((0xffU & (IData)((vlSelf->a 
                                              >> 0x18U)))),8);
    bufp->chgCData(oldp+44,((0xffU & (IData)((vlSelf->b 
                                              >> 0x18U)))),8);
    bufp->chgCData(oldp+45,(vlSelf->ks_new_test__DOT__u4__DOT__c),7);
    bufp->chgCData(oldp+46,(((0xfeU & (((IData)(vlSelf->ks_new_test__DOT__u4__DOT__c) 
                                        << 1U) ^ (0xfffffffeU 
                                                  & (IData)(vlSelf->ks_new_test__DOT__u4__DOT__p)))) 
                             | (1U & ((IData)(vlSelf->ks_new_test__DOT__c3) 
                                      ^ (IData)(vlSelf->ks_new_test__DOT__u4__DOT__p))))),8);
    bufp->chgCData(oldp+47,((0xffU & (IData)((vlSelf->a 
                                              >> 0x20U)))),8);
    bufp->chgCData(oldp+48,((0xffU & (IData)((vlSelf->b 
                                              >> 0x20U)))),8);
    bufp->chgCData(oldp+49,(vlSelf->ks_new_test__DOT__u5__DOT__c),7);
    bufp->chgCData(oldp+50,(((0xfeU & (((IData)(vlSelf->ks_new_test__DOT__u5__DOT__c) 
                                        << 1U) ^ (0xfffffffeU 
                                                  & (IData)(vlSelf->ks_new_test__DOT__u5__DOT__p)))) 
                             | (1U & ((IData)(vlSelf->ks_new_test__DOT__c4) 
                                      ^ (IData)(vlSelf->ks_new_test__DOT__u5__DOT__p))))),8);
    bufp->chgCData(oldp+51,((0xffU & (IData)((vlSelf->a 
                                              >> 0x28U)))),8);
    bufp->chgCData(oldp+52,((0xffU & (IData)((vlSelf->b 
                                              >> 0x28U)))),8);
    bufp->chgCData(oldp+53,(vlSelf->ks_new_test__DOT__u6__DOT__c),7);
    bufp->chgCData(oldp+54,(((0xfeU & (((IData)(vlSelf->ks_new_test__DOT__u6__DOT__c) 
                                        << 1U) ^ (0xfffffffeU 
                                                  & (IData)(vlSelf->ks_new_test__DOT__u6__DOT__p)))) 
                             | (1U & ((IData)(vlSelf->ks_new_test__DOT__c5) 
                                      ^ (IData)(vlSelf->ks_new_test__DOT__u6__DOT__p))))),8);
    bufp->chgCData(oldp+55,((0xffU & (IData)((vlSelf->a 
                                              >> 0x30U)))),8);
    bufp->chgCData(oldp+56,((0xffU & (IData)((vlSelf->b 
                                              >> 0x30U)))),8);
    bufp->chgCData(oldp+57,(vlSelf->ks_new_test__DOT__u7__DOT__c),7);
    bufp->chgCData(oldp+58,(((0xfeU & (((IData)(vlSelf->ks_new_test__DOT__u7__DOT__c) 
                                        << 1U) ^ (0xfffffffeU 
                                                  & (IData)(vlSelf->ks_new_test__DOT__u7__DOT__p)))) 
                             | (1U & ((IData)(vlSelf->ks_new_test__DOT__c6) 
                                      ^ (IData)(vlSelf->ks_new_test__DOT__u7__DOT__p))))),8);
    bufp->chgCData(oldp+59,((0xffU & (IData)((vlSelf->a 
                                              >> 0x38U)))),8);
    bufp->chgCData(oldp+60,((0xffU & (IData)((vlSelf->b 
                                              >> 0x38U)))),8);
    bufp->chgCData(oldp+61,(vlSelf->ks_new_test__DOT__u8__DOT__c),7);
    bufp->chgCData(oldp+62,(((0xfeU & (((IData)(vlSelf->ks_new_test__DOT__u8__DOT__c) 
                                        << 1U) ^ (0xfffffffeU 
                                                  & (IData)(vlSelf->ks_new_test__DOT__u8__DOT__p)))) 
                             | (1U & ((IData)(vlSelf->ks_new_test__DOT__c7) 
                                      ^ (IData)(vlSelf->ks_new_test__DOT__u8__DOT__p))))),8);
}

void Vks_new_test___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root__trace_cleanup\n"); );
    // Init
    Vks_new_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vks_new_test___024root*>(voidSelf);
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
