// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vks_new_test__Syms.h"


//======================

void Vks_new_test::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vks_new_test::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vks_new_test__Syms* __restrict vlSymsp = static_cast<Vks_new_test__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vks_new_test::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vks_new_test::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vks_new_test__Syms* __restrict vlSymsp = static_cast<Vks_new_test__Syms*>(userp);
    Vks_new_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vks_new_test::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vks_new_test__Syms* __restrict vlSymsp = static_cast<Vks_new_test__Syms*>(userp);
    Vks_new_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declQuad(c+40,"a", false,-1, 63,0);
        tracep->declQuad(c+42,"b", false,-1, 63,0);
        tracep->declBit(c+44,"cin", false,-1);
        tracep->declQuad(c+45,"sum", false,-1, 63,0);
        tracep->declBit(c+47,"cout", false,-1);
        tracep->declQuad(c+40,"ks_new_test a", false,-1, 63,0);
        tracep->declQuad(c+42,"ks_new_test b", false,-1, 63,0);
        tracep->declBit(c+44,"ks_new_test cin", false,-1);
        tracep->declQuad(c+45,"ks_new_test sum", false,-1, 63,0);
        tracep->declBit(c+47,"ks_new_test cout", false,-1);
        tracep->declBit(c+1,"ks_new_test c1", false,-1);
        tracep->declBit(c+2,"ks_new_test c2", false,-1);
        tracep->declBit(c+3,"ks_new_test c3", false,-1);
        tracep->declBit(c+4,"ks_new_test c4", false,-1);
        tracep->declBit(c+5,"ks_new_test c5", false,-1);
        tracep->declBit(c+6,"ks_new_test c6", false,-1);
        tracep->declBit(c+7,"ks_new_test c7", false,-1);
        tracep->declBus(c+48,"ks_new_test u1 a", false,-1, 7,0);
        tracep->declBus(c+49,"ks_new_test u1 b", false,-1, 7,0);
        tracep->declBus(c+8,"ks_new_test u1 c", false,-1, 6,0);
        tracep->declBit(c+44,"ks_new_test u1 cin", false,-1);
        tracep->declBit(c+1,"ks_new_test u1 cout", false,-1);
        tracep->declBus(c+9,"ks_new_test u1 g", false,-1, 7,0);
        tracep->declBus(c+10,"ks_new_test u1 p", false,-1, 7,0);
        tracep->declBus(c+11,"ks_new_test u1 sum", false,-1, 7,0);
        tracep->declBus(c+50,"ks_new_test u2 a", false,-1, 7,0);
        tracep->declBus(c+51,"ks_new_test u2 b", false,-1, 7,0);
        tracep->declBus(c+12,"ks_new_test u2 c", false,-1, 6,0);
        tracep->declBit(c+1,"ks_new_test u2 cin", false,-1);
        tracep->declBit(c+2,"ks_new_test u2 cout", false,-1);
        tracep->declBus(c+13,"ks_new_test u2 g", false,-1, 7,0);
        tracep->declBus(c+14,"ks_new_test u2 p", false,-1, 7,0);
        tracep->declBus(c+15,"ks_new_test u2 sum", false,-1, 7,0);
        tracep->declBus(c+52,"ks_new_test u3 a", false,-1, 7,0);
        tracep->declBus(c+53,"ks_new_test u3 b", false,-1, 7,0);
        tracep->declBus(c+16,"ks_new_test u3 c", false,-1, 6,0);
        tracep->declBit(c+2,"ks_new_test u3 cin", false,-1);
        tracep->declBit(c+3,"ks_new_test u3 cout", false,-1);
        tracep->declBus(c+17,"ks_new_test u3 g", false,-1, 7,0);
        tracep->declBus(c+18,"ks_new_test u3 p", false,-1, 7,0);
        tracep->declBus(c+19,"ks_new_test u3 sum", false,-1, 7,0);
        tracep->declBus(c+54,"ks_new_test u4 a", false,-1, 7,0);
        tracep->declBus(c+55,"ks_new_test u4 b", false,-1, 7,0);
        tracep->declBus(c+20,"ks_new_test u4 c", false,-1, 6,0);
        tracep->declBit(c+3,"ks_new_test u4 cin", false,-1);
        tracep->declBit(c+4,"ks_new_test u4 cout", false,-1);
        tracep->declBus(c+21,"ks_new_test u4 g", false,-1, 7,0);
        tracep->declBus(c+22,"ks_new_test u4 p", false,-1, 7,0);
        tracep->declBus(c+23,"ks_new_test u4 sum", false,-1, 7,0);
        tracep->declBus(c+56,"ks_new_test u5 a", false,-1, 7,0);
        tracep->declBus(c+57,"ks_new_test u5 b", false,-1, 7,0);
        tracep->declBus(c+24,"ks_new_test u5 c", false,-1, 6,0);
        tracep->declBit(c+4,"ks_new_test u5 cin", false,-1);
        tracep->declBit(c+5,"ks_new_test u5 cout", false,-1);
        tracep->declBus(c+25,"ks_new_test u5 g", false,-1, 7,0);
        tracep->declBus(c+26,"ks_new_test u5 p", false,-1, 7,0);
        tracep->declBus(c+27,"ks_new_test u5 sum", false,-1, 7,0);
        tracep->declBus(c+58,"ks_new_test u6 a", false,-1, 7,0);
        tracep->declBus(c+59,"ks_new_test u6 b", false,-1, 7,0);
        tracep->declBus(c+28,"ks_new_test u6 c", false,-1, 6,0);
        tracep->declBit(c+5,"ks_new_test u6 cin", false,-1);
        tracep->declBit(c+6,"ks_new_test u6 cout", false,-1);
        tracep->declBus(c+29,"ks_new_test u6 g", false,-1, 7,0);
        tracep->declBus(c+30,"ks_new_test u6 p", false,-1, 7,0);
        tracep->declBus(c+31,"ks_new_test u6 sum", false,-1, 7,0);
        tracep->declBus(c+60,"ks_new_test u7 a", false,-1, 7,0);
        tracep->declBus(c+61,"ks_new_test u7 b", false,-1, 7,0);
        tracep->declBus(c+32,"ks_new_test u7 c", false,-1, 6,0);
        tracep->declBit(c+6,"ks_new_test u7 cin", false,-1);
        tracep->declBit(c+7,"ks_new_test u7 cout", false,-1);
        tracep->declBus(c+33,"ks_new_test u7 g", false,-1, 7,0);
        tracep->declBus(c+34,"ks_new_test u7 p", false,-1, 7,0);
        tracep->declBus(c+35,"ks_new_test u7 sum", false,-1, 7,0);
        tracep->declBus(c+62,"ks_new_test u8 a", false,-1, 7,0);
        tracep->declBus(c+63,"ks_new_test u8 b", false,-1, 7,0);
        tracep->declBus(c+36,"ks_new_test u8 c", false,-1, 6,0);
        tracep->declBit(c+7,"ks_new_test u8 cin", false,-1);
        tracep->declBit(c+47,"ks_new_test u8 cout", false,-1);
        tracep->declBus(c+37,"ks_new_test u8 g", false,-1, 7,0);
        tracep->declBus(c+38,"ks_new_test u8 p", false,-1, 7,0);
        tracep->declBus(c+39,"ks_new_test u8 sum", false,-1, 7,0);
    }
}

void Vks_new_test::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vks_new_test::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vks_new_test__Syms* __restrict vlSymsp = static_cast<Vks_new_test__Syms*>(userp);
    Vks_new_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vks_new_test::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vks_new_test__Syms* __restrict vlSymsp = static_cast<Vks_new_test__Syms*>(userp);
    Vks_new_test* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->ks_new_test__DOT__c1));
        tracep->fullBit(oldp+2,(vlTOPp->ks_new_test__DOT__c2));
        tracep->fullBit(oldp+3,(vlTOPp->ks_new_test__DOT__c3));
        tracep->fullBit(oldp+4,(vlTOPp->ks_new_test__DOT__c4));
        tracep->fullBit(oldp+5,(vlTOPp->ks_new_test__DOT__c5));
        tracep->fullBit(oldp+6,(vlTOPp->ks_new_test__DOT__c6));
        tracep->fullBit(oldp+7,(vlTOPp->ks_new_test__DOT__c7));
        tracep->fullCData(oldp+8,(vlTOPp->ks_new_test__DOT__u1__DOT__c),7);
        tracep->fullCData(oldp+9,(vlTOPp->ks_new_test__DOT__u1__DOT__g),8);
        tracep->fullCData(oldp+10,(vlTOPp->ks_new_test__DOT__u1__DOT__p),8);
        tracep->fullCData(oldp+11,(vlTOPp->ks_new_test__DOT____Vcellout__u1____pinNumber4),8);
        tracep->fullCData(oldp+12,(vlTOPp->ks_new_test__DOT__u2__DOT__c),7);
        tracep->fullCData(oldp+13,(vlTOPp->ks_new_test__DOT__u2__DOT__g),8);
        tracep->fullCData(oldp+14,(vlTOPp->ks_new_test__DOT__u2__DOT__p),8);
        tracep->fullCData(oldp+15,(vlTOPp->ks_new_test__DOT____Vcellout__u2____pinNumber4),8);
        tracep->fullCData(oldp+16,(vlTOPp->ks_new_test__DOT__u3__DOT__c),7);
        tracep->fullCData(oldp+17,(vlTOPp->ks_new_test__DOT__u3__DOT__g),8);
        tracep->fullCData(oldp+18,(vlTOPp->ks_new_test__DOT__u3__DOT__p),8);
        tracep->fullCData(oldp+19,(vlTOPp->ks_new_test__DOT____Vcellout__u3____pinNumber4),8);
        tracep->fullCData(oldp+20,(vlTOPp->ks_new_test__DOT__u4__DOT__c),7);
        tracep->fullCData(oldp+21,(vlTOPp->ks_new_test__DOT__u4__DOT__g),8);
        tracep->fullCData(oldp+22,(vlTOPp->ks_new_test__DOT__u4__DOT__p),8);
        tracep->fullCData(oldp+23,(vlTOPp->ks_new_test__DOT____Vcellout__u4____pinNumber4),8);
        tracep->fullCData(oldp+24,(vlTOPp->ks_new_test__DOT__u5__DOT__c),7);
        tracep->fullCData(oldp+25,(vlTOPp->ks_new_test__DOT__u5__DOT__g),8);
        tracep->fullCData(oldp+26,(vlTOPp->ks_new_test__DOT__u5__DOT__p),8);
        tracep->fullCData(oldp+27,(vlTOPp->ks_new_test__DOT____Vcellout__u5____pinNumber4),8);
        tracep->fullCData(oldp+28,(vlTOPp->ks_new_test__DOT__u6__DOT__c),7);
        tracep->fullCData(oldp+29,(vlTOPp->ks_new_test__DOT__u6__DOT__g),8);
        tracep->fullCData(oldp+30,(vlTOPp->ks_new_test__DOT__u6__DOT__p),8);
        tracep->fullCData(oldp+31,(vlTOPp->ks_new_test__DOT____Vcellout__u6____pinNumber4),8);
        tracep->fullCData(oldp+32,(vlTOPp->ks_new_test__DOT__u7__DOT__c),7);
        tracep->fullCData(oldp+33,(vlTOPp->ks_new_test__DOT__u7__DOT__g),8);
        tracep->fullCData(oldp+34,(vlTOPp->ks_new_test__DOT__u7__DOT__p),8);
        tracep->fullCData(oldp+35,(vlTOPp->ks_new_test__DOT____Vcellout__u7____pinNumber4),8);
        tracep->fullCData(oldp+36,(vlTOPp->ks_new_test__DOT__u8__DOT__c),7);
        tracep->fullCData(oldp+37,(vlTOPp->ks_new_test__DOT__u8__DOT__g),8);
        tracep->fullCData(oldp+38,(vlTOPp->ks_new_test__DOT__u8__DOT__p),8);
        tracep->fullCData(oldp+39,(vlTOPp->ks_new_test__DOT____Vcellout__u8____pinNumber4),8);
        tracep->fullQData(oldp+40,(vlTOPp->a),64);
        tracep->fullQData(oldp+42,(vlTOPp->b),64);
        tracep->fullBit(oldp+44,(vlTOPp->cin));
        tracep->fullQData(oldp+45,(vlTOPp->sum),64);
        tracep->fullBit(oldp+47,(vlTOPp->cout));
        tracep->fullCData(oldp+48,((0xffU & (IData)(vlTOPp->a))),8);
        tracep->fullCData(oldp+49,((0xffU & (IData)(vlTOPp->b))),8);
        tracep->fullCData(oldp+50,((0xffU & (IData)(
                                                    (vlTOPp->a 
                                                     >> 8U)))),8);
        tracep->fullCData(oldp+51,((0xffU & (IData)(
                                                    (vlTOPp->b 
                                                     >> 8U)))),8);
        tracep->fullCData(oldp+52,((0xffU & (IData)(
                                                    (vlTOPp->a 
                                                     >> 0x10U)))),8);
        tracep->fullCData(oldp+53,((0xffU & (IData)(
                                                    (vlTOPp->b 
                                                     >> 0x10U)))),8);
        tracep->fullCData(oldp+54,((0xffU & (IData)(
                                                    (vlTOPp->a 
                                                     >> 0x18U)))),8);
        tracep->fullCData(oldp+55,((0xffU & (IData)(
                                                    (vlTOPp->b 
                                                     >> 0x18U)))),8);
        tracep->fullCData(oldp+56,((0xffU & (IData)(
                                                    (vlTOPp->a 
                                                     >> 0x20U)))),8);
        tracep->fullCData(oldp+57,((0xffU & (IData)(
                                                    (vlTOPp->b 
                                                     >> 0x20U)))),8);
        tracep->fullCData(oldp+58,((0xffU & (IData)(
                                                    (vlTOPp->a 
                                                     >> 0x28U)))),8);
        tracep->fullCData(oldp+59,((0xffU & (IData)(
                                                    (vlTOPp->b 
                                                     >> 0x28U)))),8);
        tracep->fullCData(oldp+60,((0xffU & (IData)(
                                                    (vlTOPp->a 
                                                     >> 0x30U)))),8);
        tracep->fullCData(oldp+61,((0xffU & (IData)(
                                                    (vlTOPp->b 
                                                     >> 0x30U)))),8);
        tracep->fullCData(oldp+62,((0xffU & (IData)(
                                                    (vlTOPp->a 
                                                     >> 0x38U)))),8);
        tracep->fullCData(oldp+63,((0xffU & (IData)(
                                                    (vlTOPp->b 
                                                     >> 0x38U)))),8);
    }
}
