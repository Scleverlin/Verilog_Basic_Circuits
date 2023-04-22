// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vks_new_test__Syms.h"


VL_ATTR_COLD void Vks_new_test___024root__trace_init_sub__TOP__0(Vks_new_test___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+17,"a", false,-1, 63,0);
    tracep->declQuad(c+19,"b", false,-1, 63,0);
    tracep->declBit(c+21,"cin", false,-1);
    tracep->declQuad(c+22,"sum", false,-1, 63,0);
    tracep->declBit(c+24,"cout", false,-1);
    tracep->pushNamePrefix("ks_new_test ");
    tracep->declQuad(c+17,"a", false,-1, 63,0);
    tracep->declQuad(c+19,"b", false,-1, 63,0);
    tracep->declBit(c+21,"cin", false,-1);
    tracep->declQuad(c+22,"sum", false,-1, 63,0);
    tracep->declBit(c+24,"cout", false,-1);
    tracep->declBit(c+25,"c1", false,-1);
    tracep->declBit(c+26,"c2", false,-1);
    tracep->declBit(c+27,"c3", false,-1);
    tracep->declBit(c+28,"c4", false,-1);
    tracep->declBit(c+29,"c5", false,-1);
    tracep->declBit(c+30,"c6", false,-1);
    tracep->declBit(c+31,"c7", false,-1);
    tracep->pushNamePrefix("u1 ");
    tracep->declBus(c+32,"a", false,-1, 7,0);
    tracep->declBus(c+33,"b", false,-1, 7,0);
    tracep->declBus(c+34,"c", false,-1, 6,0);
    tracep->declBit(c+21,"cin", false,-1);
    tracep->declBit(c+25,"cout", false,-1);
    tracep->declBus(c+1,"g", false,-1, 7,0);
    tracep->declBus(c+2,"p", false,-1, 7,0);
    tracep->declBus(c+35,"sum", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBus(c+36,"a", false,-1, 7,0);
    tracep->declBus(c+37,"b", false,-1, 7,0);
    tracep->declBus(c+38,"c", false,-1, 6,0);
    tracep->declBit(c+25,"cin", false,-1);
    tracep->declBit(c+26,"cout", false,-1);
    tracep->declBus(c+3,"g", false,-1, 7,0);
    tracep->declBus(c+4,"p", false,-1, 7,0);
    tracep->declBus(c+39,"sum", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3 ");
    tracep->declBus(c+40,"a", false,-1, 7,0);
    tracep->declBus(c+41,"b", false,-1, 7,0);
    tracep->declBus(c+42,"c", false,-1, 6,0);
    tracep->declBit(c+26,"cin", false,-1);
    tracep->declBit(c+27,"cout", false,-1);
    tracep->declBus(c+5,"g", false,-1, 7,0);
    tracep->declBus(c+6,"p", false,-1, 7,0);
    tracep->declBus(c+43,"sum", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u4 ");
    tracep->declBus(c+44,"a", false,-1, 7,0);
    tracep->declBus(c+45,"b", false,-1, 7,0);
    tracep->declBus(c+46,"c", false,-1, 6,0);
    tracep->declBit(c+27,"cin", false,-1);
    tracep->declBit(c+28,"cout", false,-1);
    tracep->declBus(c+7,"g", false,-1, 7,0);
    tracep->declBus(c+8,"p", false,-1, 7,0);
    tracep->declBus(c+47,"sum", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u5 ");
    tracep->declBus(c+48,"a", false,-1, 7,0);
    tracep->declBus(c+49,"b", false,-1, 7,0);
    tracep->declBus(c+50,"c", false,-1, 6,0);
    tracep->declBit(c+28,"cin", false,-1);
    tracep->declBit(c+29,"cout", false,-1);
    tracep->declBus(c+9,"g", false,-1, 7,0);
    tracep->declBus(c+10,"p", false,-1, 7,0);
    tracep->declBus(c+51,"sum", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u6 ");
    tracep->declBus(c+52,"a", false,-1, 7,0);
    tracep->declBus(c+53,"b", false,-1, 7,0);
    tracep->declBus(c+54,"c", false,-1, 6,0);
    tracep->declBit(c+29,"cin", false,-1);
    tracep->declBit(c+30,"cout", false,-1);
    tracep->declBus(c+11,"g", false,-1, 7,0);
    tracep->declBus(c+12,"p", false,-1, 7,0);
    tracep->declBus(c+55,"sum", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u7 ");
    tracep->declBus(c+56,"a", false,-1, 7,0);
    tracep->declBus(c+57,"b", false,-1, 7,0);
    tracep->declBus(c+58,"c", false,-1, 6,0);
    tracep->declBit(c+30,"cin", false,-1);
    tracep->declBit(c+31,"cout", false,-1);
    tracep->declBus(c+13,"g", false,-1, 7,0);
    tracep->declBus(c+14,"p", false,-1, 7,0);
    tracep->declBus(c+59,"sum", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u8 ");
    tracep->declBus(c+60,"a", false,-1, 7,0);
    tracep->declBus(c+61,"b", false,-1, 7,0);
    tracep->declBus(c+62,"c", false,-1, 6,0);
    tracep->declBit(c+31,"cin", false,-1);
    tracep->declBit(c+24,"cout", false,-1);
    tracep->declBus(c+15,"g", false,-1, 7,0);
    tracep->declBus(c+16,"p", false,-1, 7,0);
    tracep->declBus(c+63,"sum", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vks_new_test___024root__trace_init_top(Vks_new_test___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root__trace_init_top\n"); );
    // Body
    Vks_new_test___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vks_new_test___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vks_new_test___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vks_new_test___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vks_new_test___024root__trace_register(Vks_new_test___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vks_new_test___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vks_new_test___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vks_new_test___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vks_new_test___024root__trace_full_sub_0(Vks_new_test___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vks_new_test___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root__trace_full_top_0\n"); );
    // Init
    Vks_new_test___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vks_new_test___024root*>(voidSelf);
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vks_new_test___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vks_new_test___024root__trace_full_sub_0(Vks_new_test___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ks_new_test__DOT__u1__DOT__g),8);
    bufp->fullCData(oldp+2,(vlSelf->ks_new_test__DOT__u1__DOT__p),8);
    bufp->fullCData(oldp+3,(vlSelf->ks_new_test__DOT__u2__DOT__g),8);
    bufp->fullCData(oldp+4,(vlSelf->ks_new_test__DOT__u2__DOT__p),8);
    bufp->fullCData(oldp+5,(vlSelf->ks_new_test__DOT__u3__DOT__g),8);
    bufp->fullCData(oldp+6,(vlSelf->ks_new_test__DOT__u3__DOT__p),8);
    bufp->fullCData(oldp+7,(vlSelf->ks_new_test__DOT__u4__DOT__g),8);
    bufp->fullCData(oldp+8,(vlSelf->ks_new_test__DOT__u4__DOT__p),8);
    bufp->fullCData(oldp+9,(vlSelf->ks_new_test__DOT__u5__DOT__g),8);
    bufp->fullCData(oldp+10,(vlSelf->ks_new_test__DOT__u5__DOT__p),8);
    bufp->fullCData(oldp+11,(vlSelf->ks_new_test__DOT__u6__DOT__g),8);
    bufp->fullCData(oldp+12,(vlSelf->ks_new_test__DOT__u6__DOT__p),8);
    bufp->fullCData(oldp+13,(vlSelf->ks_new_test__DOT__u7__DOT__g),8);
    bufp->fullCData(oldp+14,(vlSelf->ks_new_test__DOT__u7__DOT__p),8);
    bufp->fullCData(oldp+15,(vlSelf->ks_new_test__DOT__u8__DOT__g),8);
    bufp->fullCData(oldp+16,(vlSelf->ks_new_test__DOT__u8__DOT__p),8);
    bufp->fullQData(oldp+17,(vlSelf->a),64);
    bufp->fullQData(oldp+19,(vlSelf->b),64);
    bufp->fullBit(oldp+21,(vlSelf->cin));
    bufp->fullQData(oldp+22,(vlSelf->sum),64);
    bufp->fullBit(oldp+24,(vlSelf->cout));
    bufp->fullBit(oldp+25,(vlSelf->ks_new_test__DOT__c1));
    bufp->fullBit(oldp+26,(vlSelf->ks_new_test__DOT__c2));
    bufp->fullBit(oldp+27,(vlSelf->ks_new_test__DOT__c3));
    bufp->fullBit(oldp+28,(vlSelf->ks_new_test__DOT__c4));
    bufp->fullBit(oldp+29,(vlSelf->ks_new_test__DOT__c5));
    bufp->fullBit(oldp+30,(vlSelf->ks_new_test__DOT__c6));
    bufp->fullBit(oldp+31,(vlSelf->ks_new_test__DOT__c7));
    bufp->fullCData(oldp+32,((0xffU & (IData)(vlSelf->a))),8);
    bufp->fullCData(oldp+33,((0xffU & (IData)(vlSelf->b))),8);
    bufp->fullCData(oldp+34,(vlSelf->ks_new_test__DOT__u1__DOT__c),7);
    bufp->fullCData(oldp+35,(((0xfeU & (((IData)(vlSelf->ks_new_test__DOT__u1__DOT__c) 
                                         << 1U) ^ (0xfffffffeU 
                                                   & (IData)(vlSelf->ks_new_test__DOT__u1__DOT__p)))) 
                              | (1U & ((IData)(vlSelf->cin) 
                                       ^ (IData)(vlSelf->ks_new_test__DOT__u1__DOT__p))))),8);
    bufp->fullCData(oldp+36,((0xffU & (IData)((vlSelf->a 
                                               >> 8U)))),8);
    bufp->fullCData(oldp+37,((0xffU & (IData)((vlSelf->b 
                                               >> 8U)))),8);
    bufp->fullCData(oldp+38,(vlSelf->ks_new_test__DOT__u2__DOT__c),7);
    bufp->fullCData(oldp+39,(((0xfeU & (((IData)(vlSelf->ks_new_test__DOT__u2__DOT__c) 
                                         << 1U) ^ (0xfffffffeU 
                                                   & (IData)(vlSelf->ks_new_test__DOT__u2__DOT__p)))) 
                              | (1U & ((IData)(vlSelf->ks_new_test__DOT__c1) 
                                       ^ (IData)(vlSelf->ks_new_test__DOT__u2__DOT__p))))),8);
    bufp->fullCData(oldp+40,((0xffU & (IData)((vlSelf->a 
                                               >> 0x10U)))),8);
    bufp->fullCData(oldp+41,((0xffU & (IData)((vlSelf->b 
                                               >> 0x10U)))),8);
    bufp->fullCData(oldp+42,(vlSelf->ks_new_test__DOT__u3__DOT__c),7);
    bufp->fullCData(oldp+43,(((0xfeU & (((IData)(vlSelf->ks_new_test__DOT__u3__DOT__c) 
                                         << 1U) ^ (0xfffffffeU 
                                                   & (IData)(vlSelf->ks_new_test__DOT__u3__DOT__p)))) 
                              | (1U & ((IData)(vlSelf->ks_new_test__DOT__c2) 
                                       ^ (IData)(vlSelf->ks_new_test__DOT__u3__DOT__p))))),8);
    bufp->fullCData(oldp+44,((0xffU & (IData)((vlSelf->a 
                                               >> 0x18U)))),8);
    bufp->fullCData(oldp+45,((0xffU & (IData)((vlSelf->b 
                                               >> 0x18U)))),8);
    bufp->fullCData(oldp+46,(vlSelf->ks_new_test__DOT__u4__DOT__c),7);
    bufp->fullCData(oldp+47,(((0xfeU & (((IData)(vlSelf->ks_new_test__DOT__u4__DOT__c) 
                                         << 1U) ^ (0xfffffffeU 
                                                   & (IData)(vlSelf->ks_new_test__DOT__u4__DOT__p)))) 
                              | (1U & ((IData)(vlSelf->ks_new_test__DOT__c3) 
                                       ^ (IData)(vlSelf->ks_new_test__DOT__u4__DOT__p))))),8);
    bufp->fullCData(oldp+48,((0xffU & (IData)((vlSelf->a 
                                               >> 0x20U)))),8);
    bufp->fullCData(oldp+49,((0xffU & (IData)((vlSelf->b 
                                               >> 0x20U)))),8);
    bufp->fullCData(oldp+50,(vlSelf->ks_new_test__DOT__u5__DOT__c),7);
    bufp->fullCData(oldp+51,(((0xfeU & (((IData)(vlSelf->ks_new_test__DOT__u5__DOT__c) 
                                         << 1U) ^ (0xfffffffeU 
                                                   & (IData)(vlSelf->ks_new_test__DOT__u5__DOT__p)))) 
                              | (1U & ((IData)(vlSelf->ks_new_test__DOT__c4) 
                                       ^ (IData)(vlSelf->ks_new_test__DOT__u5__DOT__p))))),8);
    bufp->fullCData(oldp+52,((0xffU & (IData)((vlSelf->a 
                                               >> 0x28U)))),8);
    bufp->fullCData(oldp+53,((0xffU & (IData)((vlSelf->b 
                                               >> 0x28U)))),8);
    bufp->fullCData(oldp+54,(vlSelf->ks_new_test__DOT__u6__DOT__c),7);
    bufp->fullCData(oldp+55,(((0xfeU & (((IData)(vlSelf->ks_new_test__DOT__u6__DOT__c) 
                                         << 1U) ^ (0xfffffffeU 
                                                   & (IData)(vlSelf->ks_new_test__DOT__u6__DOT__p)))) 
                              | (1U & ((IData)(vlSelf->ks_new_test__DOT__c5) 
                                       ^ (IData)(vlSelf->ks_new_test__DOT__u6__DOT__p))))),8);
    bufp->fullCData(oldp+56,((0xffU & (IData)((vlSelf->a 
                                               >> 0x30U)))),8);
    bufp->fullCData(oldp+57,((0xffU & (IData)((vlSelf->b 
                                               >> 0x30U)))),8);
    bufp->fullCData(oldp+58,(vlSelf->ks_new_test__DOT__u7__DOT__c),7);
    bufp->fullCData(oldp+59,(((0xfeU & (((IData)(vlSelf->ks_new_test__DOT__u7__DOT__c) 
                                         << 1U) ^ (0xfffffffeU 
                                                   & (IData)(vlSelf->ks_new_test__DOT__u7__DOT__p)))) 
                              | (1U & ((IData)(vlSelf->ks_new_test__DOT__c6) 
                                       ^ (IData)(vlSelf->ks_new_test__DOT__u7__DOT__p))))),8);
    bufp->fullCData(oldp+60,((0xffU & (IData)((vlSelf->a 
                                               >> 0x38U)))),8);
    bufp->fullCData(oldp+61,((0xffU & (IData)((vlSelf->b 
                                               >> 0x38U)))),8);
    bufp->fullCData(oldp+62,(vlSelf->ks_new_test__DOT__u8__DOT__c),7);
    bufp->fullCData(oldp+63,(((0xfeU & (((IData)(vlSelf->ks_new_test__DOT__u8__DOT__c) 
                                         << 1U) ^ (0xfffffffeU 
                                                   & (IData)(vlSelf->ks_new_test__DOT__u8__DOT__p)))) 
                              | (1U & ((IData)(vlSelf->ks_new_test__DOT__c7) 
                                       ^ (IData)(vlSelf->ks_new_test__DOT__u8__DOT__p))))),8);
}
