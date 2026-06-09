set moduleName topp
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type dataflow
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {topp}
set C_modelType { void 0 }
set C_modelArgList {
	{ image_0 float 32 regular {array 4096 { 1 1 } 1 1 }  }
	{ image_1 float 32 regular {array 4096 { 1 1 } 1 1 }  }
	{ image_2 float 32 regular {array 4096 { 1 1 } 1 1 }  }
	{ output_r float 32 regular {array 1024 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "image_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "image","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 63,"step" : 1},{"low" : 0,"up" : 63,"step" : 1},{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "image_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "image","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 63,"step" : 1},{"low" : 0,"up" : 63,"step" : 1},{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "image_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "image","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 63,"step" : 1},{"low" : 0,"up" : 63,"step" : 1},{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "output_r", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "output","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 7,"step" : 1},{"low" : 0,"up" : 7,"step" : 1},{"low" : 0,"up" : 15,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 46
set portList { 
	{ image_0_address0 sc_out sc_lv 12 signal 0 } 
	{ image_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ image_0_d0 sc_out sc_lv 32 signal 0 } 
	{ image_0_q0 sc_in sc_lv 32 signal 0 } 
	{ image_0_we0 sc_out sc_logic 1 signal 0 } 
	{ image_0_address1 sc_out sc_lv 12 signal 0 } 
	{ image_0_ce1 sc_out sc_logic 1 signal 0 } 
	{ image_0_d1 sc_out sc_lv 32 signal 0 } 
	{ image_0_q1 sc_in sc_lv 32 signal 0 } 
	{ image_0_we1 sc_out sc_logic 1 signal 0 } 
	{ image_1_address0 sc_out sc_lv 12 signal 1 } 
	{ image_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ image_1_d0 sc_out sc_lv 32 signal 1 } 
	{ image_1_q0 sc_in sc_lv 32 signal 1 } 
	{ image_1_we0 sc_out sc_logic 1 signal 1 } 
	{ image_1_address1 sc_out sc_lv 12 signal 1 } 
	{ image_1_ce1 sc_out sc_logic 1 signal 1 } 
	{ image_1_d1 sc_out sc_lv 32 signal 1 } 
	{ image_1_q1 sc_in sc_lv 32 signal 1 } 
	{ image_1_we1 sc_out sc_logic 1 signal 1 } 
	{ image_2_address0 sc_out sc_lv 12 signal 2 } 
	{ image_2_ce0 sc_out sc_logic 1 signal 2 } 
	{ image_2_d0 sc_out sc_lv 32 signal 2 } 
	{ image_2_q0 sc_in sc_lv 32 signal 2 } 
	{ image_2_we0 sc_out sc_logic 1 signal 2 } 
	{ image_2_address1 sc_out sc_lv 12 signal 2 } 
	{ image_2_ce1 sc_out sc_logic 1 signal 2 } 
	{ image_2_d1 sc_out sc_lv 32 signal 2 } 
	{ image_2_q1 sc_in sc_lv 32 signal 2 } 
	{ image_2_we1 sc_out sc_logic 1 signal 2 } 
	{ output_r_address0 sc_out sc_lv 10 signal 3 } 
	{ output_r_ce0 sc_out sc_logic 1 signal 3 } 
	{ output_r_d0 sc_out sc_lv 32 signal 3 } 
	{ output_r_q0 sc_in sc_lv 32 signal 3 } 
	{ output_r_we0 sc_out sc_logic 1 signal 3 } 
	{ output_r_address1 sc_out sc_lv 10 signal 3 } 
	{ output_r_ce1 sc_out sc_logic 1 signal 3 } 
	{ output_r_d1 sc_out sc_lv 32 signal 3 } 
	{ output_r_q1 sc_in sc_lv 32 signal 3 } 
	{ output_r_we1 sc_out sc_logic 1 signal 3 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
}
set NewPortList {[ 
	{ "name": "image_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "image_0", "role": "address0" }} , 
 	{ "name": "image_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_0", "role": "ce0" }} , 
 	{ "name": "image_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "image_0", "role": "d0" }} , 
 	{ "name": "image_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "image_0", "role": "q0" }} , 
 	{ "name": "image_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_0", "role": "we0" }} , 
 	{ "name": "image_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "image_0", "role": "address1" }} , 
 	{ "name": "image_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_0", "role": "ce1" }} , 
 	{ "name": "image_0_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "image_0", "role": "d1" }} , 
 	{ "name": "image_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "image_0", "role": "q1" }} , 
 	{ "name": "image_0_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_0", "role": "we1" }} , 
 	{ "name": "image_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "image_1", "role": "address0" }} , 
 	{ "name": "image_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_1", "role": "ce0" }} , 
 	{ "name": "image_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "image_1", "role": "d0" }} , 
 	{ "name": "image_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "image_1", "role": "q0" }} , 
 	{ "name": "image_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_1", "role": "we0" }} , 
 	{ "name": "image_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "image_1", "role": "address1" }} , 
 	{ "name": "image_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_1", "role": "ce1" }} , 
 	{ "name": "image_1_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "image_1", "role": "d1" }} , 
 	{ "name": "image_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "image_1", "role": "q1" }} , 
 	{ "name": "image_1_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_1", "role": "we1" }} , 
 	{ "name": "image_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "image_2", "role": "address0" }} , 
 	{ "name": "image_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_2", "role": "ce0" }} , 
 	{ "name": "image_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "image_2", "role": "d0" }} , 
 	{ "name": "image_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "image_2", "role": "q0" }} , 
 	{ "name": "image_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_2", "role": "we0" }} , 
 	{ "name": "image_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "image_2", "role": "address1" }} , 
 	{ "name": "image_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_2", "role": "ce1" }} , 
 	{ "name": "image_2_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "image_2", "role": "d1" }} , 
 	{ "name": "image_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "image_2", "role": "q1" }} , 
 	{ "name": "image_2_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_2", "role": "we1" }} , 
 	{ "name": "output_r_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "output_r", "role": "address0" }} , 
 	{ "name": "output_r_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_r", "role": "ce0" }} , 
 	{ "name": "output_r_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_r", "role": "d0" }} , 
 	{ "name": "output_r_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_r", "role": "q0" }} , 
 	{ "name": "output_r_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_r", "role": "we0" }} , 
 	{ "name": "output_r_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "output_r", "role": "address1" }} , 
 	{ "name": "output_r_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_r", "role": "ce1" }} , 
 	{ "name": "output_r_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_r", "role": "d1" }} , 
 	{ "name": "output_r_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_r", "role": "q1" }} , 
 	{ "name": "output_r_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_r", "role": "we1" }} , 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "15", "16", "34", "35", "53", "71", "88", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162", "163", "164", "165", "166", "167", "168", "169", "170"],
		"CDFG" : "topp",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "158119", "EstimateLatencyMax" : "158119",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "1", "Name" : "conv1_U0"}],
		"OutputProcess" : [
			{"ID" : "88", "Name" : "detection_head_U0"}],
		"Port" : [
			{"Name" : "image_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "in_0"}]},
			{"Name" : "image_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "in_1"}]},
			{"Name" : "image_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "in_2"}]},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "88", "SubInstance" : "detection_head_U0", "Port" : "out_r"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_U0", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14"],
		"CDFG" : "conv1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "153904", "EstimateLatencyMax" : "153904",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "in_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "in_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "15", "DependentChan" : "108",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "15", "DependentChan" : "109",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "15", "DependentChan" : "110",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "15", "DependentChan" : "111",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "15", "DependentChan" : "112",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "15", "DependentChan" : "113",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "15", "DependentChan" : "114",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "15", "DependentChan" : "115",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_fadd_32ns_32bkb_U1", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_fadd_32ns_32bkb_U2", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_fadd_32ns_32bkb_U3", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_fadd_32ns_32bkb_U4", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_fadd_32ns_32bkb_U5", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_fadd_32ns_32bkb_U6", "Parent" : "1"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_fmul_32ns_32cud_U7", "Parent" : "1"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_fmul_32ns_32cud_U8", "Parent" : "1"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_fmul_32ns_32cud_U9", "Parent" : "1"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_fmul_32ns_32cud_U10", "Parent" : "1"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_fmul_32ns_32cud_U11", "Parent" : "1"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_fmul_32ns_32cud_U12", "Parent" : "1"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_fcmp_32ns_32dEe_U13", "Parent" : "1"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.maxpool1_U0", "Parent" : "0",
		"CDFG" : "maxpool1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "7691", "EstimateLatencyMax" : "7691",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "1",
		"StartFifo" : "start_for_maxpoolg8j_U",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "16", "DependentChan" : "116",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "16", "DependentChan" : "117",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "16", "DependentChan" : "118",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "16", "DependentChan" : "119",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "16", "DependentChan" : "120",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "16", "DependentChan" : "121",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "16", "DependentChan" : "122",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "16", "DependentChan" : "123",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "108",
				"BlockSignal" : [
					{"Name" : "f1_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "109",
				"BlockSignal" : [
					{"Name" : "f1_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "110",
				"BlockSignal" : [
					{"Name" : "f1_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "111",
				"BlockSignal" : [
					{"Name" : "f1_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "112",
				"BlockSignal" : [
					{"Name" : "f1_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "113",
				"BlockSignal" : [
					{"Name" : "f1_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "114",
				"BlockSignal" : [
					{"Name" : "f1_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "115",
				"BlockSignal" : [
					{"Name" : "f1_7_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv2_U0", "Parent" : "0", "Child" : ["17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33"],
		"CDFG" : "conv2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "121464", "EstimateLatencyMax" : "121464",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "15",
		"StartFifo" : "start_for_conv2_U0_U",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "34", "DependentChan" : "124",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "34", "DependentChan" : "125",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "34", "DependentChan" : "126",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "34", "DependentChan" : "127",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "34", "DependentChan" : "128",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "34", "DependentChan" : "129",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "34", "DependentChan" : "130",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "34", "DependentChan" : "131",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "15", "DependentChan" : "116",
				"BlockSignal" : [
					{"Name" : "p1_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "15", "DependentChan" : "117",
				"BlockSignal" : [
					{"Name" : "p1_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "15", "DependentChan" : "118",
				"BlockSignal" : [
					{"Name" : "p1_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "15", "DependentChan" : "119",
				"BlockSignal" : [
					{"Name" : "p1_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "15", "DependentChan" : "120",
				"BlockSignal" : [
					{"Name" : "p1_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "15", "DependentChan" : "121",
				"BlockSignal" : [
					{"Name" : "p1_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "15", "DependentChan" : "122",
				"BlockSignal" : [
					{"Name" : "p1_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "15", "DependentChan" : "123",
				"BlockSignal" : [
					{"Name" : "p1_7_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fadd_32ns_32bkb_U44", "Parent" : "16"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fadd_32ns_32bkb_U45", "Parent" : "16"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fadd_32ns_32bkb_U46", "Parent" : "16"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fadd_32ns_32bkb_U47", "Parent" : "16"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fadd_32ns_32bkb_U48", "Parent" : "16"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fadd_32ns_32bkb_U49", "Parent" : "16"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fadd_32ns_32bkb_U50", "Parent" : "16"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fadd_32ns_32bkb_U51", "Parent" : "16"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fmul_32ns_32cud_U52", "Parent" : "16"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fmul_32ns_32cud_U53", "Parent" : "16"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fmul_32ns_32cud_U54", "Parent" : "16"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fmul_32ns_32cud_U55", "Parent" : "16"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fmul_32ns_32cud_U56", "Parent" : "16"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fmul_32ns_32cud_U57", "Parent" : "16"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fmul_32ns_32cud_U58", "Parent" : "16"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fmul_32ns_32cud_U59", "Parent" : "16"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fcmp_32ns_32dEe_U60", "Parent" : "16"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.maxpool2_U0", "Parent" : "0",
		"CDFG" : "maxpool2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "3139", "EstimateLatencyMax" : "3139",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "16",
		"StartFifo" : "start_for_maxpoolhbi_U",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "132",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "133",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "134",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "135",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "136",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "137",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "138",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "35", "DependentChan" : "139",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "16", "DependentChan" : "124",
				"BlockSignal" : [
					{"Name" : "f2_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "16", "DependentChan" : "125",
				"BlockSignal" : [
					{"Name" : "f2_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "16", "DependentChan" : "126",
				"BlockSignal" : [
					{"Name" : "f2_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "16", "DependentChan" : "127",
				"BlockSignal" : [
					{"Name" : "f2_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "16", "DependentChan" : "128",
				"BlockSignal" : [
					{"Name" : "f2_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "16", "DependentChan" : "129",
				"BlockSignal" : [
					{"Name" : "f2_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "16", "DependentChan" : "130",
				"BlockSignal" : [
					{"Name" : "f2_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "16", "DependentChan" : "131",
				"BlockSignal" : [
					{"Name" : "f2_7_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv3_U0", "Parent" : "0", "Child" : ["36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52"],
		"CDFG" : "conv3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "83655", "EstimateLatencyMax" : "83655",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "34",
		"StartFifo" : "start_for_conv3_U0_U",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "53", "DependentChan" : "140",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "53", "DependentChan" : "141",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "53", "DependentChan" : "142",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "53", "DependentChan" : "143",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "53", "DependentChan" : "144",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "53", "DependentChan" : "145",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "53", "DependentChan" : "146",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "53", "DependentChan" : "147",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "34", "DependentChan" : "132",
				"BlockSignal" : [
					{"Name" : "p2_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "34", "DependentChan" : "133",
				"BlockSignal" : [
					{"Name" : "p2_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "34", "DependentChan" : "134",
				"BlockSignal" : [
					{"Name" : "p2_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "34", "DependentChan" : "135",
				"BlockSignal" : [
					{"Name" : "p2_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "34", "DependentChan" : "136",
				"BlockSignal" : [
					{"Name" : "p2_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "34", "DependentChan" : "137",
				"BlockSignal" : [
					{"Name" : "p2_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "34", "DependentChan" : "138",
				"BlockSignal" : [
					{"Name" : "p2_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "34", "DependentChan" : "139",
				"BlockSignal" : [
					{"Name" : "p2_7_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fadd_32ns_32bkb_U93", "Parent" : "35"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fadd_32ns_32bkb_U94", "Parent" : "35"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fadd_32ns_32bkb_U95", "Parent" : "35"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fadd_32ns_32bkb_U96", "Parent" : "35"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fadd_32ns_32bkb_U97", "Parent" : "35"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fadd_32ns_32bkb_U98", "Parent" : "35"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fadd_32ns_32bkb_U99", "Parent" : "35"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fadd_32ns_32bkb_U100", "Parent" : "35"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fmul_32ns_32cud_U101", "Parent" : "35"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fmul_32ns_32cud_U102", "Parent" : "35"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fmul_32ns_32cud_U103", "Parent" : "35"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fmul_32ns_32cud_U104", "Parent" : "35"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fmul_32ns_32cud_U105", "Parent" : "35"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fmul_32ns_32cud_U106", "Parent" : "35"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fmul_32ns_32cud_U107", "Parent" : "35"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fmul_32ns_32cud_U108", "Parent" : "35"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fcmp_32ns_32dEe_U109", "Parent" : "35"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv4_U0", "Parent" : "0", "Child" : ["54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70"],
		"CDFG" : "conv4",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "116613", "EstimateLatencyMax" : "116613",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "35",
		"StartFifo" : "start_for_conv4_U0_U",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "148",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "149",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "150",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "151",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "152",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "153",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "154",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "71", "DependentChan" : "155",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "140",
				"BlockSignal" : [
					{"Name" : "f3_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "141",
				"BlockSignal" : [
					{"Name" : "f3_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "142",
				"BlockSignal" : [
					{"Name" : "f3_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "143",
				"BlockSignal" : [
					{"Name" : "f3_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "144",
				"BlockSignal" : [
					{"Name" : "f3_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "145",
				"BlockSignal" : [
					{"Name" : "f3_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "146",
				"BlockSignal" : [
					{"Name" : "f3_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "35", "DependentChan" : "147",
				"BlockSignal" : [
					{"Name" : "f3_7_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fadd_32ns_32bkb_U126", "Parent" : "53"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fadd_32ns_32bkb_U127", "Parent" : "53"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fadd_32ns_32bkb_U128", "Parent" : "53"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fadd_32ns_32bkb_U129", "Parent" : "53"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fadd_32ns_32bkb_U130", "Parent" : "53"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fadd_32ns_32bkb_U131", "Parent" : "53"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fadd_32ns_32bkb_U132", "Parent" : "53"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fadd_32ns_32bkb_U133", "Parent" : "53"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fmul_32ns_32cud_U134", "Parent" : "53"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fmul_32ns_32cud_U135", "Parent" : "53"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fmul_32ns_32cud_U136", "Parent" : "53"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fmul_32ns_32cud_U137", "Parent" : "53"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fmul_32ns_32cud_U138", "Parent" : "53"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fmul_32ns_32cud_U139", "Parent" : "53"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fmul_32ns_32cud_U140", "Parent" : "53"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fmul_32ns_32cud_U141", "Parent" : "53"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fcmp_32ns_32dEe_U142", "Parent" : "53"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv5_U0", "Parent" : "0", "Child" : ["72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87"],
		"CDFG" : "conv5",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "75140", "EstimateLatencyMax" : "75140",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "53",
		"StartFifo" : "start_for_conv5_U0_U",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "88", "DependentChan" : "156",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "88", "DependentChan" : "157",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "88", "DependentChan" : "158",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "88", "DependentChan" : "159",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "88", "DependentChan" : "160",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "88", "DependentChan" : "161",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "88", "DependentChan" : "162",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "88", "DependentChan" : "163",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "53", "DependentChan" : "148",
				"BlockSignal" : [
					{"Name" : "f4_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "53", "DependentChan" : "149",
				"BlockSignal" : [
					{"Name" : "f4_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "53", "DependentChan" : "150",
				"BlockSignal" : [
					{"Name" : "f4_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "53", "DependentChan" : "151",
				"BlockSignal" : [
					{"Name" : "f4_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "53", "DependentChan" : "152",
				"BlockSignal" : [
					{"Name" : "f4_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "53", "DependentChan" : "153",
				"BlockSignal" : [
					{"Name" : "f4_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "53", "DependentChan" : "154",
				"BlockSignal" : [
					{"Name" : "f4_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "53", "DependentChan" : "155",
				"BlockSignal" : [
					{"Name" : "f4_7_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_fadd_32ns_32bkb_U159", "Parent" : "71"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_fadd_32ns_32bkb_U160", "Parent" : "71"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_fadd_32ns_32bkb_U161", "Parent" : "71"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_fadd_32ns_32bkb_U162", "Parent" : "71"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_fadd_32ns_32bkb_U163", "Parent" : "71"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_fadd_32ns_32bkb_U164", "Parent" : "71"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_fadd_32ns_32bkb_U165", "Parent" : "71"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_fadd_32ns_32bkb_U166", "Parent" : "71"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_fmul_32ns_32cud_U167", "Parent" : "71"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_fmul_32ns_32cud_U168", "Parent" : "71"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_fmul_32ns_32cud_U169", "Parent" : "71"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_fmul_32ns_32cud_U170", "Parent" : "71"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_fmul_32ns_32cud_U171", "Parent" : "71"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_fmul_32ns_32cud_U172", "Parent" : "71"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_fmul_32ns_32cud_U173", "Parent" : "71"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_fmul_32ns_32cud_U174", "Parent" : "71"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.detection_head_U0", "Parent" : "0", "Child" : ["89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107"],
		"CDFG" : "detection_head",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "4290", "EstimateLatencyMax" : "4290",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "71",
		"StartFifo" : "start_for_detectiibs_U",
		"Port" : [
			{"Name" : "out_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "f5_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "156",
				"BlockSignal" : [
					{"Name" : "f5_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "157",
				"BlockSignal" : [
					{"Name" : "f5_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "158",
				"BlockSignal" : [
					{"Name" : "f5_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "159",
				"BlockSignal" : [
					{"Name" : "f5_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "160",
				"BlockSignal" : [
					{"Name" : "f5_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "161",
				"BlockSignal" : [
					{"Name" : "f5_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "162",
				"BlockSignal" : [
					{"Name" : "f5_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "71", "DependentChan" : "163",
				"BlockSignal" : [
					{"Name" : "f5_7_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fadd_32ns_32bkb_U191", "Parent" : "88"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fadd_32ns_32bkb_U192", "Parent" : "88"},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fadd_32ns_32bkb_U193", "Parent" : "88"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fadd_32ns_32bkb_U194", "Parent" : "88"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fadd_32ns_32bkb_U195", "Parent" : "88"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fadd_32ns_32bkb_U196", "Parent" : "88"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fadd_32ns_32bkb_U197", "Parent" : "88"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fadd_32ns_32bkb_U198", "Parent" : "88"},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fadd_32ns_32bkb_U199", "Parent" : "88"},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fmul_32ns_32cud_U200", "Parent" : "88"},
	{"ID" : "99", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fmul_32ns_32cud_U201", "Parent" : "88"},
	{"ID" : "100", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fmul_32ns_32cud_U202", "Parent" : "88"},
	{"ID" : "101", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fmul_32ns_32cud_U203", "Parent" : "88"},
	{"ID" : "102", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fmul_32ns_32cud_U204", "Parent" : "88"},
	{"ID" : "103", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fmul_32ns_32cud_U205", "Parent" : "88"},
	{"ID" : "104", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fmul_32ns_32cud_U206", "Parent" : "88"},
	{"ID" : "105", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fmul_32ns_32cud_U207", "Parent" : "88"},
	{"ID" : "106", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fdiv_32ns_32eOg_U208", "Parent" : "88"},
	{"ID" : "107", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fexp_32ns_32fYi_U209", "Parent" : "88"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_0_local_channel_U", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_1_local_channel_U", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_2_local_channel_U", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_3_local_channel_U", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_4_local_channel_U", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_5_local_channel_U", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_6_local_channel_U", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_7_local_channel_U", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_0_local_channel_U", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_1_local_channel_U", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_2_local_channel_U", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_3_local_channel_U", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_4_local_channel_U", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_5_local_channel_U", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_6_local_channel_U", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_7_local_channel_U", "Parent" : "0"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_0_local_channel_U", "Parent" : "0"},
	{"ID" : "125", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_1_local_channel_U", "Parent" : "0"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_2_local_channel_U", "Parent" : "0"},
	{"ID" : "127", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_3_local_channel_U", "Parent" : "0"},
	{"ID" : "128", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_4_local_channel_U", "Parent" : "0"},
	{"ID" : "129", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_5_local_channel_U", "Parent" : "0"},
	{"ID" : "130", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_6_local_channel_U", "Parent" : "0"},
	{"ID" : "131", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_7_local_channel_U", "Parent" : "0"},
	{"ID" : "132", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_0_local_channel_U", "Parent" : "0"},
	{"ID" : "133", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_1_local_channel_U", "Parent" : "0"},
	{"ID" : "134", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_2_local_channel_U", "Parent" : "0"},
	{"ID" : "135", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_3_local_channel_U", "Parent" : "0"},
	{"ID" : "136", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_4_local_channel_U", "Parent" : "0"},
	{"ID" : "137", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_5_local_channel_U", "Parent" : "0"},
	{"ID" : "138", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_6_local_channel_U", "Parent" : "0"},
	{"ID" : "139", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_7_local_channel_U", "Parent" : "0"},
	{"ID" : "140", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_0_local_channel_U", "Parent" : "0"},
	{"ID" : "141", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_1_local_channel_U", "Parent" : "0"},
	{"ID" : "142", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_2_local_channel_U", "Parent" : "0"},
	{"ID" : "143", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_3_local_channel_U", "Parent" : "0"},
	{"ID" : "144", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_4_local_channel_U", "Parent" : "0"},
	{"ID" : "145", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_5_local_channel_U", "Parent" : "0"},
	{"ID" : "146", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_6_local_channel_U", "Parent" : "0"},
	{"ID" : "147", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_7_local_channel_U", "Parent" : "0"},
	{"ID" : "148", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_0_local_channel_U", "Parent" : "0"},
	{"ID" : "149", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_1_local_channel_U", "Parent" : "0"},
	{"ID" : "150", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_2_local_channel_U", "Parent" : "0"},
	{"ID" : "151", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_3_local_channel_U", "Parent" : "0"},
	{"ID" : "152", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_4_local_channel_U", "Parent" : "0"},
	{"ID" : "153", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_5_local_channel_U", "Parent" : "0"},
	{"ID" : "154", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_6_local_channel_U", "Parent" : "0"},
	{"ID" : "155", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_7_local_channel_U", "Parent" : "0"},
	{"ID" : "156", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_0_local_channel_U", "Parent" : "0"},
	{"ID" : "157", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_1_local_channel_U", "Parent" : "0"},
	{"ID" : "158", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_2_local_channel_U", "Parent" : "0"},
	{"ID" : "159", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_3_local_channel_U", "Parent" : "0"},
	{"ID" : "160", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_4_local_channel_U", "Parent" : "0"},
	{"ID" : "161", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_5_local_channel_U", "Parent" : "0"},
	{"ID" : "162", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_6_local_channel_U", "Parent" : "0"},
	{"ID" : "163", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_7_local_channel_U", "Parent" : "0"},
	{"ID" : "164", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_maxpoolg8j_U", "Parent" : "0"},
	{"ID" : "165", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv2_U0_U", "Parent" : "0"},
	{"ID" : "166", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_maxpoolhbi_U", "Parent" : "0"},
	{"ID" : "167", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv3_U0_U", "Parent" : "0"},
	{"ID" : "168", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv4_U0_U", "Parent" : "0"},
	{"ID" : "169", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv5_U0_U", "Parent" : "0"},
	{"ID" : "170", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_detectiibs_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	topp {
		image_0 {Type I LastRead 7 FirstWrite -1}
		image_1 {Type I LastRead 7 FirstWrite -1}
		image_2 {Type I LastRead 7 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 197}}
	conv1 {
		in_0 {Type I LastRead 7 FirstWrite -1}
		in_1 {Type I LastRead 7 FirstWrite -1}
		in_2 {Type I LastRead 7 FirstWrite -1}
		out_0 {Type O LastRead -1 FirstWrite 148}
		out_1 {Type O LastRead -1 FirstWrite 148}
		out_2 {Type O LastRead -1 FirstWrite 148}
		out_3 {Type O LastRead -1 FirstWrite 148}
		out_4 {Type O LastRead -1 FirstWrite 148}
		out_5 {Type O LastRead -1 FirstWrite 148}
		out_6 {Type O LastRead -1 FirstWrite 148}
		out_7 {Type O LastRead -1 FirstWrite 148}}
	maxpool1 {
		out_0 {Type O LastRead -1 FirstWrite 3}
		out_1 {Type O LastRead -1 FirstWrite 3}
		out_2 {Type O LastRead -1 FirstWrite 3}
		out_3 {Type O LastRead -1 FirstWrite 3}
		out_4 {Type O LastRead -1 FirstWrite 3}
		out_5 {Type O LastRead -1 FirstWrite 3}
		out_6 {Type O LastRead -1 FirstWrite 3}
		out_7 {Type O LastRead -1 FirstWrite 3}
		f1_0 {Type I LastRead 2 FirstWrite -1}
		f1_1 {Type I LastRead 2 FirstWrite -1}
		f1_2 {Type I LastRead 2 FirstWrite -1}
		f1_3 {Type I LastRead 2 FirstWrite -1}
		f1_4 {Type I LastRead 2 FirstWrite -1}
		f1_5 {Type I LastRead 2 FirstWrite -1}
		f1_6 {Type I LastRead 2 FirstWrite -1}
		f1_7 {Type I LastRead 2 FirstWrite -1}}
	conv2 {
		out_0 {Type O LastRead -1 FirstWrite 368}
		out_1 {Type O LastRead -1 FirstWrite 368}
		out_2 {Type O LastRead -1 FirstWrite 368}
		out_3 {Type O LastRead -1 FirstWrite 368}
		out_4 {Type O LastRead -1 FirstWrite 368}
		out_5 {Type O LastRead -1 FirstWrite 368}
		out_6 {Type O LastRead -1 FirstWrite 368}
		out_7 {Type O LastRead -1 FirstWrite 368}
		p1_0 {Type I LastRead 10 FirstWrite -1}
		p1_1 {Type I LastRead 10 FirstWrite -1}
		p1_2 {Type I LastRead 10 FirstWrite -1}
		p1_3 {Type I LastRead 10 FirstWrite -1}
		p1_4 {Type I LastRead 10 FirstWrite -1}
		p1_5 {Type I LastRead 10 FirstWrite -1}
		p1_6 {Type I LastRead 10 FirstWrite -1}
		p1_7 {Type I LastRead 10 FirstWrite -1}}
	maxpool2 {
		out_0 {Type O LastRead -1 FirstWrite 3}
		out_1 {Type O LastRead -1 FirstWrite 3}
		out_2 {Type O LastRead -1 FirstWrite 3}
		out_3 {Type O LastRead -1 FirstWrite 3}
		out_4 {Type O LastRead -1 FirstWrite 3}
		out_5 {Type O LastRead -1 FirstWrite 3}
		out_6 {Type O LastRead -1 FirstWrite 3}
		out_7 {Type O LastRead -1 FirstWrite 3}
		f2_0 {Type I LastRead 2 FirstWrite -1}
		f2_1 {Type I LastRead 2 FirstWrite -1}
		f2_2 {Type I LastRead 2 FirstWrite -1}
		f2_3 {Type I LastRead 2 FirstWrite -1}
		f2_4 {Type I LastRead 2 FirstWrite -1}
		f2_5 {Type I LastRead 2 FirstWrite -1}
		f2_6 {Type I LastRead 2 FirstWrite -1}
		f2_7 {Type I LastRead 2 FirstWrite -1}}
	conv3 {
		out_0 {Type O LastRead -1 FirstWrite 728}
		out_1 {Type O LastRead -1 FirstWrite 728}
		out_2 {Type O LastRead -1 FirstWrite 728}
		out_3 {Type O LastRead -1 FirstWrite 728}
		out_4 {Type O LastRead -1 FirstWrite 728}
		out_5 {Type O LastRead -1 FirstWrite 728}
		out_6 {Type O LastRead -1 FirstWrite 728}
		out_7 {Type O LastRead -1 FirstWrite 728}
		p2_0 {Type I LastRead 19 FirstWrite -1}
		p2_1 {Type I LastRead 19 FirstWrite -1}
		p2_2 {Type I LastRead 19 FirstWrite -1}
		p2_3 {Type I LastRead 19 FirstWrite -1}
		p2_4 {Type I LastRead 19 FirstWrite -1}
		p2_5 {Type I LastRead 19 FirstWrite -1}
		p2_6 {Type I LastRead 19 FirstWrite -1}
		p2_7 {Type I LastRead 19 FirstWrite -1}}
	conv4 {
		out_0 {Type O LastRead -1 FirstWrite 1448}
		out_1 {Type O LastRead -1 FirstWrite 1448}
		out_2 {Type O LastRead -1 FirstWrite 1448}
		out_3 {Type O LastRead -1 FirstWrite 1448}
		out_4 {Type O LastRead -1 FirstWrite 1448}
		out_5 {Type O LastRead -1 FirstWrite 1448}
		out_6 {Type O LastRead -1 FirstWrite 1448}
		out_7 {Type O LastRead -1 FirstWrite 1448}
		f3_0 {Type I LastRead 37 FirstWrite -1}
		f3_1 {Type I LastRead 37 FirstWrite -1}
		f3_2 {Type I LastRead 37 FirstWrite -1}
		f3_3 {Type I LastRead 37 FirstWrite -1}
		f3_4 {Type I LastRead 37 FirstWrite -1}
		f3_5 {Type I LastRead 37 FirstWrite -1}
		f3_6 {Type I LastRead 37 FirstWrite -1}
		f3_7 {Type I LastRead 37 FirstWrite -1}}
	conv5 {
		out_0 {Type O LastRead -1 FirstWrite 1447}
		out_1 {Type O LastRead -1 FirstWrite 1447}
		out_2 {Type O LastRead -1 FirstWrite 1447}
		out_3 {Type O LastRead -1 FirstWrite 1447}
		out_4 {Type O LastRead -1 FirstWrite 1447}
		out_5 {Type O LastRead -1 FirstWrite 1447}
		out_6 {Type O LastRead -1 FirstWrite 1447}
		out_7 {Type O LastRead -1 FirstWrite 1447}
		f4_0 {Type I LastRead 37 FirstWrite -1}
		f4_1 {Type I LastRead 37 FirstWrite -1}
		f4_2 {Type I LastRead 37 FirstWrite -1}
		f4_3 {Type I LastRead 37 FirstWrite -1}
		f4_4 {Type I LastRead 37 FirstWrite -1}
		f4_5 {Type I LastRead 37 FirstWrite -1}
		f4_6 {Type I LastRead 37 FirstWrite -1}
		f4_7 {Type I LastRead 37 FirstWrite -1}}
	detection_head {
		out_r {Type O LastRead -1 FirstWrite 197}
		f5_0 {Type I LastRead 33 FirstWrite -1}
		f5_1 {Type I LastRead 33 FirstWrite -1}
		f5_2 {Type I LastRead 33 FirstWrite -1}
		f5_3 {Type I LastRead 33 FirstWrite -1}
		f5_4 {Type I LastRead 33 FirstWrite -1}
		f5_5 {Type I LastRead 33 FirstWrite -1}
		f5_6 {Type I LastRead 33 FirstWrite -1}
		f5_7 {Type I LastRead 33 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "158119", "Max" : "158119"}
	, {"Name" : "Interval", "Min" : "153905", "Max" : "153905"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	image_0 { ap_memory {  { image_0_address0 mem_address 1 12 }  { image_0_ce0 mem_ce 1 1 }  { image_0_d0 mem_din 1 32 }  { image_0_q0 mem_dout 0 32 }  { image_0_we0 mem_we 1 1 }  { image_0_address1 MemPortADDR2 1 12 }  { image_0_ce1 MemPortCE2 1 1 }  { image_0_d1 mem_din 1 32 }  { image_0_q1 MemPortDOUT2 0 32 }  { image_0_we1 mem_we 1 1 } } }
	image_1 { ap_memory {  { image_1_address0 mem_address 1 12 }  { image_1_ce0 mem_ce 1 1 }  { image_1_d0 mem_din 1 32 }  { image_1_q0 mem_dout 0 32 }  { image_1_we0 mem_we 1 1 }  { image_1_address1 MemPortADDR2 1 12 }  { image_1_ce1 MemPortCE2 1 1 }  { image_1_d1 mem_din 1 32 }  { image_1_q1 MemPortDOUT2 0 32 }  { image_1_we1 mem_we 1 1 } } }
	image_2 { ap_memory {  { image_2_address0 mem_address 1 12 }  { image_2_ce0 mem_ce 1 1 }  { image_2_d0 mem_din 1 32 }  { image_2_q0 mem_dout 0 32 }  { image_2_we0 mem_we 1 1 }  { image_2_address1 MemPortADDR2 1 12 }  { image_2_ce1 MemPortCE2 1 1 }  { image_2_d1 mem_din 1 32 }  { image_2_q1 MemPortDOUT2 0 32 }  { image_2_we1 mem_we 1 1 } } }
	output_r { ap_memory {  { output_r_address0 mem_address 1 10 }  { output_r_ce0 mem_ce 1 1 }  { output_r_d0 mem_din 1 32 }  { output_r_q0 mem_dout 0 32 }  { output_r_we0 mem_we 1 1 }  { output_r_address1 mem_address 1 10 }  { output_r_ce1 mem_ce 1 1 }  { output_r_d1 mem_din 1 32 }  { output_r_q1 mem_dout 0 32 }  { output_r_we1 mem_we 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
