// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtemplate.h for the primary calling header

#include "verilated.h"

#include "Vtemplate__Syms.h"
#include "Vtemplate___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtemplate___024root___dump_triggers__stl(Vtemplate___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtemplate___024root___eval_triggers__stl(Vtemplate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtemplate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtemplate___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtemplate___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
