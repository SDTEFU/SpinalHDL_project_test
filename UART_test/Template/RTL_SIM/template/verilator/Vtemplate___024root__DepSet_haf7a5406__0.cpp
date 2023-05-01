// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtemplate.h for the primary calling header

#include "verilated.h"

#include "Vtemplate__Syms.h"
#include "Vtemplate___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtemplate___024root___dump_triggers__act(Vtemplate___024root* vlSelf);
#endif  // VL_DEBUG

void Vtemplate___024root___eval_triggers__act(Vtemplate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->io_clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__io_clk))) 
                                      | ((~ (IData)(vlSelf->io_rst_n)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__io_rst_n)));
    vlSelf->__Vtrigrprev__TOP__io_clk = vlSelf->io_clk;
    vlSelf->__Vtrigrprev__TOP__io_rst_n = vlSelf->io_rst_n;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtemplate___024root___dump_triggers__act(vlSelf);
    }
#endif
}
