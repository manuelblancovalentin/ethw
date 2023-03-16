// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_HH_
#define _linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s : public sc_module {
    // Port declarations 5
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<16> > data_0_V_read;
    sc_in< sc_lv<16> > data_1_V_read;
    sc_out< sc_lv<16> > ap_return_0;
    sc_out< sc_lv<16> > ap_return_1;


    // Module declarations
    linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s(sc_module_name name);
    SC_HAS_PROCESS(linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s);

    ~linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s();

    sc_trace_file* mVcdFile;

    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
};

}

using namespace ap_rtl;

#endif