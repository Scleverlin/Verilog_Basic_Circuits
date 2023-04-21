// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VKS_NEW_TEST_H_
#define _VKS_NEW_TEST_H_  // guard

#include "verilated.h"

//==========

class Vks_new_test__Syms;
class Vks_new_test_VerilatedVcd;


//----------

VL_MODULE(Vks_new_test) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(cin,0,0);
    VL_OUT8(cout,0,0);
    VL_IN64(a,63,0);
    VL_IN64(b,63,0);
    VL_OUT64(sum,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
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
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*7:0*/ ks_new_test__DOT____Vcellout__u1____pinNumber4;
    CData/*7:0*/ ks_new_test__DOT____Vcellout__u2____pinNumber4;
    CData/*7:0*/ ks_new_test__DOT____Vcellout__u3____pinNumber4;
    CData/*7:0*/ ks_new_test__DOT____Vcellout__u4____pinNumber4;
    CData/*7:0*/ ks_new_test__DOT____Vcellout__u5____pinNumber4;
    CData/*7:0*/ ks_new_test__DOT____Vcellout__u6____pinNumber4;
    CData/*7:0*/ ks_new_test__DOT____Vcellout__u7____pinNumber4;
    CData/*7:0*/ ks_new_test__DOT____Vcellout__u8____pinNumber4;
    CData/*6:0*/ __Vchglast__TOP__ks_new_test__DOT__u1__DOT__c;
    CData/*6:0*/ __Vchglast__TOP__ks_new_test__DOT__u2__DOT__c;
    CData/*6:0*/ __Vchglast__TOP__ks_new_test__DOT__u3__DOT__c;
    CData/*6:0*/ __Vchglast__TOP__ks_new_test__DOT__u4__DOT__c;
    CData/*6:0*/ __Vchglast__TOP__ks_new_test__DOT__u5__DOT__c;
    CData/*6:0*/ __Vchglast__TOP__ks_new_test__DOT__u6__DOT__c;
    CData/*6:0*/ __Vchglast__TOP__ks_new_test__DOT__u7__DOT__c;
    CData/*6:0*/ __Vchglast__TOP__ks_new_test__DOT__u8__DOT__c;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vks_new_test__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vks_new_test);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vks_new_test(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vks_new_test();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vks_new_test__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vks_new_test__Syms* symsp, bool first);
  private:
    static QData _change_request(Vks_new_test__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vks_new_test__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vks_new_test__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vks_new_test__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vks_new_test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vks_new_test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
