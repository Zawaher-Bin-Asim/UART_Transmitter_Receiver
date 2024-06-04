// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_tb.h for the primary calling header

#include "Vuart_tb__pch.h"
#include "Vuart_tb___024root.h"

VlCoroutine Vuart_tb___024root___eval_initial__TOP__Vtiming__0(Vuart_tb___024root* vlSelf);

void Vuart_tb___024root___eval_initial(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vuart_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__uart_tb__DOT__reset__0 
        = vlSelf->uart_tb__DOT__reset;
    vlSelf->__Vtrigprevexpr___TOP__uart_tb__DOT__tx_baud_clk__0 
        = vlSelf->uart_tb__DOT__tx_baud_clk;
    vlSelf->__Vtrigprevexpr___TOP__uart_tb__DOT__rx_baud_clk__0 
        = vlSelf->uart_tb__DOT__rx_baud_clk;
    vlSelf->__Vtrigprevexpr___TOP__uart_tb__DOT__data_received__0 
        = vlSelf->uart_tb__DOT__data_received;
}

VL_INLINE_OPT VlCoroutine Vuart_tb___024root___eval_initial__TOP__Vtiming__0(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ uart_tb__DOT____Vrepeat3;
    uart_tb__DOT____Vrepeat3 = 0;
    IData/*31:0*/ __Vtask_uart_tb__DOT__wait_for_start_bit__5__cycles;
    __Vtask_uart_tb__DOT__wait_for_start_bit__5__cycles = 0;
    // Body
    vlSelf->uart_tb__DOT__load = 0U;
    vlSelf->uart_tb__DOT__tx_start = 0U;
    vlSelf->uart_tb__DOT__clk_rate = 0U;
    vlSelf->uart_tb__DOT__tx_baud_divisor = 0U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       64);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->uart_tb__DOT__clk_rate = 0xf42400U;
    vlSelf->uart_tb__DOT__tx_baud_divisor = 8U;
    vlSelf->uart_tb__DOT__reset = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       113);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->uart_tb__DOT__reset = 0U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       115);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->uart_tb__DOT__reset = 1U;
    vlSelf->uart_tb__DOT__in = (0xffU & VL_RANDOM_I());
    vlSelf->uart_tb__DOT__load = 0U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->uart_tb__DOT__load = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->uart_tb__DOT__load = 0U;
    vlSelf->uart_tb__DOT__tx_start = 0U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       139);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->uart_tb__DOT__tx_start = 1U;
    vlSelf->uart_tb__DOT__captured_in = vlSelf->uart_tb__DOT__in;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__wait_for_start_bit__5__cycles = 0x23U;
    {
        vlSelf->uart_tb__DOT__wait_for_start_bit__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelf->uart_tb__DOT__wait_for_start_bit__Vstatic__i, __Vtask_uart_tb__DOT__wait_for_start_bit__5__cycles)) {
            co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge clk)", 
                                                               "test/uart_tb.sv", 
                                                               151);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->uart_tb__DOT__out))))) {
                VL_WRITEF_NX("\n Start bit received\n",0);
                goto __Vlabel1;
            }
            vlSelf->uart_tb__DOT__wait_for_start_bit__Vstatic__i 
                = ((IData)(1U) + vlSelf->uart_tb__DOT__wait_for_start_bit__Vstatic__i);
        }
        VL_WRITEF_NX("\n ==========> Error <==========\n\n Start bit not received within %0d clock cycles\n",0,
                     32,__Vtask_uart_tb__DOT__wait_for_start_bit__5__cycles);
        VL_FINISH_MT("test/uart_tb.sv", 159, "");
        __Vlabel1: ;
    }
    while ((1U & (~ (IData)(vlSelf->uart_tb__DOT__data_received)))) {
        co_await vlSelf->__VtrigSched_h6d82393c__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] uart_tb.data_received)", 
                                                           "test/uart_tb.sv", 
                                                           84);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((IData)(vlSelf->uart_tb__DOT__captured_in) 
                   == (IData)(vlSelf->uart_tb__DOT__data_out)))) {
        VL_WRITEF_NX("\n ====> Data Successfully Transmitted and Received <====\n\n Transmitted_data = %x; Received_data = %x;\n",0,
                     8,vlSelf->uart_tb__DOT__captured_in,
                     8,(IData)(vlSelf->uart_tb__DOT__data_out));
    } else {
        VL_WRITEF_NX("\n ==========> Error <==========\n\n Transmitted Data and Received Data are not same\n\n Transmitted_data = %x; Received_data = %x;\n",0,
                     8,vlSelf->uart_tb__DOT__captured_in,
                     8,(IData)(vlSelf->uart_tb__DOT__data_out));
        VL_FINISH_MT("test/uart_tb.sv", 94, "");
    }
    vlSelf->uart_tb__DOT__in = (0xffU & VL_RANDOM_I());
    vlSelf->uart_tb__DOT__load = 0U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->uart_tb__DOT__load = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->uart_tb__DOT__load = 0U;
    vlSelf->uart_tb__DOT__tx_start = 0U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       139);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->uart_tb__DOT__tx_start = 1U;
    vlSelf->uart_tb__DOT__captured_in = vlSelf->uart_tb__DOT__in;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__wait_for_start_bit__5__cycles = 0x23U;
    {
        vlSelf->uart_tb__DOT__wait_for_start_bit__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelf->uart_tb__DOT__wait_for_start_bit__Vstatic__i, __Vtask_uart_tb__DOT__wait_for_start_bit__5__cycles)) {
            co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge clk)", 
                                                               "test/uart_tb.sv", 
                                                               151);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->uart_tb__DOT__out))))) {
                VL_WRITEF_NX("\n Start bit received\n",0);
                goto __Vlabel2;
            }
            vlSelf->uart_tb__DOT__wait_for_start_bit__Vstatic__i 
                = ((IData)(1U) + vlSelf->uart_tb__DOT__wait_for_start_bit__Vstatic__i);
        }
        VL_WRITEF_NX("\n ==========> Error <==========\n\n Start bit not received within %0d clock cycles\n",0,
                     32,__Vtask_uart_tb__DOT__wait_for_start_bit__5__cycles);
        VL_FINISH_MT("test/uart_tb.sv", 159, "");
        __Vlabel2: ;
    }
    while ((1U & (~ (IData)(vlSelf->uart_tb__DOT__data_received)))) {
        co_await vlSelf->__VtrigSched_h6d82393c__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] uart_tb.data_received)", 
                                                           "test/uart_tb.sv", 
                                                           84);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((IData)(vlSelf->uart_tb__DOT__captured_in) 
                   == (IData)(vlSelf->uart_tb__DOT__data_out)))) {
        VL_WRITEF_NX("\n ====> Data Successfully Transmitted and Received <====\n\n Transmitted_data = %x; Received_data = %x;\n",0,
                     8,vlSelf->uart_tb__DOT__captured_in,
                     8,(IData)(vlSelf->uart_tb__DOT__data_out));
    } else {
        VL_WRITEF_NX("\n ==========> Error <==========\n\n Transmitted Data and Received Data are not same\n\n Transmitted_data = %x; Received_data = %x;\n",0,
                     8,vlSelf->uart_tb__DOT__captured_in,
                     8,(IData)(vlSelf->uart_tb__DOT__data_out));
        VL_FINISH_MT("test/uart_tb.sv", 94, "");
    }
    vlSelf->uart_tb__DOT__in = (0xffU & VL_RANDOM_I());
    vlSelf->uart_tb__DOT__load = 0U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->uart_tb__DOT__load = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->uart_tb__DOT__load = 0U;
    vlSelf->uart_tb__DOT__tx_start = 0U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       139);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->uart_tb__DOT__tx_start = 1U;
    vlSelf->uart_tb__DOT__captured_in = vlSelf->uart_tb__DOT__in;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__wait_for_start_bit__5__cycles = 0x23U;
    {
        vlSelf->uart_tb__DOT__wait_for_start_bit__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelf->uart_tb__DOT__wait_for_start_bit__Vstatic__i, __Vtask_uart_tb__DOT__wait_for_start_bit__5__cycles)) {
            co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge clk)", 
                                                               "test/uart_tb.sv", 
                                                               151);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->uart_tb__DOT__out))))) {
                VL_WRITEF_NX("\n Start bit received\n",0);
                goto __Vlabel3;
            }
            vlSelf->uart_tb__DOT__wait_for_start_bit__Vstatic__i 
                = ((IData)(1U) + vlSelf->uart_tb__DOT__wait_for_start_bit__Vstatic__i);
        }
        VL_WRITEF_NX("\n ==========> Error <==========\n\n Start bit not received within %0d clock cycles\n",0,
                     32,__Vtask_uart_tb__DOT__wait_for_start_bit__5__cycles);
        VL_FINISH_MT("test/uart_tb.sv", 159, "");
        __Vlabel3: ;
    }
    while ((1U & (~ (IData)(vlSelf->uart_tb__DOT__data_received)))) {
        co_await vlSelf->__VtrigSched_h6d82393c__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] uart_tb.data_received)", 
                                                           "test/uart_tb.sv", 
                                                           84);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((IData)(vlSelf->uart_tb__DOT__captured_in) 
                   == (IData)(vlSelf->uart_tb__DOT__data_out)))) {
        VL_WRITEF_NX("\n ====> Data Successfully Transmitted and Received <====\n\n Transmitted_data = %x; Received_data = %x;\n",0,
                     8,vlSelf->uart_tb__DOT__captured_in,
                     8,(IData)(vlSelf->uart_tb__DOT__data_out));
    } else {
        VL_WRITEF_NX("\n ==========> Error <==========\n\n Transmitted Data and Received Data are not same\n\n Transmitted_data = %x; Received_data = %x;\n",0,
                     8,vlSelf->uart_tb__DOT__captured_in,
                     8,(IData)(vlSelf->uart_tb__DOT__data_out));
        VL_FINISH_MT("test/uart_tb.sv", 94, "");
    }
    vlSelf->uart_tb__DOT__in = (0xffU & VL_RANDOM_I());
    vlSelf->uart_tb__DOT__load = 0U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->uart_tb__DOT__load = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->uart_tb__DOT__load = 0U;
    vlSelf->uart_tb__DOT__tx_start = 0U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       139);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->uart_tb__DOT__tx_start = 1U;
    vlSelf->uart_tb__DOT__captured_in = vlSelf->uart_tb__DOT__in;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__wait_for_start_bit__5__cycles = 0x23U;
    {
        vlSelf->uart_tb__DOT__wait_for_start_bit__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelf->uart_tb__DOT__wait_for_start_bit__Vstatic__i, __Vtask_uart_tb__DOT__wait_for_start_bit__5__cycles)) {
            co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge clk)", 
                                                               "test/uart_tb.sv", 
                                                               151);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->uart_tb__DOT__out))))) {
                VL_WRITEF_NX("\n Start bit received\n",0);
                goto __Vlabel4;
            }
            vlSelf->uart_tb__DOT__wait_for_start_bit__Vstatic__i 
                = ((IData)(1U) + vlSelf->uart_tb__DOT__wait_for_start_bit__Vstatic__i);
        }
        VL_WRITEF_NX("\n ==========> Error <==========\n\n Start bit not received within %0d clock cycles\n",0,
                     32,__Vtask_uart_tb__DOT__wait_for_start_bit__5__cycles);
        VL_FINISH_MT("test/uart_tb.sv", 159, "");
        __Vlabel4: ;
    }
    while ((1U & (~ (IData)(vlSelf->uart_tb__DOT__data_received)))) {
        co_await vlSelf->__VtrigSched_h6d82393c__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] uart_tb.data_received)", 
                                                           "test/uart_tb.sv", 
                                                           84);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((IData)(vlSelf->uart_tb__DOT__captured_in) 
                   == (IData)(vlSelf->uart_tb__DOT__data_out)))) {
        VL_WRITEF_NX("\n ====> Data Successfully Transmitted and Received <====\n\n Transmitted_data = %x; Received_data = %x;\n",0,
                     8,vlSelf->uart_tb__DOT__captured_in,
                     8,(IData)(vlSelf->uart_tb__DOT__data_out));
    } else {
        VL_WRITEF_NX("\n ==========> Error <==========\n\n Transmitted Data and Received Data are not same\n\n Transmitted_data = %x; Received_data = %x;\n",0,
                     8,vlSelf->uart_tb__DOT__captured_in,
                     8,(IData)(vlSelf->uart_tb__DOT__data_out));
        VL_FINISH_MT("test/uart_tb.sv", 94, "");
    }
    vlSelf->uart_tb__DOT__in = (0xffU & VL_RANDOM_I());
    vlSelf->uart_tb__DOT__load = 0U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->uart_tb__DOT__load = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->uart_tb__DOT__load = 0U;
    vlSelf->uart_tb__DOT__tx_start = 0U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       139);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->uart_tb__DOT__tx_start = 1U;
    vlSelf->uart_tb__DOT__captured_in = vlSelf->uart_tb__DOT__in;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_uart_tb__DOT__wait_for_start_bit__5__cycles = 0x23U;
    {
        vlSelf->uart_tb__DOT__wait_for_start_bit__Vstatic__i = 0U;
        while (VL_LTS_III(32, vlSelf->uart_tb__DOT__wait_for_start_bit__Vstatic__i, __Vtask_uart_tb__DOT__wait_for_start_bit__5__cycles)) {
            co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge clk)", 
                                                               "test/uart_tb.sv", 
                                                               151);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->uart_tb__DOT__out))))) {
                VL_WRITEF_NX("\n Start bit received\n",0);
                goto __Vlabel5;
            }
            vlSelf->uart_tb__DOT__wait_for_start_bit__Vstatic__i 
                = ((IData)(1U) + vlSelf->uart_tb__DOT__wait_for_start_bit__Vstatic__i);
        }
        VL_WRITEF_NX("\n ==========> Error <==========\n\n Start bit not received within %0d clock cycles\n",0,
                     32,__Vtask_uart_tb__DOT__wait_for_start_bit__5__cycles);
        VL_FINISH_MT("test/uart_tb.sv", 159, "");
        __Vlabel5: ;
    }
    while ((1U & (~ (IData)(vlSelf->uart_tb__DOT__data_received)))) {
        co_await vlSelf->__VtrigSched_h6d82393c__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] uart_tb.data_received)", 
                                                           "test/uart_tb.sv", 
                                                           84);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge clk)", 
                                                       "test/uart_tb.sv", 
                                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((IData)(vlSelf->uart_tb__DOT__captured_in) 
                   == (IData)(vlSelf->uart_tb__DOT__data_out)))) {
        VL_WRITEF_NX("\n ====> Data Successfully Transmitted and Received <====\n\n Transmitted_data = %x; Received_data = %x;\n",0,
                     8,vlSelf->uart_tb__DOT__captured_in,
                     8,(IData)(vlSelf->uart_tb__DOT__data_out));
    } else {
        VL_WRITEF_NX("\n ==========> Error <==========\n\n Transmitted Data and Received Data are not same\n\n Transmitted_data = %x; Received_data = %x;\n",0,
                     8,vlSelf->uart_tb__DOT__captured_in,
                     8,(IData)(vlSelf->uart_tb__DOT__data_out));
        VL_FINISH_MT("test/uart_tb.sv", 94, "");
    }
    uart_tb__DOT____Vrepeat3 = 0x9c4U;
    while (VL_LTS_III(32, 0U, uart_tb__DOT____Vrepeat3)) {
        co_await vlSelf->__VtrigSched_h759a1d48__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge clk)", 
                                                           "test/uart_tb.sv", 
                                                           97);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        uart_tb__DOT____Vrepeat3 = (uart_tb__DOT____Vrepeat3 
                                    - (IData)(1U));
    }
    VL_FINISH_MT("test/uart_tb.sv", 98, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

void Vuart_tb___024root___act_comb__TOP__0(Vuart_tb___024root* vlSelf);

void Vuart_tb___024root___eval_act(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_act\n"); );
    // Body
    if ((0x18ULL & vlSelf->__VactTriggered.word(0U))) {
        Vuart_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> Vuart_tb__ConstPool__TABLE_h4eebfd9a_0;

VL_INLINE_OPT void Vuart_tb___024root___act_comb__TOP__0(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->uart_tb__DOT__data_transmitted) 
                     << 4U) | (((IData)(vlSelf->uart_tb__DOT__tx_start) 
                                << 3U) | (((IData)(vlSelf->uart_tb__DOT__load) 
                                           << 2U) | (IData)(vlSelf->uart_tb__DOT__UART__DOT__TX_CONTROLLER__DOT__c_state))));
    vlSelf->uart_tb__DOT__UART__DOT__TX_CONTROLLER__DOT__n_state 
        = Vuart_tb__ConstPool__TABLE_h4eebfd9a_0[__Vtableidx1];
}

void Vuart_tb___024root___nba_sequent__TOP__0(Vuart_tb___024root* vlSelf);
void Vuart_tb___024root___nba_sequent__TOP__1(Vuart_tb___024root* vlSelf);
void Vuart_tb___024root___nba_sequent__TOP__2(Vuart_tb___024root* vlSelf);
void Vuart_tb___024root___nba_sequent__TOP__3(Vuart_tb___024root* vlSelf);
void Vuart_tb___024root___nba_comb__TOP__1(Vuart_tb___024root* vlSelf);

void Vuart_tb___024root___eval_nba(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vuart_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vuart_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vuart_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x1aULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vuart_tb___024root___act_comb__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vuart_tb___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vuart_tb___024root___nba_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vuart_tb___024root___nba_sequent__TOP__0(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_counter;
    __Vdly__uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_counter = 0;
    CData/*0:0*/ __Vdly__uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_toggle;
    __Vdly__uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_toggle = 0;
    IData/*31:0*/ __Vdly__uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_counter;
    __Vdly__uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_counter = 0;
    CData/*0:0*/ __Vdly__uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_toggle;
    __Vdly__uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_toggle = 0;
    // Body
    __Vdly__uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_counter 
        = vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_counter;
    __Vdly__uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_counter 
        = vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_counter;
    __Vdly__uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_toggle 
        = vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_toggle;
    __Vdly__uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_toggle 
        = vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_toggle;
    __Vdly__uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_counter 
        = ((1U & ((~ (IData)(vlSelf->uart_tb__DOT__reset)) 
                  | (0U == VL_SHIFTR_III(32,32,32, vlSelf->uart_tb__DOT__tx_baud_divisor, 3U))))
            ? 0U : ((vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_counter 
                     == (VL_SHIFTR_III(32,32,32, vlSelf->uart_tb__DOT__tx_baud_divisor, 3U) 
                         - (IData)(1U))) ? 0U : ((IData)(1U) 
                                                 + vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_counter)));
    __Vdly__uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_counter 
        = ((1U & ((~ (IData)(vlSelf->uart_tb__DOT__reset)) 
                  | (0U == vlSelf->uart_tb__DOT__tx_baud_divisor)))
            ? 0U : ((vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_counter 
                     == (vlSelf->uart_tb__DOT__tx_baud_divisor 
                         - (IData)(1U))) ? 0U : ((IData)(1U) 
                                                 + vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_counter)));
    if (vlSelf->uart_tb__DOT__reset) {
        if ((vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_counter 
             == (VL_SHIFTR_III(32,32,32, vlSelf->uart_tb__DOT__tx_baud_divisor, 3U) 
                 - (IData)(1U)))) {
            __Vdly__uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_toggle 
                = (1U & (~ (IData)(vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_toggle)));
            vlSelf->uart_tb__DOT__rx_baud_clk = vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_toggle;
        }
        if ((vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_counter 
             == (vlSelf->uart_tb__DOT__tx_baud_divisor 
                 - (IData)(1U)))) {
            __Vdly__uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_toggle 
                = (1U & (~ (IData)(vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_toggle)));
            vlSelf->uart_tb__DOT__tx_baud_clk = vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_toggle;
        }
    } else {
        vlSelf->uart_tb__DOT__rx_baud_clk = 0U;
        __Vdly__uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_toggle = 1U;
        vlSelf->uart_tb__DOT__tx_baud_clk = 0U;
        __Vdly__uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_toggle = 1U;
    }
    vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_counter 
        = __Vdly__uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_counter;
    vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_toggle 
        = __Vdly__uart_tb__DOT__UART__DOT__Baud_CLK__DOT__rx_toggle;
    vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_counter 
        = __Vdly__uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_counter;
    vlSelf->uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_toggle 
        = __Vdly__uart_tb__DOT__UART__DOT__Baud_CLK__DOT__tx_toggle;
}

extern const VlUnpacked<CData/*0:0*/, 4> Vuart_tb__ConstPool__TABLE_h6e51dc8e_0;
extern const VlUnpacked<CData/*0:0*/, 4> Vuart_tb__ConstPool__TABLE_h6eeb59c9_0;

VL_INLINE_OPT void Vuart_tb___024root___nba_sequent__TOP__1(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*1:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*9:0*/ __Vdly__uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__PISO__DOT__q;
    __Vdly__uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__PISO__DOT__q = 0;
    CData/*3:0*/ __Vdly__uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__TX_COUNTER__DOT__counter;
    __Vdly__uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__TX_COUNTER__DOT__counter = 0;
    // Body
    __Vdly__uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__TX_COUNTER__DOT__counter 
        = vlSelf->uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__TX_COUNTER__DOT__counter;
    __Vdly__uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__PISO__DOT__q 
        = vlSelf->uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__PISO__DOT__q;
    if (vlSelf->uart_tb__DOT__reset) {
        if (vlSelf->uart_tb__DOT__UART__DOT__tx_enable) {
            if ((9U == (IData)(vlSelf->uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__TX_COUNTER__DOT__counter))) {
                vlSelf->uart_tb__DOT__data_transmitted = 1U;
                __Vdly__uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__TX_COUNTER__DOT__counter = 0U;
            } else {
                __Vdly__uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__TX_COUNTER__DOT__counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__TX_COUNTER__DOT__counter)));
                vlSelf->uart_tb__DOT__data_transmitted = 0U;
            }
        }
        vlSelf->uart_tb__DOT__UART__DOT__TX_CONTROLLER__DOT__c_state 
            = vlSelf->uart_tb__DOT__UART__DOT__TX_CONTROLLER__DOT__n_state;
        if (vlSelf->uart_tb__DOT__UART__DOT__load_en) {
            __Vdly__uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__PISO__DOT__q 
                = (0x200U | ((IData)(vlSelf->uart_tb__DOT__in) 
                             << 1U));
        } else if (vlSelf->uart_tb__DOT__UART__DOT__tx_enable) {
            vlSelf->uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__piso_out 
                = (1U & (IData)(vlSelf->uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__PISO__DOT__q));
            __Vdly__uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__PISO__DOT__q 
                = (0x3ffU & VL_SHIFTR_III(10,10,32, (IData)(vlSelf->uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__PISO__DOT__q), 1U));
        } else {
            vlSelf->uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__piso_out = 1U;
        }
    } else {
        __Vdly__uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__TX_COUNTER__DOT__counter = 0U;
        vlSelf->uart_tb__DOT__data_transmitted = 0U;
        vlSelf->uart_tb__DOT__UART__DOT__TX_CONTROLLER__DOT__c_state = 0U;
        __Vdly__uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__PISO__DOT__q = 0x3ffU;
    }
    vlSelf->uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__TX_COUNTER__DOT__counter 
        = __Vdly__uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__TX_COUNTER__DOT__counter;
    vlSelf->uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__PISO__DOT__q 
        = __Vdly__uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__PISO__DOT__q;
    __Vtableidx2 = vlSelf->uart_tb__DOT__UART__DOT__TX_CONTROLLER__DOT__c_state;
    vlSelf->uart_tb__DOT__UART__DOT__load_en = Vuart_tb__ConstPool__TABLE_h6e51dc8e_0
        [__Vtableidx2];
    vlSelf->uart_tb__DOT__UART__DOT__tx_enable = Vuart_tb__ConstPool__TABLE_h6eeb59c9_0
        [__Vtableidx2];
    vlSelf->uart_tb__DOT__UART__DOT__tx_sel = Vuart_tb__ConstPool__TABLE_h6eeb59c9_0
        [__Vtableidx2];
}

extern const VlUnpacked<CData/*2:0*/, 64> Vuart_tb__ConstPool__TABLE_h15aeb57d_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vuart_tb__ConstPool__TABLE_h7ad68074_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vuart_tb__ConstPool__TABLE_haf6779d9_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vuart_tb__ConstPool__TABLE_hd3438aaf_0;
extern const VlUnpacked<CData/*0:0*/, 4> Vuart_tb__ConstPool__TABLE_hd476cfa5_0;
extern const VlUnpacked<CData/*0:0*/, 4> Vuart_tb__ConstPool__TABLE_h6f4c0f52_0;

VL_INLINE_OPT void Vuart_tb___024root___nba_sequent__TOP__2(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*1:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*5:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    SData/*9:0*/ __Vdly__uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SIPO__DOT__temp;
    __Vdly__uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SIPO__DOT__temp = 0;
    CData/*3:0*/ __Vdly__uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__Bit_Counter__DOT__counter;
    __Vdly__uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__Bit_Counter__DOT__counter = 0;
    // Body
    __Vdly__uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SIPO__DOT__temp 
        = vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SIPO__DOT__temp;
    __Vdly__uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__Bit_Counter__DOT__counter 
        = vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__Bit_Counter__DOT__counter;
    if (vlSelf->uart_tb__DOT__reset) {
        if ((1U & (~ (IData)(vlSelf->uart_tb__DOT__UART__DOT__take_value)))) {
            if (vlSelf->uart_tb__DOT__UART__DOT__get_output) {
                vlSelf->uart_tb__DOT__UART__DOT__stop = 1U;
                vlSelf->uart_tb__DOT__data_out = (0xffU 
                                                  & ((IData)(vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SIPO__DOT__q) 
                                                     >> 2U));
            } else {
                vlSelf->uart_tb__DOT__UART__DOT__stop = 0U;
            }
        }
        vlSelf->uart_tb__DOT__UART__DOT__RX_CONTROLLER__DOT__c_state 
            = vlSelf->uart_tb__DOT__UART__DOT__RX_CONTROLLER__DOT__n_state;
        if (vlSelf->uart_tb__DOT__UART__DOT__take_value) {
            __Vdly__uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SIPO__DOT__temp 
                = (((IData)(vlSelf->uart_tb__DOT__out) 
                    << 9U) | (0x1ffU & ((IData)(vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SIPO__DOT__temp) 
                                        >> 1U)));
            vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SIPO__DOT__q 
                = vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SIPO__DOT__temp;
        }
    } else {
        vlSelf->uart_tb__DOT__UART__DOT__stop = 0U;
        vlSelf->uart_tb__DOT__UART__DOT__RX_CONTROLLER__DOT__c_state = 0U;
        vlSelf->uart_tb__DOT__data_out = 0U;
        __Vdly__uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SIPO__DOT__temp = 0U;
        vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SIPO__DOT__q = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->uart_tb__DOT__reset)) 
               | (IData)(vlSelf->uart_tb__DOT__UART__DOT__bit_clr)))) {
        __Vdly__uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__Bit_Counter__DOT__counter = 0U;
    } else if ((9U == (IData)(vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__Bit_Counter__DOT__counter))) {
        vlSelf->uart_tb__DOT__data_received = 1U;
    } else {
        __Vdly__uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__Bit_Counter__DOT__counter 
            = (0xfU & ((IData)(vlSelf->uart_tb__DOT__UART__DOT__incre_counter)
                        ? ((IData)(1U) + (IData)(vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__Bit_Counter__DOT__counter))
                        : (IData)(vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__Bit_Counter__DOT__counter)));
        vlSelf->uart_tb__DOT__data_received = 0U;
    }
    __Vtableidx5 = (((IData)(vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SAMLE_COUNTER__DOT__counter) 
                     << 3U) | ((4U & ((~ (IData)(vlSelf->uart_tb__DOT__out)) 
                                      << 2U)) | (((IData)(vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SAMLE_COUNTER__DOT__started) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->uart_tb__DOT__reset))));
    vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SAMLE_COUNTER__DOT__counter 
        = Vuart_tb__ConstPool__TABLE_h15aeb57d_0[__Vtableidx5];
    if ((2U & Vuart_tb__ConstPool__TABLE_h7ad68074_0
         [__Vtableidx5])) {
        vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SAMLE_COUNTER__DOT__started 
            = Vuart_tb__ConstPool__TABLE_haf6779d9_0
            [__Vtableidx5];
    }
    if ((4U & Vuart_tb__ConstPool__TABLE_h7ad68074_0
         [__Vtableidx5])) {
        vlSelf->uart_tb__DOT__UART__DOT__get_value 
            = Vuart_tb__ConstPool__TABLE_hd3438aaf_0
            [__Vtableidx5];
    }
    vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__Bit_Counter__DOT__counter 
        = __Vdly__uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__Bit_Counter__DOT__counter;
    vlSelf->uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SIPO__DOT__temp 
        = __Vdly__uart_tb__DOT__UART__DOT__RX_DATAPATH__DOT__SIPO__DOT__temp;
    __Vtableidx4 = vlSelf->uart_tb__DOT__UART__DOT__RX_CONTROLLER__DOT__c_state;
    vlSelf->uart_tb__DOT__UART__DOT__bit_clr = Vuart_tb__ConstPool__TABLE_hd476cfa5_0
        [__Vtableidx4];
    vlSelf->uart_tb__DOT__UART__DOT__get_output = Vuart_tb__ConstPool__TABLE_h6f4c0f52_0
        [__Vtableidx4];
    vlSelf->uart_tb__DOT__UART__DOT__take_value = Vuart_tb__ConstPool__TABLE_h6eeb59c9_0
        [__Vtableidx4];
    vlSelf->uart_tb__DOT__UART__DOT__incre_counter 
        = Vuart_tb__ConstPool__TABLE_h6eeb59c9_0[__Vtableidx4];
}

VL_INLINE_OPT void Vuart_tb___024root___nba_sequent__TOP__3(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->uart_tb__DOT__out = ((1U & (~ (IData)(vlSelf->uart_tb__DOT__UART__DOT__tx_sel))) 
                                 || ((1U & (~ (IData)(vlSelf->uart_tb__DOT__UART__DOT__tx_sel))) 
                                     || (IData)(vlSelf->uart_tb__DOT__UART__DOT__TX_DATAPATH__DOT__piso_out)));
}

extern const VlUnpacked<CData/*1:0*/, 64> Vuart_tb__ConstPool__TABLE_hcad76bad_0;

VL_INLINE_OPT void Vuart_tb___024root___nba_comb__TOP__1(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___nba_comb__TOP__1\n"); );
    // Init
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx3 = ((0x20U & ((~ (IData)(vlSelf->uart_tb__DOT__out)) 
                              << 5U)) | (((IData)(vlSelf->uart_tb__DOT__UART__DOT__get_value) 
                                          << 4U) | 
                                         (((IData)(vlSelf->uart_tb__DOT__data_received) 
                                           << 3U) | 
                                          (((IData)(vlSelf->uart_tb__DOT__UART__DOT__stop) 
                                            << 2U) 
                                           | (IData)(vlSelf->uart_tb__DOT__UART__DOT__RX_CONTROLLER__DOT__c_state)))));
    vlSelf->uart_tb__DOT__UART__DOT__RX_CONTROLLER__DOT__n_state 
        = Vuart_tb__ConstPool__TABLE_hcad76bad_0[__Vtableidx3];
}

void Vuart_tb___024root___timing_resume(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___timing_resume\n"); );
    // Body
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h759a1d48__0.resume("@(posedge clk)");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h6d82393c__0.resume("@([changed] uart_tb.data_received)");
    }
}

void Vuart_tb___024root___timing_commit(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___timing_commit\n"); );
    // Body
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h759a1d48__0.commit("@(posedge clk)");
    }
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h6d82393c__0.commit("@([changed] uart_tb.data_received)");
    }
}

void Vuart_tb___024root___eval_triggers__act(Vuart_tb___024root* vlSelf);

bool Vuart_tb___024root___eval_phase__act(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vuart_tb___024root___eval_triggers__act(vlSelf);
    Vuart_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vuart_tb___024root___timing_resume(vlSelf);
        Vuart_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vuart_tb___024root___eval_phase__nba(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vuart_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tb___024root___dump_triggers__nba(Vuart_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tb___024root___dump_triggers__act(Vuart_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vuart_tb___024root___eval(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vuart_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("test/uart_tb.sv", 24, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vuart_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("test/uart_tb.sv", 24, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vuart_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vuart_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vuart_tb___024root___eval_debug_assertions(Vuart_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
