// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="myproject,hls_ip_2019_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=1,HLS_INPUT_PART=xcu250-figd2104-2L-e,HLS_INPUT_CLOCK=5.000000,HLS_INPUT_ARCH=pipeline,HLS_SYN_CLOCK=4.221000,HLS_SYN_LAT=4,HLS_SYN_TPT=1,HLS_SYN_MEM=0,HLS_SYN_DSP=2,HLS_SYN_FF=383,HLS_SYN_LUT=647,HLS_VERSION=2019_2}" *)

module myproject (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        fc1_input_V_ap_vld,
        fc1_input_V,
        layer3_out_0_V,
        layer3_out_0_V_ap_vld,
        layer3_out_1_V,
        layer3_out_1_V_ap_vld,
        loss_layer3_out_V,
        loss_layer3_out_V_ap_vld,
        const_size_in_1,
        const_size_in_1_ap_vld,
        const_size_out_1,
        const_size_out_1_ap_vld,
        layer3_out_ground_truth_V_address0,
        layer3_out_ground_truth_V_ce0,
        layer3_out_ground_truth_V_q0,
        layer3_out_ground_truth_V_address1,
        layer3_out_ground_truth_V_ce1,
        layer3_out_ground_truth_V_q1,
        train
);

parameter    ap_ST_fsm_pp0_stage0 = 1'd1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input   fc1_input_V_ap_vld;
input  [15:0] fc1_input_V;
output  [15:0] layer3_out_0_V;
output   layer3_out_0_V_ap_vld;
output  [15:0] layer3_out_1_V;
output   layer3_out_1_V_ap_vld;
output  [15:0] loss_layer3_out_V;
output   loss_layer3_out_V_ap_vld;
output  [15:0] const_size_in_1;
output   const_size_in_1_ap_vld;
output  [15:0] const_size_out_1;
output   const_size_out_1_ap_vld;
output  [0:0] layer3_out_ground_truth_V_address0;
output   layer3_out_ground_truth_V_ce0;
input  [15:0] layer3_out_ground_truth_V_q0;
output  [0:0] layer3_out_ground_truth_V_address1;
output   layer3_out_ground_truth_V_ce1;
input  [15:0] layer3_out_ground_truth_V_q1;
input   train;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg layer3_out_0_V_ap_vld;
reg layer3_out_1_V_ap_vld;
reg loss_layer3_out_V_ap_vld;
reg const_size_in_1_ap_vld;
reg const_size_out_1_ap_vld;

(* fsm_encoding = "none" *) reg   [0:0] ap_CS_fsm;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_enable_reg_pp0_iter0;
reg    ap_enable_reg_pp0_iter1;
reg    ap_enable_reg_pp0_iter2;
reg    ap_enable_reg_pp0_iter3;
reg    ap_enable_reg_pp0_iter4;
reg    ap_idle_pp0;
reg    fc1_input_V_ap_vld_in_sig;
reg    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_state3_pp0_stage0_iter2;
wire    ap_block_state4_pp0_stage0_iter3;
wire    ap_block_state5_pp0_stage0_iter4;
reg    ap_block_pp0_stage0_11001;
reg   [15:0] fc1_input_V_preg;
reg   [15:0] fc1_input_V_in_sig;
reg    fc1_input_V_ap_vld_preg;
reg    fc1_input_V_blk_n;
wire    ap_block_pp0_stage0;
wire   [0:0] train_read_read_fu_58_p2;
reg   [0:0] train_read_reg_146;
reg   [0:0] train_read_reg_146_pp0_iter1_reg;
reg   [0:0] train_read_reg_146_pp0_iter2_reg;
reg   [0:0] train_read_reg_146_pp0_iter3_reg;
wire   [14:0] layer2_out_0_V_dense_latency_ap_fixed_ap_fixed_config2_0_0_0_fu_130_ap_return;
reg   [14:0] layer2_out_0_V_reg_150;
wire   [15:0] call_ret2_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_fu_136_ap_return;
reg   [15:0] call_ret2_reg_155;
reg   [15:0] call_ret2_reg_155_pp0_iter2_reg;
reg   [15:0] call_ret2_reg_155_pp0_iter3_reg;
reg    ap_block_pp0_stage0_subdone;
wire    grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ap_start;
wire    grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ap_done;
wire    grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ap_idle;
wire    grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ap_ready;
reg    grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ap_ce;
wire   [0:0] grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ground_truth_V_address0;
wire    grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ground_truth_V_ce0;
wire   [0:0] grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ground_truth_V_address1;
wire    grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ground_truth_V_ce1;
wire   [15:0] grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ap_return;
reg    ap_block_state1_pp0_stage0_iter0_ignore_call0;
wire    ap_block_state2_pp0_stage0_iter1_ignore_call0;
wire    ap_block_state3_pp0_stage0_iter2_ignore_call0;
wire    ap_block_state4_pp0_stage0_iter3_ignore_call0;
wire    ap_block_state5_pp0_stage0_iter4_ignore_call0;
reg    ap_block_pp0_stage0_11001_ignoreCallOp12;
wire    layer2_out_0_V_dense_latency_ap_fixed_ap_fixed_config2_0_0_0_fu_130_ap_ready;
wire    call_ret2_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_fu_136_ap_ready;
wire   [15:0] call_ret2_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_fu_136_data_0_V_read;
reg   [15:0] ap_phi_mux_storemerge_phi_fu_112_p4;
reg   [15:0] ap_phi_reg_pp0_iter4_storemerge_reg_108;
wire   [15:0] ap_phi_reg_pp0_iter0_storemerge_reg_108;
reg   [15:0] ap_phi_reg_pp0_iter1_storemerge_reg_108;
reg   [15:0] ap_phi_reg_pp0_iter2_storemerge_reg_108;
reg   [15:0] ap_phi_reg_pp0_iter3_storemerge_reg_108;
reg    grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ap_start_reg;
reg    ap_block_pp0_stage0_01001;
reg   [0:0] ap_NS_fsm;
reg    ap_idle_pp0_0to3;
reg    ap_reset_idle_pp0;
wire    ap_enable_pp0;
reg    ap_condition_54;

// power-on initialization
initial begin
#0 ap_CS_fsm = 1'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter3 = 1'b0;
#0 ap_enable_reg_pp0_iter4 = 1'b0;
#0 fc1_input_V_preg = 16'd0;
#0 fc1_input_V_ap_vld_preg = 1'b0;
#0 grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ap_start_reg = 1'b0;
end

mse_ap_fixed_16_6_0_0_0_mse_config_s grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ap_start),
    .ap_done(grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ap_done),
    .ap_idle(grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ap_idle),
    .ap_ready(grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ap_ready),
    .ap_ce(grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ap_ce),
    .predictions_0_V_read(call_ret2_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_fu_136_ap_return),
    .predictions_1_V_read(1'd0),
    .ground_truth_V_address0(grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ground_truth_V_address0),
    .ground_truth_V_ce0(grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ground_truth_V_ce0),
    .ground_truth_V_q0(layer3_out_ground_truth_V_q0),
    .ground_truth_V_address1(grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ground_truth_V_address1),
    .ground_truth_V_ce1(grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ground_truth_V_ce1),
    .ground_truth_V_q1(layer3_out_ground_truth_V_q1),
    .ap_return(grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ap_return)
);

dense_latency_ap_fixed_ap_fixed_config2_0_0_0 layer2_out_0_V_dense_latency_ap_fixed_ap_fixed_config2_0_0_0_fu_130(
    .ap_ready(layer2_out_0_V_dense_latency_ap_fixed_ap_fixed_config2_0_0_0_fu_130_ap_ready),
    .data_V_read(fc1_input_V_in_sig),
    .ap_return(layer2_out_0_V_dense_latency_ap_fixed_ap_fixed_config2_0_0_0_fu_130_ap_return)
);

linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s call_ret2_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_fu_136(
    .ap_ready(call_ret2_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_fu_136_ap_ready),
    .data_0_V_read(call_ret2_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_fu_136_data_0_V_read),
    .ap_return(call_ret2_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_fu_136_ap_return)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter1 <= ap_start;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter3 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter4 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        fc1_input_V_ap_vld_preg <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            fc1_input_V_ap_vld_preg <= 1'b0;
        end else if ((~((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_pp0_stage0)) & (fc1_input_V_ap_vld == 1'b1))) begin
            fc1_input_V_ap_vld_preg <= fc1_input_V_ap_vld;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        fc1_input_V_preg <= 16'd0;
    end else begin
        if ((~((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_pp0_stage0)) & (fc1_input_V_ap_vld == 1'b1))) begin
            fc1_input_V_preg <= fc1_input_V;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ap_start_reg <= 1'b0;
    end else begin
        if (((train_read_read_fu_58_p2 == 1'd1) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ap_start_reg <= 1'b1;
        end else if ((grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ap_ready == 1'b1)) begin
            grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_condition_54)) begin
        if ((train_read_read_fu_58_p2 == 1'd0)) begin
            ap_phi_reg_pp0_iter1_storemerge_reg_108 <= 16'd0;
        end else if ((1'b1 == 1'b1)) begin
            ap_phi_reg_pp0_iter1_storemerge_reg_108 <= ap_phi_reg_pp0_iter0_storemerge_reg_108;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_phi_reg_pp0_iter2_storemerge_reg_108 <= ap_phi_reg_pp0_iter1_storemerge_reg_108;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1))) begin
        ap_phi_reg_pp0_iter3_storemerge_reg_108 <= ap_phi_reg_pp0_iter2_storemerge_reg_108;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter3 == 1'b1))) begin
        ap_phi_reg_pp0_iter4_storemerge_reg_108 <= ap_phi_reg_pp0_iter3_storemerge_reg_108;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        call_ret2_reg_155 <= call_ret2_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_fu_136_ap_return;
        layer2_out_0_V_reg_150 <= layer2_out_0_V_dense_latency_ap_fixed_ap_fixed_config2_0_0_0_fu_130_ap_return;
        train_read_reg_146 <= train;
        train_read_reg_146_pp0_iter1_reg <= train_read_reg_146;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        call_ret2_reg_155_pp0_iter2_reg <= call_ret2_reg_155;
        call_ret2_reg_155_pp0_iter3_reg <= call_ret2_reg_155_pp0_iter2_reg;
        train_read_reg_146_pp0_iter2_reg <= train_read_reg_146_pp0_iter1_reg;
        train_read_reg_146_pp0_iter3_reg <= train_read_reg_146_pp0_iter2_reg;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (ap_idle_pp0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter4 == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0_0to3 = 1'b1;
    end else begin
        ap_idle_pp0_0to3 = 1'b0;
    end
end

always @ (*) begin
    if ((train_read_reg_146_pp0_iter3_reg == 1'd1)) begin
        ap_phi_mux_storemerge_phi_fu_112_p4 = grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ap_return;
    end else begin
        ap_phi_mux_storemerge_phi_fu_112_p4 = ap_phi_reg_pp0_iter4_storemerge_reg_108;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (ap_idle_pp0_0to3 == 1'b1))) begin
        ap_reset_idle_pp0 = 1'b1;
    end else begin
        ap_reset_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        const_size_in_1_ap_vld = 1'b1;
    end else begin
        const_size_in_1_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        const_size_out_1_ap_vld = 1'b1;
    end else begin
        const_size_out_1_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if ((fc1_input_V_ap_vld == 1'b1)) begin
        fc1_input_V_ap_vld_in_sig = fc1_input_V_ap_vld;
    end else begin
        fc1_input_V_ap_vld_in_sig = fc1_input_V_ap_vld_preg;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_start == 1'b1) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        fc1_input_V_blk_n = fc1_input_V_ap_vld;
    end else begin
        fc1_input_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((fc1_input_V_ap_vld == 1'b1)) begin
        fc1_input_V_in_sig = fc1_input_V;
    end else begin
        fc1_input_V_in_sig = fc1_input_V_preg;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001_ignoreCallOp12))) begin
        grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ap_ce = 1'b1;
    end else begin
        grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ap_ce = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        layer3_out_0_V_ap_vld = 1'b1;
    end else begin
        layer3_out_0_V_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        layer3_out_1_V_ap_vld = 1'b1;
    end else begin
        layer3_out_1_V_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        loss_layer3_out_V_ap_vld = 1'b1;
    end else begin
        loss_layer3_out_V_ap_vld = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_pp0_stage0 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd0];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_01001 = ((ap_start == 1'b1) & ((ap_start == 1'b0) | (fc1_input_V_ap_vld_in_sig == 1'b0)));
end

always @ (*) begin
    ap_block_pp0_stage0_11001 = ((ap_start == 1'b1) & ((ap_start == 1'b0) | (fc1_input_V_ap_vld_in_sig == 1'b0)));
end

always @ (*) begin
    ap_block_pp0_stage0_11001_ignoreCallOp12 = ((ap_start == 1'b1) & ((ap_start == 1'b0) | (fc1_input_V_ap_vld_in_sig == 1'b0)));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = ((ap_start == 1'b1) & ((ap_start == 1'b0) | (fc1_input_V_ap_vld_in_sig == 1'b0)));
end

always @ (*) begin
    ap_block_state1_pp0_stage0_iter0 = ((ap_start == 1'b0) | (fc1_input_V_ap_vld_in_sig == 1'b0));
end

always @ (*) begin
    ap_block_state1_pp0_stage0_iter0_ignore_call0 = ((ap_start == 1'b0) | (fc1_input_V_ap_vld_in_sig == 1'b0));
end

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1_ignore_call0 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2_ignore_call0 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter3_ignore_call0 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter4_ignore_call0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_condition_54 = ((1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0));
end

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_enable_reg_pp0_iter0 = ap_start;

assign ap_phi_reg_pp0_iter0_storemerge_reg_108 = 'bx;

assign call_ret2_linear_ap_fixed_ap_fixed_16_6_0_0_0_linear_config3_s_fu_136_data_0_V_read = $signed(layer2_out_0_V_reg_150);

assign const_size_in_1 = 16'd1;

assign const_size_out_1 = 16'd2;

assign grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ap_start = grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ap_start_reg;

assign layer3_out_0_V = call_ret2_reg_155_pp0_iter3_reg;

assign layer3_out_1_V = 16'd0;

assign layer3_out_ground_truth_V_address0 = grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ground_truth_V_address0;

assign layer3_out_ground_truth_V_address1 = grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ground_truth_V_address1;

assign layer3_out_ground_truth_V_ce0 = grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ground_truth_V_ce0;

assign layer3_out_ground_truth_V_ce1 = grp_mse_ap_fixed_16_6_0_0_0_mse_config_s_fu_120_ground_truth_V_ce1;

assign loss_layer3_out_V = ap_phi_mux_storemerge_phi_fu_112_p4;

assign train_read_read_fu_58_p2 = train;

endmodule //myproject