// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config5_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config5_s::ap_const_logic_1 = sc_dt::Log_1;
const bool linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config5_s::ap_const_boolean_1 = true;
const sc_logic linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config5_s::ap_const_logic_0 = sc_dt::Log_0;

linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config5_s::linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config5_s(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_ready);

    SC_METHOD(thread_ap_return);
    sensitive << ( data_V_read );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config5_s_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, data_V_read, "(port)data_V_read");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif

    }
}

linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config5_s::~linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config5_s() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config5_s::thread_ap_ready() {
    ap_ready = ap_const_logic_1;
}

void linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config5_s::thread_ap_return() {
    ap_return = data_V_read.read();
}

}
