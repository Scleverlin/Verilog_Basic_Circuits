// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vks_new_test__Syms.h"


void Vks_new_test::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vks_new_test__Syms* __restrict vlSymsp = static_cast<Vks_new_test__Syms*>(userp);
    Vks_new_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vks_new_test::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vks_new_test__Syms* __restrict vlSymsp = static_cast<Vks_new_test__Syms*>(userp);
    Vks_new_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlTOPp->ks_new_test__DOT__c1));
            tracep->chgBit(oldp+1,(vlTOPp->ks_new_test__DOT__c2));
            tracep->chgBit(oldp+2,(vlTOPp->ks_new_test__DOT__c3));
            tracep->chgBit(oldp+3,(vlTOPp->ks_new_test__DOT__c4));
            tracep->chgBit(oldp+4,(vlTOPp->ks_new_test__DOT__c5));
            tracep->chgBit(oldp+5,(vlTOPp->ks_new_test__DOT__c6));
            tracep->chgBit(oldp+6,(vlTOPp->ks_new_test__DOT__c7));
            tracep->chgCData(oldp+7,(vlTOPp->ks_new_test__DOT__u1__DOT__c),7);
            tracep->chgCData(oldp+8,(vlTOPp->ks_new_test__DOT__u1__DOT__g),8);
            tracep->chgCData(oldp+9,(vlTOPp->ks_new_test__DOT__u1__DOT__p),8);
            tracep->chgCData(oldp+10,(vlTOPp->ks_new_test__DOT____Vcellout__u1____pinNumber4),8);
            tracep->chgCData(oldp+11,(vlTOPp->ks_new_test__DOT__u2__DOT__c),7);
            tracep->chgCData(oldp+12,(vlTOPp->ks_new_test__DOT__u2__DOT__g),8);
            tracep->chgCData(oldp+13,(vlTOPp->ks_new_test__DOT__u2__DOT__p),8);
            tracep->chgCData(oldp+14,(vlTOPp->ks_new_test__DOT____Vcellout__u2____pinNumber4),8);
            tracep->chgCData(oldp+15,(vlTOPp->ks_new_test__DOT__u3__DOT__c),7);
            tracep->chgCData(oldp+16,(vlTOPp->ks_new_test__DOT__u3__DOT__g),8);
            tracep->chgCData(oldp+17,(vlTOPp->ks_new_test__DOT__u3__DOT__p),8);
            tracep->chgCData(oldp+18,(vlTOPp->ks_new_test__DOT____Vcellout__u3____pinNumber4),8);
            tracep->chgCData(oldp+19,(vlTOPp->ks_new_test__DOT__u4__DOT__c),7);
            tracep->chgCData(oldp+20,(vlTOPp->ks_new_test__DOT__u4__DOT__g),8);
            tracep->chgCData(oldp+21,(vlTOPp->ks_new_test__DOT__u4__DOT__p),8);
            tracep->chgCData(oldp+22,(vlTOPp->ks_new_test__DOT____Vcellout__u4____pinNumber4),8);
            tracep->chgCData(oldp+23,(vlTOPp->ks_new_test__DOT__u5__DOT__c),7);
            tracep->chgCData(oldp+24,(vlTOPp->ks_new_test__DOT__u5__DOT__g),8);
            tracep->chgCData(oldp+25,(vlTOPp->ks_new_test__DOT__u5__DOT__p),8);
            tracep->chgCData(oldp+26,(vlTOPp->ks_new_test__DOT____Vcellout__u5____pinNumber4),8);
            tracep->chgCData(oldp+27,(vlTOPp->ks_new_test__DOT__u6__DOT__c),7);
            tracep->chgCData(oldp+28,(vlTOPp->ks_new_test__DOT__u6__DOT__g),8);
            tracep->chgCData(oldp+29,(vlTOPp->ks_new_test__DOT__u6__DOT__p),8);
            tracep->chgCData(oldp+30,(vlTOPp->ks_new_test__DOT____Vcellout__u6____pinNumber4),8);
            tracep->chgCData(oldp+31,(vlTOPp->ks_new_test__DOT__u7__DOT__c),7);
            tracep->chgCData(oldp+32,(vlTOPp->ks_new_test__DOT__u7__DOT__g),8);
            tracep->chgCData(oldp+33,(vlTOPp->ks_new_test__DOT__u7__DOT__p),8);
            tracep->chgCData(oldp+34,(vlTOPp->ks_new_test__DOT____Vcellout__u7____pinNumber4),8);
            tracep->chgCData(oldp+35,(vlTOPp->ks_new_test__DOT__u8__DOT__c),7);
            tracep->chgCData(oldp+36,(vlTOPp->ks_new_test__DOT__u8__DOT__g),8);
            tracep->chgCData(oldp+37,(vlTOPp->ks_new_test__DOT__u8__DOT__p),8);
            tracep->chgCData(oldp+38,(vlTOPp->ks_new_test__DOT____Vcellout__u8____pinNumber4),8);
        }
        tracep->chgQData(oldp+39,(vlTOPp->a),64);
        tracep->chgQData(oldp+41,(vlTOPp->b),64);
        tracep->chgBit(oldp+43,(vlTOPp->cin));
        tracep->chgQData(oldp+44,(vlTOPp->sum),64);
        tracep->chgBit(oldp+46,(vlTOPp->cout));
        tracep->chgCData(oldp+47,((0xffU & (IData)(vlTOPp->a))),8);
        tracep->chgCData(oldp+48,((0xffU & (IData)(vlTOPp->b))),8);
        tracep->chgCData(oldp+49,((0xffU & (IData)(
                                                   (vlTOPp->a 
                                                    >> 8U)))),8);
        tracep->chgCData(oldp+50,((0xffU & (IData)(
                                                   (vlTOPp->b 
                                                    >> 8U)))),8);
        tracep->chgCData(oldp+51,((0xffU & (IData)(
                                                   (vlTOPp->a 
                                                    >> 0x10U)))),8);
        tracep->chgCData(oldp+52,((0xffU & (IData)(
                                                   (vlTOPp->b 
                                                    >> 0x10U)))),8);
        tracep->chgCData(oldp+53,((0xffU & (IData)(
                                                   (vlTOPp->a 
                                                    >> 0x18U)))),8);
        tracep->chgCData(oldp+54,((0xffU & (IData)(
                                                   (vlTOPp->b 
                                                    >> 0x18U)))),8);
        tracep->chgCData(oldp+55,((0xffU & (IData)(
                                                   (vlTOPp->a 
                                                    >> 0x20U)))),8);
        tracep->chgCData(oldp+56,((0xffU & (IData)(
                                                   (vlTOPp->b 
                                                    >> 0x20U)))),8);
        tracep->chgCData(oldp+57,((0xffU & (IData)(
                                                   (vlTOPp->a 
                                                    >> 0x28U)))),8);
        tracep->chgCData(oldp+58,((0xffU & (IData)(
                                                   (vlTOPp->b 
                                                    >> 0x28U)))),8);
        tracep->chgCData(oldp+59,((0xffU & (IData)(
                                                   (vlTOPp->a 
                                                    >> 0x30U)))),8);
        tracep->chgCData(oldp+60,((0xffU & (IData)(
                                                   (vlTOPp->b 
                                                    >> 0x30U)))),8);
        tracep->chgCData(oldp+61,((0xffU & (IData)(
                                                   (vlTOPp->a 
                                                    >> 0x38U)))),8);
        tracep->chgCData(oldp+62,((0xffU & (IData)(
                                                   (vlTOPp->b 
                                                    >> 0x38U)))),8);
    }
}

void Vks_new_test::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vks_new_test__Syms* __restrict vlSymsp = static_cast<Vks_new_test__Syms*>(userp);
    Vks_new_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
