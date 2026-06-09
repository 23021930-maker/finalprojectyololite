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
	{ image_r float 32 regular {array 12288 { 1 1 } 1 1 }  }
	{ output_r float 32 regular {array 1024 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "image_r", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "image","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 63,"step" : 1},{"low" : 0,"up" : 63,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}]} , 
 	{ "Name" : "output_r", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "output","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 7,"step" : 1},{"low" : 0,"up" : 7,"step" : 1},{"low" : 0,"up" : 15,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 26
set portList { 
	{ image_r_address0 sc_out sc_lv 14 signal 0 } 
	{ image_r_ce0 sc_out sc_logic 1 signal 0 } 
	{ image_r_d0 sc_out sc_lv 32 signal 0 } 
	{ image_r_q0 sc_in sc_lv 32 signal 0 } 
	{ image_r_we0 sc_out sc_logic 1 signal 0 } 
	{ image_r_address1 sc_out sc_lv 14 signal 0 } 
	{ image_r_ce1 sc_out sc_logic 1 signal 0 } 
	{ image_r_d1 sc_out sc_lv 32 signal 0 } 
	{ image_r_q1 sc_in sc_lv 32 signal 0 } 
	{ image_r_we1 sc_out sc_logic 1 signal 0 } 
	{ output_r_address0 sc_out sc_lv 10 signal 1 } 
	{ output_r_ce0 sc_out sc_logic 1 signal 1 } 
	{ output_r_d0 sc_out sc_lv 32 signal 1 } 
	{ output_r_q0 sc_in sc_lv 32 signal 1 } 
	{ output_r_we0 sc_out sc_logic 1 signal 1 } 
	{ output_r_address1 sc_out sc_lv 10 signal 1 } 
	{ output_r_ce1 sc_out sc_logic 1 signal 1 } 
	{ output_r_d1 sc_out sc_lv 32 signal 1 } 
	{ output_r_q1 sc_in sc_lv 32 signal 1 } 
	{ output_r_we1 sc_out sc_logic 1 signal 1 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
}
set NewPortList {[ 
	{ "name": "image_r_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "image_r", "role": "address0" }} , 
 	{ "name": "image_r_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_r", "role": "ce0" }} , 
 	{ "name": "image_r_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "image_r", "role": "d0" }} , 
 	{ "name": "image_r_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "image_r", "role": "q0" }} , 
 	{ "name": "image_r_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_r", "role": "we0" }} , 
 	{ "name": "image_r_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "image_r", "role": "address1" }} , 
 	{ "name": "image_r_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_r", "role": "ce1" }} , 
 	{ "name": "image_r_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "image_r", "role": "d1" }} , 
 	{ "name": "image_r_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "image_r", "role": "q1" }} , 
 	{ "name": "image_r_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_r", "role": "we1" }} , 
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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "5", "6", "15", "16", "33", "66", "99", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162", "163", "164", "165", "166"],
		"CDFG" : "topp",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "31110", "EstimateLatencyMax" : "57345",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "1", "Name" : "conv1_U0"}],
		"OutputProcess" : [
			{"ID" : "99", "Name" : "detection_head_U0"}],
		"Port" : [
			{"Name" : "image_r", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "in_r"}]},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "detection_head_U0", "Port" : "out_r"}]},
			{"Name" : "linbu_4_1_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "linbu_4_1_0"}]},
			{"Name" : "linbu_4_1_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "linbu_4_1_1"}]},
			{"Name" : "linbu_4_1_2", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "linbu_4_1_2"}]},
			{"Name" : "linbu_5_1_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1_0"}]},
			{"Name" : "linbu_5_1_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1_1"}]},
			{"Name" : "linbu_5_1_2", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1_2"}]},
			{"Name" : "linbu_5_1_3", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1_3"}]},
			{"Name" : "linbu_5_1_4", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1_4"}]},
			{"Name" : "linbu_5_1_5", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1_5"}]},
			{"Name" : "linbu_5_1_6", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1_6"}]},
			{"Name" : "linbu_5_1_7", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1_7"}]},
			{"Name" : "linbu_6_1_0_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_0_0"}]},
			{"Name" : "linbu_6_1_1_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_1_0"}]},
			{"Name" : "linbu_6_1_2_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_2_0"}]},
			{"Name" : "linbu_6_1_3_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_3_0"}]},
			{"Name" : "linbu_6_1_4_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_4_0"}]},
			{"Name" : "linbu_6_1_5_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_5_0"}]},
			{"Name" : "linbu_6_1_6_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_6_0"}]},
			{"Name" : "linbu_6_1_7_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_7_0"}]},
			{"Name" : "linbu_6_1_0_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_0_1"}]},
			{"Name" : "linbu_6_1_1_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_1_1"}]},
			{"Name" : "linbu_6_1_2_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_2_1"}]},
			{"Name" : "linbu_6_1_3_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_3_1"}]},
			{"Name" : "linbu_6_1_4_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_4_1"}]},
			{"Name" : "linbu_6_1_5_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_5_1"}]},
			{"Name" : "linbu_6_1_6_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_6_1"}]},
			{"Name" : "linbu_6_1_7_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "16", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_7_1"}]},
			{"Name" : "linbu_7_1_0_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_0_0"}]},
			{"Name" : "linbu_7_1_1_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_1_0"}]},
			{"Name" : "linbu_7_1_2_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_2_0"}]},
			{"Name" : "linbu_7_1_3_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_3_0"}]},
			{"Name" : "linbu_7_1_4_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_4_0"}]},
			{"Name" : "linbu_7_1_5_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_5_0"}]},
			{"Name" : "linbu_7_1_6_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_6_0"}]},
			{"Name" : "linbu_7_1_7_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_7_0"}]},
			{"Name" : "linbu_7_1_0_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_0_1"}]},
			{"Name" : "linbu_7_1_1_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_1_1"}]},
			{"Name" : "linbu_7_1_2_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_2_1"}]},
			{"Name" : "linbu_7_1_3_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_3_1"}]},
			{"Name" : "linbu_7_1_4_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_4_1"}]},
			{"Name" : "linbu_7_1_5_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_5_1"}]},
			{"Name" : "linbu_7_1_6_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_6_1"}]},
			{"Name" : "linbu_7_1_7_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_7_1"}]},
			{"Name" : "linbu_7_1_0_2", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_0_2"}]},
			{"Name" : "linbu_7_1_1_2", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_1_2"}]},
			{"Name" : "linbu_7_1_2_2", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_2_2"}]},
			{"Name" : "linbu_7_1_3_2", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_3_2"}]},
			{"Name" : "linbu_7_1_4_2", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_4_2"}]},
			{"Name" : "linbu_7_1_5_2", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_5_2"}]},
			{"Name" : "linbu_7_1_6_2", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_6_2"}]},
			{"Name" : "linbu_7_1_7_2", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_7_2"}]},
			{"Name" : "linbu_7_1_0_3", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_0_3"}]},
			{"Name" : "linbu_7_1_1_3", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_1_3"}]},
			{"Name" : "linbu_7_1_2_3", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_2_3"}]},
			{"Name" : "linbu_7_1_3_3", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_3_3"}]},
			{"Name" : "linbu_7_1_4_3", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_4_3"}]},
			{"Name" : "linbu_7_1_5_3", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_5_3"}]},
			{"Name" : "linbu_7_1_6_3", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_6_3"}]},
			{"Name" : "linbu_7_1_7_3", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_7_3"}]},
			{"Name" : "linbu_1_0_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_0_0"}]},
			{"Name" : "linbu_1_1_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_1_0"}]},
			{"Name" : "linbu_1_2_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_2_0"}]},
			{"Name" : "linbu_1_3_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_3_0"}]},
			{"Name" : "linbu_1_4_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_4_0"}]},
			{"Name" : "linbu_1_5_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_5_0"}]},
			{"Name" : "linbu_1_6_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_6_0"}]},
			{"Name" : "linbu_1_7_0", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_7_0"}]},
			{"Name" : "linbu_1_0_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_0_1"}]},
			{"Name" : "linbu_1_1_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_1_1"}]},
			{"Name" : "linbu_1_2_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_2_1"}]},
			{"Name" : "linbu_1_3_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_3_1"}]},
			{"Name" : "linbu_1_4_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_4_1"}]},
			{"Name" : "linbu_1_5_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_5_1"}]},
			{"Name" : "linbu_1_6_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_6_1"}]},
			{"Name" : "linbu_1_7_1", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_7_1"}]},
			{"Name" : "linbu_1_0_2", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_0_2"}]},
			{"Name" : "linbu_1_1_2", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_1_2"}]},
			{"Name" : "linbu_1_2_2", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_2_2"}]},
			{"Name" : "linbu_1_3_2", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_3_2"}]},
			{"Name" : "linbu_1_4_2", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_4_2"}]},
			{"Name" : "linbu_1_5_2", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_5_2"}]},
			{"Name" : "linbu_1_6_2", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_6_2"}]},
			{"Name" : "linbu_1_7_2", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_7_2"}]},
			{"Name" : "linbu_1_0_3", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_0_3"}]},
			{"Name" : "linbu_1_1_3", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_1_3"}]},
			{"Name" : "linbu_1_2_3", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_2_3"}]},
			{"Name" : "linbu_1_3_3", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_3_3"}]},
			{"Name" : "linbu_1_4_3", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_4_3"}]},
			{"Name" : "linbu_1_5_3", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_5_3"}]},
			{"Name" : "linbu_1_6_3", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_6_3"}]},
			{"Name" : "linbu_1_7_3", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "conv5_U0", "Port" : "linbu_1_7_3"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_U0", "Parent" : "0", "Child" : ["2", "3", "4"],
		"CDFG" : "conv1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "20481", "EstimateLatencyMax" : "57345",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "5", "DependentChan" : "104",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "5", "DependentChan" : "105",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "5", "DependentChan" : "106",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "5", "DependentChan" : "107",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "5", "DependentChan" : "108",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "5", "DependentChan" : "109",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "5", "DependentChan" : "110",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "5", "DependentChan" : "111",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "linbu_4_1_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_4_1_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_4_1_2", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.linbu_4_1_0_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.linbu_4_1_1_U", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.linbu_4_1_2_U", "Parent" : "1"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.maxpool1_U0", "Parent" : "0",
		"CDFG" : "maxpool1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "23809", "EstimateLatencyMax" : "23809",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "1",
		"StartFifo" : "start_for_maxpooleOg_U",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "112",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "113",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "114",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "115",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "116",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "117",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "118",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "6", "DependentChan" : "119",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "104",
				"BlockSignal" : [
					{"Name" : "f1_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "105",
				"BlockSignal" : [
					{"Name" : "f1_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "106",
				"BlockSignal" : [
					{"Name" : "f1_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "107",
				"BlockSignal" : [
					{"Name" : "f1_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "108",
				"BlockSignal" : [
					{"Name" : "f1_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "109",
				"BlockSignal" : [
					{"Name" : "f1_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "110",
				"BlockSignal" : [
					{"Name" : "f1_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "111",
				"BlockSignal" : [
					{"Name" : "f1_7_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv2_U0", "Parent" : "0", "Child" : ["7", "8", "9", "10", "11", "12", "13", "14"],
		"CDFG" : "conv2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1923", "EstimateLatencyMax" : "18260",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "5",
		"StartFifo" : "start_for_conv2_U0_U",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "15", "DependentChan" : "120",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "15", "DependentChan" : "121",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "15", "DependentChan" : "122",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "15", "DependentChan" : "123",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "15", "DependentChan" : "124",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "15", "DependentChan" : "125",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "15", "DependentChan" : "126",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "15", "DependentChan" : "127",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "5", "DependentChan" : "112",
				"BlockSignal" : [
					{"Name" : "p1_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "5", "DependentChan" : "113",
				"BlockSignal" : [
					{"Name" : "p1_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "5", "DependentChan" : "114",
				"BlockSignal" : [
					{"Name" : "p1_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "5", "DependentChan" : "115",
				"BlockSignal" : [
					{"Name" : "p1_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "5", "DependentChan" : "116",
				"BlockSignal" : [
					{"Name" : "p1_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "5", "DependentChan" : "117",
				"BlockSignal" : [
					{"Name" : "p1_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "5", "DependentChan" : "118",
				"BlockSignal" : [
					{"Name" : "p1_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "5", "DependentChan" : "119",
				"BlockSignal" : [
					{"Name" : "p1_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "linbu_5_1_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_5_1_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_5_1_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_5_1_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_5_1_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_5_1_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_5_1_6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_5_1_7", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_0_U", "Parent" : "6"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_1_U", "Parent" : "6"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_2_U", "Parent" : "6"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_3_U", "Parent" : "6"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_4_U", "Parent" : "6"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_5_U", "Parent" : "6"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_6_U", "Parent" : "6"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_7_U", "Parent" : "6"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.maxpool2_U0", "Parent" : "0",
		"CDFG" : "maxpool2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "9395", "EstimateLatencyMax" : "9395",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "6",
		"StartFifo" : "start_for_maxpoolfYi_U",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "16", "DependentChan" : "128",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "16", "DependentChan" : "129",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "16", "DependentChan" : "130",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "16", "DependentChan" : "131",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "16", "DependentChan" : "132",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "16", "DependentChan" : "133",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "16", "DependentChan" : "134",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "16", "DependentChan" : "135",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "120",
				"BlockSignal" : [
					{"Name" : "f2_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "121",
				"BlockSignal" : [
					{"Name" : "f2_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "122",
				"BlockSignal" : [
					{"Name" : "f2_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "123",
				"BlockSignal" : [
					{"Name" : "f2_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "124",
				"BlockSignal" : [
					{"Name" : "f2_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "125",
				"BlockSignal" : [
					{"Name" : "f2_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "126",
				"BlockSignal" : [
					{"Name" : "f2_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "127",
				"BlockSignal" : [
					{"Name" : "f2_7_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv3_U0", "Parent" : "0", "Child" : ["17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32"],
		"CDFG" : "conv3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "589", "EstimateLatencyMax" : "7057",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "15",
		"StartFifo" : "start_for_conv3_U0_U",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "33", "DependentChan" : "136",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "33", "DependentChan" : "137",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "33", "DependentChan" : "138",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "33", "DependentChan" : "139",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "33", "DependentChan" : "140",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "33", "DependentChan" : "141",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "33", "DependentChan" : "142",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "33", "DependentChan" : "143",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "15", "DependentChan" : "128",
				"BlockSignal" : [
					{"Name" : "p2_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "15", "DependentChan" : "129",
				"BlockSignal" : [
					{"Name" : "p2_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "15", "DependentChan" : "130",
				"BlockSignal" : [
					{"Name" : "p2_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "15", "DependentChan" : "131",
				"BlockSignal" : [
					{"Name" : "p2_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "15", "DependentChan" : "132",
				"BlockSignal" : [
					{"Name" : "p2_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "15", "DependentChan" : "133",
				"BlockSignal" : [
					{"Name" : "p2_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "15", "DependentChan" : "134",
				"BlockSignal" : [
					{"Name" : "p2_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "15", "DependentChan" : "135",
				"BlockSignal" : [
					{"Name" : "p2_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "linbu_6_1_0_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_6_1_1_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_6_1_2_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_6_1_3_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_6_1_4_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_6_1_5_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_6_1_6_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_6_1_7_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_6_1_0_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_6_1_1_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_6_1_2_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_6_1_3_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_6_1_4_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_6_1_5_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_6_1_6_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_6_1_7_1", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_0_0_U", "Parent" : "16"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_1_0_U", "Parent" : "16"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_2_0_U", "Parent" : "16"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_3_0_U", "Parent" : "16"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_4_0_U", "Parent" : "16"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_5_0_U", "Parent" : "16"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_6_0_U", "Parent" : "16"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_7_0_U", "Parent" : "16"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_0_1_U", "Parent" : "16"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_1_1_U", "Parent" : "16"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_2_1_U", "Parent" : "16"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_3_1_U", "Parent" : "16"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_4_1_U", "Parent" : "16"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_5_1_U", "Parent" : "16"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_6_1_U", "Parent" : "16"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_7_1_U", "Parent" : "16"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv4_U0", "Parent" : "0", "Child" : ["34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65"],
		"CDFG" : "conv4",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "721", "EstimateLatencyMax" : "5473",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "16",
		"StartFifo" : "start_for_conv4_U0_U",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "66", "DependentChan" : "144",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "66", "DependentChan" : "145",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "66", "DependentChan" : "146",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "66", "DependentChan" : "147",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "66", "DependentChan" : "148",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "66", "DependentChan" : "149",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "66", "DependentChan" : "150",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "66", "DependentChan" : "151",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "16", "DependentChan" : "136",
				"BlockSignal" : [
					{"Name" : "f3_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "16", "DependentChan" : "137",
				"BlockSignal" : [
					{"Name" : "f3_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "16", "DependentChan" : "138",
				"BlockSignal" : [
					{"Name" : "f3_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "16", "DependentChan" : "139",
				"BlockSignal" : [
					{"Name" : "f3_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "16", "DependentChan" : "140",
				"BlockSignal" : [
					{"Name" : "f3_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "16", "DependentChan" : "141",
				"BlockSignal" : [
					{"Name" : "f3_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "16", "DependentChan" : "142",
				"BlockSignal" : [
					{"Name" : "f3_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "16", "DependentChan" : "143",
				"BlockSignal" : [
					{"Name" : "f3_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "linbu_7_1_0_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_1_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_2_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_3_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_4_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_5_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_6_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_7_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_0_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_1_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_2_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_3_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_4_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_5_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_6_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_7_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_0_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_1_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_2_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_3_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_4_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_5_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_6_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_7_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_0_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_1_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_2_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_3_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_4_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_5_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_6_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_7_1_7_3", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_0_0_U", "Parent" : "33"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_1_0_U", "Parent" : "33"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_2_0_U", "Parent" : "33"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_3_0_U", "Parent" : "33"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_4_0_U", "Parent" : "33"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_5_0_U", "Parent" : "33"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_6_0_U", "Parent" : "33"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_7_0_U", "Parent" : "33"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_0_1_U", "Parent" : "33"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_1_1_U", "Parent" : "33"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_2_1_U", "Parent" : "33"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_3_1_U", "Parent" : "33"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_4_1_U", "Parent" : "33"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_5_1_U", "Parent" : "33"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_6_1_U", "Parent" : "33"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_7_1_U", "Parent" : "33"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_0_2_U", "Parent" : "33"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_1_2_U", "Parent" : "33"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_2_2_U", "Parent" : "33"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_3_2_U", "Parent" : "33"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_4_2_U", "Parent" : "33"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_5_2_U", "Parent" : "33"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_6_2_U", "Parent" : "33"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_7_2_U", "Parent" : "33"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_0_3_U", "Parent" : "33"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_1_3_U", "Parent" : "33"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_2_3_U", "Parent" : "33"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_3_3_U", "Parent" : "33"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_4_3_U", "Parent" : "33"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_5_3_U", "Parent" : "33"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_6_3_U", "Parent" : "33"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_7_3_U", "Parent" : "33"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv5_U0", "Parent" : "0", "Child" : ["67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98"],
		"CDFG" : "conv5",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "501", "EstimateLatencyMax" : "3801",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "33",
		"StartFifo" : "start_for_conv5_U0_U",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "152",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "153",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "154",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "155",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "156",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "157",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "158",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "99", "DependentChan" : "159",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "33", "DependentChan" : "144",
				"BlockSignal" : [
					{"Name" : "f4_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "33", "DependentChan" : "145",
				"BlockSignal" : [
					{"Name" : "f4_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "33", "DependentChan" : "146",
				"BlockSignal" : [
					{"Name" : "f4_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "33", "DependentChan" : "147",
				"BlockSignal" : [
					{"Name" : "f4_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "33", "DependentChan" : "148",
				"BlockSignal" : [
					{"Name" : "f4_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "33", "DependentChan" : "149",
				"BlockSignal" : [
					{"Name" : "f4_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "33", "DependentChan" : "150",
				"BlockSignal" : [
					{"Name" : "f4_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "33", "DependentChan" : "151",
				"BlockSignal" : [
					{"Name" : "f4_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "linbu_1_0_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_1_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_2_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_3_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_4_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_5_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_6_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_7_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_0_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_1_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_2_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_3_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_4_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_5_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_6_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_7_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_0_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_1_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_2_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_3_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_4_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_5_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_6_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_7_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_0_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_1_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_2_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_3_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_4_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_5_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_6_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "linbu_1_7_3", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_0_0_U", "Parent" : "66"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_1_0_U", "Parent" : "66"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_2_0_U", "Parent" : "66"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_3_0_U", "Parent" : "66"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_4_0_U", "Parent" : "66"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_5_0_U", "Parent" : "66"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_6_0_U", "Parent" : "66"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_7_0_U", "Parent" : "66"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_0_1_U", "Parent" : "66"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_1_1_U", "Parent" : "66"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_2_1_U", "Parent" : "66"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_3_1_U", "Parent" : "66"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_4_1_U", "Parent" : "66"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_5_1_U", "Parent" : "66"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_6_1_U", "Parent" : "66"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_7_1_U", "Parent" : "66"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_0_2_U", "Parent" : "66"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_1_2_U", "Parent" : "66"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_2_2_U", "Parent" : "66"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_3_2_U", "Parent" : "66"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_4_2_U", "Parent" : "66"},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_5_2_U", "Parent" : "66"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_6_2_U", "Parent" : "66"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_7_2_U", "Parent" : "66"},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_0_3_U", "Parent" : "66"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_1_3_U", "Parent" : "66"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_2_3_U", "Parent" : "66"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_3_3_U", "Parent" : "66"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_4_3_U", "Parent" : "66"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_5_3_U", "Parent" : "66"},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_6_3_U", "Parent" : "66"},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_7_3_U", "Parent" : "66"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.detection_head_U0", "Parent" : "0", "Child" : ["100", "101", "102", "103"],
		"CDFG" : "detection_head",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "31041", "EstimateLatencyMax" : "31041",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "66",
		"StartFifo" : "start_for_detectig8j_U",
		"Port" : [
			{"Name" : "out_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "f5_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "66", "DependentChan" : "152",
				"BlockSignal" : [
					{"Name" : "f5_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "66", "DependentChan" : "153",
				"BlockSignal" : [
					{"Name" : "f5_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "66", "DependentChan" : "154",
				"BlockSignal" : [
					{"Name" : "f5_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "66", "DependentChan" : "155",
				"BlockSignal" : [
					{"Name" : "f5_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "66", "DependentChan" : "156",
				"BlockSignal" : [
					{"Name" : "f5_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "66", "DependentChan" : "157",
				"BlockSignal" : [
					{"Name" : "f5_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "66", "DependentChan" : "158",
				"BlockSignal" : [
					{"Name" : "f5_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "66", "DependentChan" : "159",
				"BlockSignal" : [
					{"Name" : "f5_7_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "100", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fadd_32ns_32bkb_U111", "Parent" : "99"},
	{"ID" : "101", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_frecip_32ns_cud_U112", "Parent" : "99"},
	{"ID" : "102", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fexp_32ns_32dEe_U113", "Parent" : "99"},
	{"ID" : "103", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_mux_164_32_1_1_U114", "Parent" : "99"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_0_local_channel_U", "Parent" : "0"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_1_local_channel_U", "Parent" : "0"},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_2_local_channel_U", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_3_local_channel_U", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_4_local_channel_U", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_5_local_channel_U", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_6_local_channel_U", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_7_local_channel_U", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_0_local_channel_U", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_1_local_channel_U", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_2_local_channel_U", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_3_local_channel_U", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_4_local_channel_U", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_5_local_channel_U", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_6_local_channel_U", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_7_local_channel_U", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_0_local_channel_U", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_1_local_channel_U", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_2_local_channel_U", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_3_local_channel_U", "Parent" : "0"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_4_local_channel_U", "Parent" : "0"},
	{"ID" : "125", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_5_local_channel_U", "Parent" : "0"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_6_local_channel_U", "Parent" : "0"},
	{"ID" : "127", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_7_local_channel_U", "Parent" : "0"},
	{"ID" : "128", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_0_local_channel_U", "Parent" : "0"},
	{"ID" : "129", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_1_local_channel_U", "Parent" : "0"},
	{"ID" : "130", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_2_local_channel_U", "Parent" : "0"},
	{"ID" : "131", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_3_local_channel_U", "Parent" : "0"},
	{"ID" : "132", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_4_local_channel_U", "Parent" : "0"},
	{"ID" : "133", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_5_local_channel_U", "Parent" : "0"},
	{"ID" : "134", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_6_local_channel_U", "Parent" : "0"},
	{"ID" : "135", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_7_local_channel_U", "Parent" : "0"},
	{"ID" : "136", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_0_local_channel_U", "Parent" : "0"},
	{"ID" : "137", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_1_local_channel_U", "Parent" : "0"},
	{"ID" : "138", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_2_local_channel_U", "Parent" : "0"},
	{"ID" : "139", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_3_local_channel_U", "Parent" : "0"},
	{"ID" : "140", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_4_local_channel_U", "Parent" : "0"},
	{"ID" : "141", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_5_local_channel_U", "Parent" : "0"},
	{"ID" : "142", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_6_local_channel_U", "Parent" : "0"},
	{"ID" : "143", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_7_local_channel_U", "Parent" : "0"},
	{"ID" : "144", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_0_local_channel_U", "Parent" : "0"},
	{"ID" : "145", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_1_local_channel_U", "Parent" : "0"},
	{"ID" : "146", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_2_local_channel_U", "Parent" : "0"},
	{"ID" : "147", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_3_local_channel_U", "Parent" : "0"},
	{"ID" : "148", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_4_local_channel_U", "Parent" : "0"},
	{"ID" : "149", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_5_local_channel_U", "Parent" : "0"},
	{"ID" : "150", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_6_local_channel_U", "Parent" : "0"},
	{"ID" : "151", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_7_local_channel_U", "Parent" : "0"},
	{"ID" : "152", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_0_local_channel_U", "Parent" : "0"},
	{"ID" : "153", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_1_local_channel_U", "Parent" : "0"},
	{"ID" : "154", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_2_local_channel_U", "Parent" : "0"},
	{"ID" : "155", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_3_local_channel_U", "Parent" : "0"},
	{"ID" : "156", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_4_local_channel_U", "Parent" : "0"},
	{"ID" : "157", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_5_local_channel_U", "Parent" : "0"},
	{"ID" : "158", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_6_local_channel_U", "Parent" : "0"},
	{"ID" : "159", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_7_local_channel_U", "Parent" : "0"},
	{"ID" : "160", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_maxpooleOg_U", "Parent" : "0"},
	{"ID" : "161", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv2_U0_U", "Parent" : "0"},
	{"ID" : "162", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_maxpoolfYi_U", "Parent" : "0"},
	{"ID" : "163", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv3_U0_U", "Parent" : "0"},
	{"ID" : "164", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv4_U0_U", "Parent" : "0"},
	{"ID" : "165", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv5_U0_U", "Parent" : "0"},
	{"ID" : "166", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_detectig8j_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	topp {
		image_r {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 30}
		linbu_4_1_0 {Type O LastRead -1 FirstWrite -1}
		linbu_4_1_1 {Type O LastRead -1 FirstWrite -1}
		linbu_4_1_2 {Type O LastRead -1 FirstWrite -1}
		linbu_5_1_0 {Type O LastRead -1 FirstWrite -1}
		linbu_5_1_1 {Type O LastRead -1 FirstWrite -1}
		linbu_5_1_2 {Type O LastRead -1 FirstWrite -1}
		linbu_5_1_3 {Type O LastRead -1 FirstWrite -1}
		linbu_5_1_4 {Type O LastRead -1 FirstWrite -1}
		linbu_5_1_5 {Type O LastRead -1 FirstWrite -1}
		linbu_5_1_6 {Type O LastRead -1 FirstWrite -1}
		linbu_5_1_7 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_0_0 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_1_0 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_2_0 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_3_0 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_4_0 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_5_0 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_6_0 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_7_0 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_0_1 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_1_1 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_2_1 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_3_1 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_4_1 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_5_1 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_6_1 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_7_1 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_0_0 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_1_0 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_2_0 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_3_0 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_4_0 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_5_0 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_6_0 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_7_0 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_0_1 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_1_1 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_2_1 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_3_1 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_4_1 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_5_1 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_6_1 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_7_1 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_0_2 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_1_2 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_2_2 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_3_2 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_4_2 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_5_2 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_6_2 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_7_2 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_0_3 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_1_3 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_2_3 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_3_3 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_4_3 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_5_3 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_6_3 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_7_3 {Type O LastRead -1 FirstWrite -1}
		linbu_1_0_0 {Type O LastRead -1 FirstWrite -1}
		linbu_1_1_0 {Type O LastRead -1 FirstWrite -1}
		linbu_1_2_0 {Type O LastRead -1 FirstWrite -1}
		linbu_1_3_0 {Type O LastRead -1 FirstWrite -1}
		linbu_1_4_0 {Type O LastRead -1 FirstWrite -1}
		linbu_1_5_0 {Type O LastRead -1 FirstWrite -1}
		linbu_1_6_0 {Type O LastRead -1 FirstWrite -1}
		linbu_1_7_0 {Type O LastRead -1 FirstWrite -1}
		linbu_1_0_1 {Type O LastRead -1 FirstWrite -1}
		linbu_1_1_1 {Type O LastRead -1 FirstWrite -1}
		linbu_1_2_1 {Type O LastRead -1 FirstWrite -1}
		linbu_1_3_1 {Type O LastRead -1 FirstWrite -1}
		linbu_1_4_1 {Type O LastRead -1 FirstWrite -1}
		linbu_1_5_1 {Type O LastRead -1 FirstWrite -1}
		linbu_1_6_1 {Type O LastRead -1 FirstWrite -1}
		linbu_1_7_1 {Type O LastRead -1 FirstWrite -1}
		linbu_1_0_2 {Type O LastRead -1 FirstWrite -1}
		linbu_1_1_2 {Type O LastRead -1 FirstWrite -1}
		linbu_1_2_2 {Type O LastRead -1 FirstWrite -1}
		linbu_1_3_2 {Type O LastRead -1 FirstWrite -1}
		linbu_1_4_2 {Type O LastRead -1 FirstWrite -1}
		linbu_1_5_2 {Type O LastRead -1 FirstWrite -1}
		linbu_1_6_2 {Type O LastRead -1 FirstWrite -1}
		linbu_1_7_2 {Type O LastRead -1 FirstWrite -1}
		linbu_1_0_3 {Type O LastRead -1 FirstWrite -1}
		linbu_1_1_3 {Type O LastRead -1 FirstWrite -1}
		linbu_1_2_3 {Type O LastRead -1 FirstWrite -1}
		linbu_1_3_3 {Type O LastRead -1 FirstWrite -1}
		linbu_1_4_3 {Type O LastRead -1 FirstWrite -1}
		linbu_1_5_3 {Type O LastRead -1 FirstWrite -1}
		linbu_1_6_3 {Type O LastRead -1 FirstWrite -1}
		linbu_1_7_3 {Type O LastRead -1 FirstWrite -1}}
	conv1 {
		in_r {Type I LastRead 4 FirstWrite -1}
		out_0 {Type O LastRead -1 FirstWrite 6}
		out_1 {Type O LastRead -1 FirstWrite 6}
		out_2 {Type O LastRead -1 FirstWrite 6}
		out_3 {Type O LastRead -1 FirstWrite 6}
		out_4 {Type O LastRead -1 FirstWrite 6}
		out_5 {Type O LastRead -1 FirstWrite 6}
		out_6 {Type O LastRead -1 FirstWrite 6}
		out_7 {Type O LastRead -1 FirstWrite 6}
		linbu_4_1_0 {Type O LastRead -1 FirstWrite -1}
		linbu_4_1_1 {Type O LastRead -1 FirstWrite -1}
		linbu_4_1_2 {Type O LastRead -1 FirstWrite -1}}
	maxpool1 {
		out_0 {Type O LastRead -1 FirstWrite 3}
		out_1 {Type O LastRead -1 FirstWrite 3}
		out_2 {Type O LastRead -1 FirstWrite 3}
		out_3 {Type O LastRead -1 FirstWrite 3}
		out_4 {Type O LastRead -1 FirstWrite 3}
		out_5 {Type O LastRead -1 FirstWrite 3}
		out_6 {Type O LastRead -1 FirstWrite 3}
		out_7 {Type O LastRead -1 FirstWrite 3}
		f1_0 {Type I LastRead 32 FirstWrite -1}
		f1_1 {Type I LastRead 32 FirstWrite -1}
		f1_2 {Type I LastRead 32 FirstWrite -1}
		f1_3 {Type I LastRead 32 FirstWrite -1}
		f1_4 {Type I LastRead 32 FirstWrite -1}
		f1_5 {Type I LastRead 32 FirstWrite -1}
		f1_6 {Type I LastRead 32 FirstWrite -1}
		f1_7 {Type I LastRead 32 FirstWrite -1}}
	conv2 {
		out_0 {Type O LastRead -1 FirstWrite 3}
		out_1 {Type O LastRead -1 FirstWrite 3}
		out_2 {Type O LastRead -1 FirstWrite 3}
		out_3 {Type O LastRead -1 FirstWrite 3}
		out_4 {Type O LastRead -1 FirstWrite 3}
		out_5 {Type O LastRead -1 FirstWrite 3}
		out_6 {Type O LastRead -1 FirstWrite 3}
		out_7 {Type O LastRead -1 FirstWrite 3}
		p1_0 {Type I LastRead 1 FirstWrite -1}
		p1_1 {Type I LastRead 1 FirstWrite -1}
		p1_2 {Type I LastRead 1 FirstWrite -1}
		p1_3 {Type I LastRead 1 FirstWrite -1}
		p1_4 {Type I LastRead 1 FirstWrite -1}
		p1_5 {Type I LastRead 1 FirstWrite -1}
		p1_6 {Type I LastRead 1 FirstWrite -1}
		p1_7 {Type I LastRead 1 FirstWrite -1}
		linbu_5_1_0 {Type O LastRead -1 FirstWrite -1}
		linbu_5_1_1 {Type O LastRead -1 FirstWrite -1}
		linbu_5_1_2 {Type O LastRead -1 FirstWrite -1}
		linbu_5_1_3 {Type O LastRead -1 FirstWrite -1}
		linbu_5_1_4 {Type O LastRead -1 FirstWrite -1}
		linbu_5_1_5 {Type O LastRead -1 FirstWrite -1}
		linbu_5_1_6 {Type O LastRead -1 FirstWrite -1}
		linbu_5_1_7 {Type O LastRead -1 FirstWrite -1}}
	maxpool2 {
		out_0 {Type O LastRead -1 FirstWrite 3}
		out_1 {Type O LastRead -1 FirstWrite 3}
		out_2 {Type O LastRead -1 FirstWrite 3}
		out_3 {Type O LastRead -1 FirstWrite 3}
		out_4 {Type O LastRead -1 FirstWrite 3}
		out_5 {Type O LastRead -1 FirstWrite 3}
		out_6 {Type O LastRead -1 FirstWrite 3}
		out_7 {Type O LastRead -1 FirstWrite 3}
		f2_0 {Type I LastRead 15 FirstWrite -1}
		f2_1 {Type I LastRead 15 FirstWrite -1}
		f2_2 {Type I LastRead 15 FirstWrite -1}
		f2_3 {Type I LastRead 15 FirstWrite -1}
		f2_4 {Type I LastRead 15 FirstWrite -1}
		f2_5 {Type I LastRead 15 FirstWrite -1}
		f2_6 {Type I LastRead 15 FirstWrite -1}
		f2_7 {Type I LastRead 15 FirstWrite -1}}
	conv3 {
		out_0 {Type O LastRead -1 FirstWrite 4}
		out_1 {Type O LastRead -1 FirstWrite 4}
		out_2 {Type O LastRead -1 FirstWrite 4}
		out_3 {Type O LastRead -1 FirstWrite 4}
		out_4 {Type O LastRead -1 FirstWrite 4}
		out_5 {Type O LastRead -1 FirstWrite 4}
		out_6 {Type O LastRead -1 FirstWrite 4}
		out_7 {Type O LastRead -1 FirstWrite 4}
		p2_0 {Type I LastRead 2 FirstWrite -1}
		p2_1 {Type I LastRead 2 FirstWrite -1}
		p2_2 {Type I LastRead 2 FirstWrite -1}
		p2_3 {Type I LastRead 2 FirstWrite -1}
		p2_4 {Type I LastRead 2 FirstWrite -1}
		p2_5 {Type I LastRead 2 FirstWrite -1}
		p2_6 {Type I LastRead 2 FirstWrite -1}
		p2_7 {Type I LastRead 2 FirstWrite -1}
		linbu_6_1_0_0 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_1_0 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_2_0 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_3_0 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_4_0 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_5_0 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_6_0 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_7_0 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_0_1 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_1_1 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_2_1 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_3_1 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_4_1 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_5_1 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_6_1 {Type O LastRead -1 FirstWrite -1}
		linbu_6_1_7_1 {Type O LastRead -1 FirstWrite -1}}
	conv4 {
		out_0 {Type O LastRead -1 FirstWrite 6}
		out_1 {Type O LastRead -1 FirstWrite 6}
		out_2 {Type O LastRead -1 FirstWrite 6}
		out_3 {Type O LastRead -1 FirstWrite 6}
		out_4 {Type O LastRead -1 FirstWrite 6}
		out_5 {Type O LastRead -1 FirstWrite 6}
		out_6 {Type O LastRead -1 FirstWrite 6}
		out_7 {Type O LastRead -1 FirstWrite 6}
		f3_0 {Type I LastRead 4 FirstWrite -1}
		f3_1 {Type I LastRead 4 FirstWrite -1}
		f3_2 {Type I LastRead 4 FirstWrite -1}
		f3_3 {Type I LastRead 4 FirstWrite -1}
		f3_4 {Type I LastRead 4 FirstWrite -1}
		f3_5 {Type I LastRead 4 FirstWrite -1}
		f3_6 {Type I LastRead 4 FirstWrite -1}
		f3_7 {Type I LastRead 4 FirstWrite -1}
		linbu_7_1_0_0 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_1_0 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_2_0 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_3_0 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_4_0 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_5_0 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_6_0 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_7_0 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_0_1 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_1_1 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_2_1 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_3_1 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_4_1 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_5_1 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_6_1 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_7_1 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_0_2 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_1_2 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_2_2 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_3_2 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_4_2 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_5_2 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_6_2 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_7_2 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_0_3 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_1_3 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_2_3 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_3_3 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_4_3 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_5_3 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_6_3 {Type O LastRead -1 FirstWrite -1}
		linbu_7_1_7_3 {Type O LastRead -1 FirstWrite -1}}
	conv5 {
		out_0 {Type O LastRead -1 FirstWrite 6}
		out_1 {Type O LastRead -1 FirstWrite 6}
		out_2 {Type O LastRead -1 FirstWrite 6}
		out_3 {Type O LastRead -1 FirstWrite 6}
		out_4 {Type O LastRead -1 FirstWrite 6}
		out_5 {Type O LastRead -1 FirstWrite 6}
		out_6 {Type O LastRead -1 FirstWrite 6}
		out_7 {Type O LastRead -1 FirstWrite 6}
		f4_0 {Type I LastRead 4 FirstWrite -1}
		f4_1 {Type I LastRead 4 FirstWrite -1}
		f4_2 {Type I LastRead 4 FirstWrite -1}
		f4_3 {Type I LastRead 4 FirstWrite -1}
		f4_4 {Type I LastRead 4 FirstWrite -1}
		f4_5 {Type I LastRead 4 FirstWrite -1}
		f4_6 {Type I LastRead 4 FirstWrite -1}
		f4_7 {Type I LastRead 4 FirstWrite -1}
		linbu_1_0_0 {Type O LastRead -1 FirstWrite -1}
		linbu_1_1_0 {Type O LastRead -1 FirstWrite -1}
		linbu_1_2_0 {Type O LastRead -1 FirstWrite -1}
		linbu_1_3_0 {Type O LastRead -1 FirstWrite -1}
		linbu_1_4_0 {Type O LastRead -1 FirstWrite -1}
		linbu_1_5_0 {Type O LastRead -1 FirstWrite -1}
		linbu_1_6_0 {Type O LastRead -1 FirstWrite -1}
		linbu_1_7_0 {Type O LastRead -1 FirstWrite -1}
		linbu_1_0_1 {Type O LastRead -1 FirstWrite -1}
		linbu_1_1_1 {Type O LastRead -1 FirstWrite -1}
		linbu_1_2_1 {Type O LastRead -1 FirstWrite -1}
		linbu_1_3_1 {Type O LastRead -1 FirstWrite -1}
		linbu_1_4_1 {Type O LastRead -1 FirstWrite -1}
		linbu_1_5_1 {Type O LastRead -1 FirstWrite -1}
		linbu_1_6_1 {Type O LastRead -1 FirstWrite -1}
		linbu_1_7_1 {Type O LastRead -1 FirstWrite -1}
		linbu_1_0_2 {Type O LastRead -1 FirstWrite -1}
		linbu_1_1_2 {Type O LastRead -1 FirstWrite -1}
		linbu_1_2_2 {Type O LastRead -1 FirstWrite -1}
		linbu_1_3_2 {Type O LastRead -1 FirstWrite -1}
		linbu_1_4_2 {Type O LastRead -1 FirstWrite -1}
		linbu_1_5_2 {Type O LastRead -1 FirstWrite -1}
		linbu_1_6_2 {Type O LastRead -1 FirstWrite -1}
		linbu_1_7_2 {Type O LastRead -1 FirstWrite -1}
		linbu_1_0_3 {Type O LastRead -1 FirstWrite -1}
		linbu_1_1_3 {Type O LastRead -1 FirstWrite -1}
		linbu_1_2_3 {Type O LastRead -1 FirstWrite -1}
		linbu_1_3_3 {Type O LastRead -1 FirstWrite -1}
		linbu_1_4_3 {Type O LastRead -1 FirstWrite -1}
		linbu_1_5_3 {Type O LastRead -1 FirstWrite -1}
		linbu_1_6_3 {Type O LastRead -1 FirstWrite -1}
		linbu_1_7_3 {Type O LastRead -1 FirstWrite -1}}
	detection_head {
		out_r {Type O LastRead -1 FirstWrite 30}
		f5_0 {Type I LastRead 4 FirstWrite -1}
		f5_1 {Type I LastRead 4 FirstWrite -1}
		f5_2 {Type I LastRead 4 FirstWrite -1}
		f5_3 {Type I LastRead 4 FirstWrite -1}
		f5_4 {Type I LastRead 4 FirstWrite -1}
		f5_5 {Type I LastRead 4 FirstWrite -1}
		f5_6 {Type I LastRead 4 FirstWrite -1}
		f5_7 {Type I LastRead 4 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "31110", "Max" : "57345"}
	, {"Name" : "Interval", "Min" : "31042", "Max" : "57346"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	image_r { ap_memory {  { image_r_address0 mem_address 1 14 }  { image_r_ce0 mem_ce 1 1 }  { image_r_d0 mem_din 1 32 }  { image_r_q0 mem_dout 0 32 }  { image_r_we0 mem_we 1 1 }  { image_r_address1 MemPortADDR2 1 14 }  { image_r_ce1 MemPortCE2 1 1 }  { image_r_d1 mem_din 1 32 }  { image_r_q1 MemPortDOUT2 0 32 }  { image_r_we1 mem_we 1 1 } } }
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
