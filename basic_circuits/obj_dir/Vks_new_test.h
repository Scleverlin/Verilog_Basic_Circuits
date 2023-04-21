// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vks_new_test_H_
#define _Vks_new_test_H_

#include "verilated.h"

class Vks_new_test__Syms;

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
    VL_SIG8(ks_new_test__DOT__c1,0,0);
    VL_SIG8(ks_new_test__DOT__c2,0,0);
    VL_SIG8(ks_new_test__DOT__c3,0,0);
    VL_SIG8(ks_new_test__DOT__c4,0,0);
    VL_SIG8(ks_new_test__DOT__c5,0,0);
    VL_SIG8(ks_new_test__DOT__c6,0,0);
    VL_SIG8(ks_new_test__DOT__c7,0,0);
    VL_SIG8(ks_new_test__DOT__u1__DOT__c,6,0);
    VL_SIG8(ks_new_test__DOT__u1__DOT__g,7,0);
    VL_SIG8(ks_new_test__DOT__u1__DOT__p,7,0);
    VL_SIG8(ks_new_test__DOT__u2__DOT__c,6,0);
    VL_SIG8(ks_new_test__DOT__u2__DOT__g,7,0);
    VL_SIG8(ks_new_test__DOT__u2__DOT__p,7,0);
    VL_SIG8(ks_new_test__DOT__u3__DOT__c,6,0);
    VL_SIG8(ks_new_test__DOT__u3__DOT__g,7,0);
    VL_SIG8(ks_new_test__DOT__u3__DOT__p,7,0);
    VL_SIG8(ks_new_test__DOT__u4__DOT__c,6,0);
    VL_SIG8(ks_new_test__DOT__u4__DOT__g,7,0);
    VL_SIG8(ks_new_test__DOT__u4__DOT__p,7,0);
    VL_SIG8(ks_new_test__DOT__u5__DOT__c,6,0);
    VL_SIG8(ks_new_test__DOT__u5__DOT__g,7,0);
    VL_SIG8(ks_new_test__DOT__u5__DOT__p,7,0);
    VL_SIG8(ks_new_test__DOT__u6__DOT__c,6,0);
    VL_SIG8(ks_new_test__DOT__u6__DOT__g,7,0);
    VL_SIG8(ks_new_test__DOT__u6__DOT__p,7,0);
    VL_SIG8(ks_new_test__DOT__u7__DOT__c,6,0);
    VL_SIG8(ks_new_test__DOT__u7__DOT__g,7,0);
    VL_SIG8(ks_new_test__DOT__u7__DOT__p,7,0);
    VL_SIG8(ks_new_test__DOT__u8__DOT__c,6,0);
    VL_SIG8(ks_new_test__DOT__u8__DOT__g,7,0);
    VL_SIG8(ks_new_test__DOT__u8__DOT__p,7,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(ks_new_test__DOT____Vcellout__u1____pinNumber4,7,0);
    VL_SIG8(ks_new_test__DOT____Vcellout__u2____pinNumber4,7,0);
    VL_SIG8(ks_new_test__DOT____Vcellout__u3____pinNumber4,7,0);
    VL_SIG8(ks_new_test__DOT____Vcellout__u4____pinNumber4,7,0);
    VL_SIG8(ks_new_test__DOT____Vcellout__u5____pinNumber4,7,0);
    VL_SIG8(ks_new_test__DOT____Vcellout__u6____pinNumber4,7,0);
    VL_SIG8(ks_new_test__DOT____Vcellout__u7____pinNumber4,7,0);
    VL_SIG8(ks_new_test__DOT____Vcellout__u8____pinNumber4,7,0);
    VL_SIG8(__Vchglast__TOP__ks_new_test__DOT__u1__DOT__c,6,0);
    VL_SIG8(__Vchglast__TOP__ks_new_test__DOT__u2__DOT__c,6,0);
    VL_SIG8(__Vchglast__TOP__ks_new_test__DOT__u3__DOT__c,6,0);
    VL_SIG8(__Vchglast__TOP__ks_new_test__DOT__u4__DOT__c,6,0);
    VL_SIG8(__Vchglast__TOP__ks_new_test__DOT__u5__DOT__c,6,0);
    VL_SIG8(__Vchglast__TOP__ks_new_test__DOT__u6__DOT__c,6,0);
    VL_SIG8(__Vchglast__TOP__ks_new_test__DOT__u7__DOT__c,6,0);
    VL_SIG8(__Vchglast__TOP__ks_new_test__DOT__u8__DOT__c,6,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vks_new_test__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vks_new_test);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vks_new_test(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vks_new_test();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vks_new_test__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vks_new_test__Syms* symsp, bool first);
  private:
    static QData _change_request(Vks_new_test__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vks_new_test__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(Vks_new_test__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vks_new_test__Syms* __restrict vlSymsp);
    static void _eval_settle(Vks_new_test__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
