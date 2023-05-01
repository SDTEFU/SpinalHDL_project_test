// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtemplate.h for the primary calling header

#ifndef VERILATED_VTEMPLATE___024ROOT_H_
#define VERILATED_VTEMPLATE___024ROOT_H_  // guard

#include "verilated.h"

class Vtemplate__Syms;

class Vtemplate___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(io_clk,0,0);
    VL_IN8(io_rst_n,0,0);
    VL_IN8(io_start,0,0);
    VL_IN8(io_data,7,0);
    VL_OUT8(io_rs232_tx,0,0);
    VL_OUT8(io_done,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*7:0*/ template__DOT__clkarea_data_bat;
    CData/*0:0*/ template__DOT__clkarea_state;
    CData/*0:0*/ template__DOT__when_template_l46;
    CData/*0:0*/ template__DOT__clkarea_bit_flag;
    CData/*3:0*/ template__DOT__clkarea_bit_cnt;
    CData/*0:0*/ template__DOT__when_template_l70;
    CData/*0:0*/ template__DOT__clkarea_rx232_tx;
    CData/*0:0*/ template__DOT__clkarea_done;
    CData/*0:0*/ __Vtrigrprev__TOP__io_clk;
    CData/*0:0*/ __Vtrigrprev__TOP__io_rst_n;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ template__DOT__clkarea_baud_cnt;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtemplate__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtemplate___024root(Vtemplate__Syms* symsp, const char* v__name);
    ~Vtemplate___024root();
    VL_UNCOPYABLE(Vtemplate___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
