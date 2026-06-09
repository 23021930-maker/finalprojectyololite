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
	{ image_r float 32 regular {array 12288 { 1 3 } 1 1 }  }
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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "20", "21", "50", "51", "152", "253", "353", "362", "363", "364", "365", "366", "367", "368", "369", "370", "371", "372", "373", "374", "375", "376", "377", "378", "379", "380", "381", "382", "383", "384", "385", "386", "387", "388", "389", "390", "391", "392", "393", "394", "395", "396", "397", "398", "399", "400", "401", "402", "403", "404", "405", "406", "407", "408", "409", "410", "411", "412", "413", "414", "415", "416", "417", "418", "419", "420", "421", "422", "423", "424"],
		"CDFG" : "topp",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "292951", "EstimateLatencyMax" : "14846249",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "1", "Name" : "conv1_U0"}],
		"OutputProcess" : [
			{"ID" : "353", "Name" : "detection_head_U0"}],
		"Port" : [
			{"Name" : "image_r", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "in_r"}]},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "353", "SubInstance" : "detection_head_U0", "Port" : "out_r"}]},
			{"Name" : "linbu_4_0_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "linbu_4_0_0"}]},
			{"Name" : "linbu_4_0_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "linbu_4_0_1"}]},
			{"Name" : "linbu_4_0_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "linbu_4_0_2"}]},
			{"Name" : "linbu_4_1_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "linbu_4_1_0"}]},
			{"Name" : "linbu_4_1_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "linbu_4_1_1"}]},
			{"Name" : "linbu_4_1_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "conv1_U0", "Port" : "linbu_4_1_2"}]},
			{"Name" : "linbu_5_0_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "conv2_U0", "Port" : "linbu_5_0_0"}]},
			{"Name" : "linbu_5_0_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "conv2_U0", "Port" : "linbu_5_0_1"}]},
			{"Name" : "linbu_5_0_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "conv2_U0", "Port" : "linbu_5_0_2"}]},
			{"Name" : "linbu_5_0_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "conv2_U0", "Port" : "linbu_5_0_3"}]},
			{"Name" : "linbu_5_0_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "conv2_U0", "Port" : "linbu_5_0_4"}]},
			{"Name" : "linbu_5_0_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "conv2_U0", "Port" : "linbu_5_0_5"}]},
			{"Name" : "linbu_5_0_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "conv2_U0", "Port" : "linbu_5_0_6"}]},
			{"Name" : "linbu_5_0_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "conv2_U0", "Port" : "linbu_5_0_7"}]},
			{"Name" : "linbu_5_1_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1_0"}]},
			{"Name" : "linbu_5_1_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1_1"}]},
			{"Name" : "linbu_5_1_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1_2"}]},
			{"Name" : "linbu_5_1_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1_3"}]},
			{"Name" : "linbu_5_1_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1_4"}]},
			{"Name" : "linbu_5_1_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1_5"}]},
			{"Name" : "linbu_5_1_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1_6"}]},
			{"Name" : "linbu_5_1_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "conv2_U0", "Port" : "linbu_5_1_7"}]},
			{"Name" : "linbu_6_0_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0_0"}]},
			{"Name" : "linbu_6_0_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0_1"}]},
			{"Name" : "linbu_6_0_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0_2"}]},
			{"Name" : "linbu_6_0_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0_3"}]},
			{"Name" : "linbu_6_0_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0_4"}]},
			{"Name" : "linbu_6_0_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0_5"}]},
			{"Name" : "linbu_6_0_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0_6"}]},
			{"Name" : "linbu_6_0_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv3_U0", "Port" : "linbu_6_0_7"}]},
			{"Name" : "linbu_6_1_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_0"}]},
			{"Name" : "linbu_6_1_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_1"}]},
			{"Name" : "linbu_6_1_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_2"}]},
			{"Name" : "linbu_6_1_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_3"}]},
			{"Name" : "linbu_6_1_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_4"}]},
			{"Name" : "linbu_6_1_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_5"}]},
			{"Name" : "linbu_6_1_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_6"}]},
			{"Name" : "linbu_6_1_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "conv3_U0", "Port" : "linbu_6_1_7"}]},
			{"Name" : "linbu_7_0_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "152", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_0"}]},
			{"Name" : "linbu_7_0_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "152", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_1"}]},
			{"Name" : "linbu_7_0_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "152", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_2"}]},
			{"Name" : "linbu_7_0_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "152", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_3"}]},
			{"Name" : "linbu_7_0_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "152", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_4"}]},
			{"Name" : "linbu_7_0_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "152", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_5"}]},
			{"Name" : "linbu_7_0_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "152", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_6"}]},
			{"Name" : "linbu_7_0_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "152", "SubInstance" : "conv4_U0", "Port" : "linbu_7_0_7"}]},
			{"Name" : "linbu_7_1_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "152", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_0"}]},
			{"Name" : "linbu_7_1_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "152", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_1"}]},
			{"Name" : "linbu_7_1_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "152", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_2"}]},
			{"Name" : "linbu_7_1_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "152", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_3"}]},
			{"Name" : "linbu_7_1_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "152", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_4"}]},
			{"Name" : "linbu_7_1_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "152", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_5"}]},
			{"Name" : "linbu_7_1_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "152", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_6"}]},
			{"Name" : "linbu_7_1_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "152", "SubInstance" : "conv4_U0", "Port" : "linbu_7_1_7"}]},
			{"Name" : "linbu_0_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "253", "SubInstance" : "conv5_U0", "Port" : "linbu_0_0"}]},
			{"Name" : "linbu_0_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "253", "SubInstance" : "conv5_U0", "Port" : "linbu_0_1"}]},
			{"Name" : "linbu_0_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "253", "SubInstance" : "conv5_U0", "Port" : "linbu_0_2"}]},
			{"Name" : "linbu_0_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "253", "SubInstance" : "conv5_U0", "Port" : "linbu_0_3"}]},
			{"Name" : "linbu_0_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "253", "SubInstance" : "conv5_U0", "Port" : "linbu_0_4"}]},
			{"Name" : "linbu_0_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "253", "SubInstance" : "conv5_U0", "Port" : "linbu_0_5"}]},
			{"Name" : "linbu_0_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "253", "SubInstance" : "conv5_U0", "Port" : "linbu_0_6"}]},
			{"Name" : "linbu_0_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "253", "SubInstance" : "conv5_U0", "Port" : "linbu_0_7"}]},
			{"Name" : "linbu_1_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "253", "SubInstance" : "conv5_U0", "Port" : "linbu_1_0"}]},
			{"Name" : "linbu_1_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "253", "SubInstance" : "conv5_U0", "Port" : "linbu_1_1"}]},
			{"Name" : "linbu_1_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "253", "SubInstance" : "conv5_U0", "Port" : "linbu_1_2"}]},
			{"Name" : "linbu_1_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "253", "SubInstance" : "conv5_U0", "Port" : "linbu_1_3"}]},
			{"Name" : "linbu_1_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "253", "SubInstance" : "conv5_U0", "Port" : "linbu_1_4"}]},
			{"Name" : "linbu_1_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "253", "SubInstance" : "conv5_U0", "Port" : "linbu_1_5"}]},
			{"Name" : "linbu_1_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "253", "SubInstance" : "conv5_U0", "Port" : "linbu_1_6"}]},
			{"Name" : "linbu_1_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "253", "SubInstance" : "conv5_U0", "Port" : "linbu_1_7"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_U0", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19"],
		"CDFG" : "conv1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "36993", "EstimateLatencyMax" : "9801857",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "20", "DependentChan" : "362",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "20", "DependentChan" : "363",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "20", "DependentChan" : "364",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "20", "DependentChan" : "365",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "20", "DependentChan" : "366",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "20", "DependentChan" : "367",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "20", "DependentChan" : "368",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "20", "DependentChan" : "369",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "linbu_4_0_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_4_0_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_4_0_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_4_1_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_4_1_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_4_1_2", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.linbu_4_0_0_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.linbu_4_0_1_U", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.linbu_4_0_2_U", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.linbu_4_1_0_U", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.linbu_4_1_1_U", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.linbu_4_1_2_U", "Parent" : "1"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_fadd_32ns_32bkb_U1", "Parent" : "1"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_fmul_32ns_32cud_U2", "Parent" : "1"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_fcmp_32ns_32dEe_U3", "Parent" : "1"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_mux_32_32_1_1_U4", "Parent" : "1"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_mux_32_32_1_1_U5", "Parent" : "1"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_mux_32_32_1_1_U6", "Parent" : "1"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_mux_32_32_1_1_U7", "Parent" : "1"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_mux_32_32_1_1_U8", "Parent" : "1"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_mux_32_32_1_1_U9", "Parent" : "1"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_mux_32_32_1_1_U10", "Parent" : "1"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_mux_32_32_1_1_U11", "Parent" : "1"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv1_U0.topp_mux_275_32_1_1_U12", "Parent" : "1"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.maxpool1_U0", "Parent" : "0",
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
		"StartFifo" : "start_for_maxpoolg8j_U",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "21", "DependentChan" : "370",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "21", "DependentChan" : "371",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "21", "DependentChan" : "372",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "21", "DependentChan" : "373",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "21", "DependentChan" : "374",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "21", "DependentChan" : "375",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "21", "DependentChan" : "376",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "21", "DependentChan" : "377",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "362",
				"BlockSignal" : [
					{"Name" : "f1_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "363",
				"BlockSignal" : [
					{"Name" : "f1_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "364",
				"BlockSignal" : [
					{"Name" : "f1_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "365",
				"BlockSignal" : [
					{"Name" : "f1_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "366",
				"BlockSignal" : [
					{"Name" : "f1_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "367",
				"BlockSignal" : [
					{"Name" : "f1_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "368",
				"BlockSignal" : [
					{"Name" : "f1_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f1_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "1", "DependentChan" : "369",
				"BlockSignal" : [
					{"Name" : "f1_7_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv2_U0", "Parent" : "0", "Child" : ["22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49"],
		"CDFG" : "conv2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "102890", "EstimateLatencyMax" : "11604138",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "20",
		"StartFifo" : "start_for_conv2_U0_U",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "50", "DependentChan" : "378",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "50", "DependentChan" : "379",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "50", "DependentChan" : "380",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "50", "DependentChan" : "381",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "50", "DependentChan" : "382",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "50", "DependentChan" : "383",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "50", "DependentChan" : "384",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "50", "DependentChan" : "385",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "20", "DependentChan" : "370",
				"BlockSignal" : [
					{"Name" : "p1_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "20", "DependentChan" : "371",
				"BlockSignal" : [
					{"Name" : "p1_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "20", "DependentChan" : "372",
				"BlockSignal" : [
					{"Name" : "p1_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "20", "DependentChan" : "373",
				"BlockSignal" : [
					{"Name" : "p1_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "20", "DependentChan" : "374",
				"BlockSignal" : [
					{"Name" : "p1_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "20", "DependentChan" : "375",
				"BlockSignal" : [
					{"Name" : "p1_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "20", "DependentChan" : "376",
				"BlockSignal" : [
					{"Name" : "p1_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "20", "DependentChan" : "377",
				"BlockSignal" : [
					{"Name" : "p1_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "linbu_5_0_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_0_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_0_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_0_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_0_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_0_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_0_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_0_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_1_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_1_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_1_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_1_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_1_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_1_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_1_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_5_1_7", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_0_0_U", "Parent" : "21"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_0_1_U", "Parent" : "21"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_0_2_U", "Parent" : "21"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_0_3_U", "Parent" : "21"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_0_4_U", "Parent" : "21"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_0_5_U", "Parent" : "21"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_0_6_U", "Parent" : "21"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_0_7_U", "Parent" : "21"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_0_U", "Parent" : "21"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_1_U", "Parent" : "21"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_2_U", "Parent" : "21"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_3_U", "Parent" : "21"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_4_U", "Parent" : "21"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_5_U", "Parent" : "21"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_6_U", "Parent" : "21"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.linbu_5_1_7_U", "Parent" : "21"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fadd_32ns_32bkb_U44", "Parent" : "21"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fmul_32ns_32cud_U45", "Parent" : "21"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_fcmp_32ns_32dEe_U46", "Parent" : "21"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_mux_83_32_1_1_U47", "Parent" : "21"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_mux_83_32_1_1_U48", "Parent" : "21"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_mux_83_32_1_1_U49", "Parent" : "21"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_mux_83_32_1_1_U50", "Parent" : "21"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_mux_83_32_1_1_U51", "Parent" : "21"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_mux_83_32_1_1_U52", "Parent" : "21"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_mux_83_32_1_1_U53", "Parent" : "21"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_mux_83_32_1_1_U54", "Parent" : "21"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv2_U0.topp_mux_727_32_1_1_U55", "Parent" : "21"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.maxpool2_U0", "Parent" : "0",
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
		"StartSource" : "21",
		"StartFifo" : "start_for_maxpoolhbi_U",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "51", "DependentChan" : "386",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "51", "DependentChan" : "387",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "51", "DependentChan" : "388",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "51", "DependentChan" : "389",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "51", "DependentChan" : "390",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "51", "DependentChan" : "391",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "51", "DependentChan" : "392",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "51", "DependentChan" : "393",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "21", "DependentChan" : "378",
				"BlockSignal" : [
					{"Name" : "f2_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "21", "DependentChan" : "379",
				"BlockSignal" : [
					{"Name" : "f2_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "21", "DependentChan" : "380",
				"BlockSignal" : [
					{"Name" : "f2_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "21", "DependentChan" : "381",
				"BlockSignal" : [
					{"Name" : "f2_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "21", "DependentChan" : "382",
				"BlockSignal" : [
					{"Name" : "f2_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "21", "DependentChan" : "383",
				"BlockSignal" : [
					{"Name" : "f2_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "21", "DependentChan" : "384",
				"BlockSignal" : [
					{"Name" : "f2_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f2_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "21", "DependentChan" : "385",
				"BlockSignal" : [
					{"Name" : "f2_7_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv3_U0", "Parent" : "0", "Child" : ["52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151"],
		"CDFG" : "conv3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "47657", "EstimateLatencyMax" : "10158121",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "50",
		"StartFifo" : "start_for_conv3_U0_U",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "152", "DependentChan" : "394",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "152", "DependentChan" : "395",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "152", "DependentChan" : "396",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "152", "DependentChan" : "397",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "152", "DependentChan" : "398",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "152", "DependentChan" : "399",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "152", "DependentChan" : "400",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "152", "DependentChan" : "401",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "386",
				"BlockSignal" : [
					{"Name" : "p2_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "387",
				"BlockSignal" : [
					{"Name" : "p2_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "388",
				"BlockSignal" : [
					{"Name" : "p2_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "389",
				"BlockSignal" : [
					{"Name" : "p2_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "390",
				"BlockSignal" : [
					{"Name" : "p2_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "391",
				"BlockSignal" : [
					{"Name" : "p2_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "392",
				"BlockSignal" : [
					{"Name" : "p2_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "50", "DependentChan" : "393",
				"BlockSignal" : [
					{"Name" : "p2_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "linbu_6_0_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_7", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_0_U", "Parent" : "51"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_1_U", "Parent" : "51"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_2_U", "Parent" : "51"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_3_U", "Parent" : "51"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_4_U", "Parent" : "51"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_5_U", "Parent" : "51"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_6_U", "Parent" : "51"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_0_7_U", "Parent" : "51"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_0_U", "Parent" : "51"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_1_U", "Parent" : "51"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_2_U", "Parent" : "51"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_3_U", "Parent" : "51"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_4_U", "Parent" : "51"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_5_U", "Parent" : "51"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_6_U", "Parent" : "51"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.linbu_6_1_7_U", "Parent" : "51"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_0_0_U", "Parent" : "51"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_0_1_U", "Parent" : "51"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_0_2_U", "Parent" : "51"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_0_3_U", "Parent" : "51"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_0_4_U", "Parent" : "51"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_0_5_U", "Parent" : "51"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_0_6_U", "Parent" : "51"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_0_7_U", "Parent" : "51"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_1_0_U", "Parent" : "51"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_1_1_U", "Parent" : "51"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_1_2_U", "Parent" : "51"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_1_3_U", "Parent" : "51"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_1_4_U", "Parent" : "51"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_1_5_U", "Parent" : "51"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_1_6_U", "Parent" : "51"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_1_7_U", "Parent" : "51"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_2_0_U", "Parent" : "51"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_2_1_U", "Parent" : "51"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_2_2_U", "Parent" : "51"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_2_3_U", "Parent" : "51"},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_2_4_U", "Parent" : "51"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_2_5_U", "Parent" : "51"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_2_6_U", "Parent" : "51"},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_0_2_7_U", "Parent" : "51"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_0_0_U", "Parent" : "51"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_0_1_U", "Parent" : "51"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_0_2_U", "Parent" : "51"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_0_3_U", "Parent" : "51"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_0_4_U", "Parent" : "51"},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_0_5_U", "Parent" : "51"},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_0_6_U", "Parent" : "51"},
	{"ID" : "99", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_0_7_U", "Parent" : "51"},
	{"ID" : "100", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_1_0_U", "Parent" : "51"},
	{"ID" : "101", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_1_1_U", "Parent" : "51"},
	{"ID" : "102", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_1_2_U", "Parent" : "51"},
	{"ID" : "103", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_1_3_U", "Parent" : "51"},
	{"ID" : "104", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_1_4_U", "Parent" : "51"},
	{"ID" : "105", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_1_5_U", "Parent" : "51"},
	{"ID" : "106", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_1_6_U", "Parent" : "51"},
	{"ID" : "107", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_1_7_U", "Parent" : "51"},
	{"ID" : "108", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_2_0_U", "Parent" : "51"},
	{"ID" : "109", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_2_1_U", "Parent" : "51"},
	{"ID" : "110", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_2_2_U", "Parent" : "51"},
	{"ID" : "111", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_2_3_U", "Parent" : "51"},
	{"ID" : "112", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_2_4_U", "Parent" : "51"},
	{"ID" : "113", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_2_5_U", "Parent" : "51"},
	{"ID" : "114", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_2_6_U", "Parent" : "51"},
	{"ID" : "115", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_1_2_7_U", "Parent" : "51"},
	{"ID" : "116", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_0_0_U", "Parent" : "51"},
	{"ID" : "117", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_0_1_U", "Parent" : "51"},
	{"ID" : "118", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_0_2_U", "Parent" : "51"},
	{"ID" : "119", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_0_3_U", "Parent" : "51"},
	{"ID" : "120", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_0_4_U", "Parent" : "51"},
	{"ID" : "121", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_0_5_U", "Parent" : "51"},
	{"ID" : "122", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_0_6_U", "Parent" : "51"},
	{"ID" : "123", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_0_7_U", "Parent" : "51"},
	{"ID" : "124", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_1_0_U", "Parent" : "51"},
	{"ID" : "125", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_1_1_U", "Parent" : "51"},
	{"ID" : "126", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_1_2_U", "Parent" : "51"},
	{"ID" : "127", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_1_3_U", "Parent" : "51"},
	{"ID" : "128", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_1_4_U", "Parent" : "51"},
	{"ID" : "129", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_1_5_U", "Parent" : "51"},
	{"ID" : "130", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_1_6_U", "Parent" : "51"},
	{"ID" : "131", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_1_7_U", "Parent" : "51"},
	{"ID" : "132", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_2_0_U", "Parent" : "51"},
	{"ID" : "133", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_2_1_U", "Parent" : "51"},
	{"ID" : "134", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_2_2_U", "Parent" : "51"},
	{"ID" : "135", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_2_3_U", "Parent" : "51"},
	{"ID" : "136", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_2_4_U", "Parent" : "51"},
	{"ID" : "137", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_2_5_U", "Parent" : "51"},
	{"ID" : "138", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_2_6_U", "Parent" : "51"},
	{"ID" : "139", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.win_buf_2_2_7_U", "Parent" : "51"},
	{"ID" : "140", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fadd_32ns_32bkb_U91", "Parent" : "51"},
	{"ID" : "141", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fmul_32ns_32cud_U92", "Parent" : "51"},
	{"ID" : "142", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_fcmp_32ns_32dEe_U93", "Parent" : "51"},
	{"ID" : "143", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_mux_832_32_1_1_U94", "Parent" : "51"},
	{"ID" : "144", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_mux_832_32_1_1_U95", "Parent" : "51"},
	{"ID" : "145", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_mux_832_32_1_1_U96", "Parent" : "51"},
	{"ID" : "146", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_mux_832_32_1_1_U97", "Parent" : "51"},
	{"ID" : "147", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_mux_832_32_1_1_U98", "Parent" : "51"},
	{"ID" : "148", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_mux_832_32_1_1_U99", "Parent" : "51"},
	{"ID" : "149", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_mux_832_32_1_1_U100", "Parent" : "51"},
	{"ID" : "150", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_mux_832_32_1_1_U101", "Parent" : "51"},
	{"ID" : "151", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv3_U0.topp_mux_727_32_1_1_U102", "Parent" : "51"},
	{"ID" : "152", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv4_U0", "Parent" : "0", "Child" : ["153", "154", "155", "156", "157", "158", "159", "160", "161", "162", "163", "164", "165", "166", "167", "168", "169", "170", "171", "172", "173", "174", "175", "176", "177", "178", "179", "180", "181", "182", "183", "184", "185", "186", "187", "188", "189", "190", "191", "192", "193", "194", "195", "196", "197", "198", "199", "200", "201", "202", "203", "204", "205", "206", "207", "208", "209", "210", "211", "212", "213", "214", "215", "216", "217", "218", "219", "220", "221", "222", "223", "224", "225", "226", "227", "228", "229", "230", "231", "232", "233", "234", "235", "236", "237", "238", "239", "240", "241", "242", "243", "244", "245", "246", "247", "248", "249", "250", "251", "252"],
		"CDFG" : "conv4",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "69577", "EstimateLatencyMax" : "14796745",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "51",
		"StartFifo" : "start_for_conv4_U0_U",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "253", "DependentChan" : "402",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "253", "DependentChan" : "403",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "253", "DependentChan" : "404",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "253", "DependentChan" : "405",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "253", "DependentChan" : "406",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "253", "DependentChan" : "407",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "253", "DependentChan" : "408",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "253", "DependentChan" : "409",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "394",
				"BlockSignal" : [
					{"Name" : "f3_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "395",
				"BlockSignal" : [
					{"Name" : "f3_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "396",
				"BlockSignal" : [
					{"Name" : "f3_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "397",
				"BlockSignal" : [
					{"Name" : "f3_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "398",
				"BlockSignal" : [
					{"Name" : "f3_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "399",
				"BlockSignal" : [
					{"Name" : "f3_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "400",
				"BlockSignal" : [
					{"Name" : "f3_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f3_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "51", "DependentChan" : "401",
				"BlockSignal" : [
					{"Name" : "f3_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "linbu_7_0_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_0_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_7_1_7", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "153", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_0_U", "Parent" : "152"},
	{"ID" : "154", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_1_U", "Parent" : "152"},
	{"ID" : "155", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_2_U", "Parent" : "152"},
	{"ID" : "156", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_3_U", "Parent" : "152"},
	{"ID" : "157", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_4_U", "Parent" : "152"},
	{"ID" : "158", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_5_U", "Parent" : "152"},
	{"ID" : "159", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_6_U", "Parent" : "152"},
	{"ID" : "160", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_0_7_U", "Parent" : "152"},
	{"ID" : "161", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_0_U", "Parent" : "152"},
	{"ID" : "162", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_1_U", "Parent" : "152"},
	{"ID" : "163", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_2_U", "Parent" : "152"},
	{"ID" : "164", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_3_U", "Parent" : "152"},
	{"ID" : "165", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_4_U", "Parent" : "152"},
	{"ID" : "166", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_5_U", "Parent" : "152"},
	{"ID" : "167", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_6_U", "Parent" : "152"},
	{"ID" : "168", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.linbu_7_1_7_U", "Parent" : "152"},
	{"ID" : "169", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_0_0_U", "Parent" : "152"},
	{"ID" : "170", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_0_1_U", "Parent" : "152"},
	{"ID" : "171", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_0_2_U", "Parent" : "152"},
	{"ID" : "172", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_0_3_U", "Parent" : "152"},
	{"ID" : "173", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_0_4_U", "Parent" : "152"},
	{"ID" : "174", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_0_5_U", "Parent" : "152"},
	{"ID" : "175", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_0_6_U", "Parent" : "152"},
	{"ID" : "176", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_0_7_U", "Parent" : "152"},
	{"ID" : "177", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_1_0_U", "Parent" : "152"},
	{"ID" : "178", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_1_1_U", "Parent" : "152"},
	{"ID" : "179", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_1_2_U", "Parent" : "152"},
	{"ID" : "180", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_1_3_U", "Parent" : "152"},
	{"ID" : "181", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_1_4_U", "Parent" : "152"},
	{"ID" : "182", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_1_5_U", "Parent" : "152"},
	{"ID" : "183", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_1_6_U", "Parent" : "152"},
	{"ID" : "184", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_1_7_U", "Parent" : "152"},
	{"ID" : "185", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_2_0_U", "Parent" : "152"},
	{"ID" : "186", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_2_1_U", "Parent" : "152"},
	{"ID" : "187", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_2_2_U", "Parent" : "152"},
	{"ID" : "188", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_2_3_U", "Parent" : "152"},
	{"ID" : "189", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_2_4_U", "Parent" : "152"},
	{"ID" : "190", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_2_5_U", "Parent" : "152"},
	{"ID" : "191", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_2_6_U", "Parent" : "152"},
	{"ID" : "192", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_0_2_7_U", "Parent" : "152"},
	{"ID" : "193", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_0_0_U", "Parent" : "152"},
	{"ID" : "194", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_0_1_U", "Parent" : "152"},
	{"ID" : "195", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_0_2_U", "Parent" : "152"},
	{"ID" : "196", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_0_3_U", "Parent" : "152"},
	{"ID" : "197", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_0_4_U", "Parent" : "152"},
	{"ID" : "198", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_0_5_U", "Parent" : "152"},
	{"ID" : "199", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_0_6_U", "Parent" : "152"},
	{"ID" : "200", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_0_7_U", "Parent" : "152"},
	{"ID" : "201", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_1_0_U", "Parent" : "152"},
	{"ID" : "202", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_1_1_U", "Parent" : "152"},
	{"ID" : "203", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_1_2_U", "Parent" : "152"},
	{"ID" : "204", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_1_3_U", "Parent" : "152"},
	{"ID" : "205", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_1_4_U", "Parent" : "152"},
	{"ID" : "206", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_1_5_U", "Parent" : "152"},
	{"ID" : "207", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_1_6_U", "Parent" : "152"},
	{"ID" : "208", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_1_7_U", "Parent" : "152"},
	{"ID" : "209", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_2_0_U", "Parent" : "152"},
	{"ID" : "210", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_2_1_U", "Parent" : "152"},
	{"ID" : "211", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_2_2_U", "Parent" : "152"},
	{"ID" : "212", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_2_3_U", "Parent" : "152"},
	{"ID" : "213", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_2_4_U", "Parent" : "152"},
	{"ID" : "214", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_2_5_U", "Parent" : "152"},
	{"ID" : "215", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_2_6_U", "Parent" : "152"},
	{"ID" : "216", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_1_2_7_U", "Parent" : "152"},
	{"ID" : "217", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_0_0_U", "Parent" : "152"},
	{"ID" : "218", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_0_1_U", "Parent" : "152"},
	{"ID" : "219", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_0_2_U", "Parent" : "152"},
	{"ID" : "220", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_0_3_U", "Parent" : "152"},
	{"ID" : "221", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_0_4_U", "Parent" : "152"},
	{"ID" : "222", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_0_5_U", "Parent" : "152"},
	{"ID" : "223", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_0_6_U", "Parent" : "152"},
	{"ID" : "224", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_0_7_U", "Parent" : "152"},
	{"ID" : "225", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_1_0_U", "Parent" : "152"},
	{"ID" : "226", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_1_1_U", "Parent" : "152"},
	{"ID" : "227", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_1_2_U", "Parent" : "152"},
	{"ID" : "228", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_1_3_U", "Parent" : "152"},
	{"ID" : "229", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_1_4_U", "Parent" : "152"},
	{"ID" : "230", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_1_5_U", "Parent" : "152"},
	{"ID" : "231", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_1_6_U", "Parent" : "152"},
	{"ID" : "232", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_1_7_U", "Parent" : "152"},
	{"ID" : "233", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_2_0_U", "Parent" : "152"},
	{"ID" : "234", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_2_1_U", "Parent" : "152"},
	{"ID" : "235", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_2_2_U", "Parent" : "152"},
	{"ID" : "236", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_2_3_U", "Parent" : "152"},
	{"ID" : "237", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_2_4_U", "Parent" : "152"},
	{"ID" : "238", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_2_5_U", "Parent" : "152"},
	{"ID" : "239", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_2_6_U", "Parent" : "152"},
	{"ID" : "240", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.win_buf_2_2_7_U", "Parent" : "152"},
	{"ID" : "241", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fadd_32ns_32bkb_U122", "Parent" : "152"},
	{"ID" : "242", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fmul_32ns_32cud_U123", "Parent" : "152"},
	{"ID" : "243", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_fcmp_32ns_32dEe_U124", "Parent" : "152"},
	{"ID" : "244", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_mux_832_32_1_1_U125", "Parent" : "152"},
	{"ID" : "245", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_mux_832_32_1_1_U126", "Parent" : "152"},
	{"ID" : "246", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_mux_832_32_1_1_U127", "Parent" : "152"},
	{"ID" : "247", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_mux_832_32_1_1_U128", "Parent" : "152"},
	{"ID" : "248", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_mux_832_32_1_1_U129", "Parent" : "152"},
	{"ID" : "249", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_mux_832_32_1_1_U130", "Parent" : "152"},
	{"ID" : "250", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_mux_832_32_1_1_U131", "Parent" : "152"},
	{"ID" : "251", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_mux_832_32_1_1_U132", "Parent" : "152"},
	{"ID" : "252", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv4_U0.topp_mux_727_32_1_1_U133", "Parent" : "152"},
	{"ID" : "253", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv5_U0", "Parent" : "0", "Child" : ["254", "255", "256", "257", "258", "259", "260", "261", "262", "263", "264", "265", "266", "267", "268", "269", "270", "271", "272", "273", "274", "275", "276", "277", "278", "279", "280", "281", "282", "283", "284", "285", "286", "287", "288", "289", "290", "291", "292", "293", "294", "295", "296", "297", "298", "299", "300", "301", "302", "303", "304", "305", "306", "307", "308", "309", "310", "311", "312", "313", "314", "315", "316", "317", "318", "319", "320", "321", "322", "323", "324", "325", "326", "327", "328", "329", "330", "331", "332", "333", "334", "335", "336", "337", "338", "339", "340", "341", "342", "343", "344", "345", "346", "347", "348", "349", "350", "351", "352"],
		"CDFG" : "conv5",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "48321", "EstimateLatencyMax" : "10272321",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "152",
		"StartFifo" : "start_for_conv5_U0_U",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "353", "DependentChan" : "410",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "353", "DependentChan" : "411",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "353", "DependentChan" : "412",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "353", "DependentChan" : "413",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "353", "DependentChan" : "414",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "353", "DependentChan" : "415",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "353", "DependentChan" : "416",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "353", "DependentChan" : "417",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "152", "DependentChan" : "402",
				"BlockSignal" : [
					{"Name" : "f4_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "152", "DependentChan" : "403",
				"BlockSignal" : [
					{"Name" : "f4_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "152", "DependentChan" : "404",
				"BlockSignal" : [
					{"Name" : "f4_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "152", "DependentChan" : "405",
				"BlockSignal" : [
					{"Name" : "f4_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "152", "DependentChan" : "406",
				"BlockSignal" : [
					{"Name" : "f4_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "152", "DependentChan" : "407",
				"BlockSignal" : [
					{"Name" : "f4_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "152", "DependentChan" : "408",
				"BlockSignal" : [
					{"Name" : "f4_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f4_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "152", "DependentChan" : "409",
				"BlockSignal" : [
					{"Name" : "f4_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "linbu_0_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_0_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_1_7", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "254", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_0_U", "Parent" : "253"},
	{"ID" : "255", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_1_U", "Parent" : "253"},
	{"ID" : "256", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_2_U", "Parent" : "253"},
	{"ID" : "257", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_3_U", "Parent" : "253"},
	{"ID" : "258", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_4_U", "Parent" : "253"},
	{"ID" : "259", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_5_U", "Parent" : "253"},
	{"ID" : "260", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_6_U", "Parent" : "253"},
	{"ID" : "261", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_0_7_U", "Parent" : "253"},
	{"ID" : "262", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_0_U", "Parent" : "253"},
	{"ID" : "263", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_1_U", "Parent" : "253"},
	{"ID" : "264", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_2_U", "Parent" : "253"},
	{"ID" : "265", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_3_U", "Parent" : "253"},
	{"ID" : "266", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_4_U", "Parent" : "253"},
	{"ID" : "267", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_5_U", "Parent" : "253"},
	{"ID" : "268", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_6_U", "Parent" : "253"},
	{"ID" : "269", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.linbu_1_7_U", "Parent" : "253"},
	{"ID" : "270", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_0_0_U", "Parent" : "253"},
	{"ID" : "271", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_0_1_U", "Parent" : "253"},
	{"ID" : "272", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_0_2_U", "Parent" : "253"},
	{"ID" : "273", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_0_3_U", "Parent" : "253"},
	{"ID" : "274", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_0_4_U", "Parent" : "253"},
	{"ID" : "275", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_0_5_U", "Parent" : "253"},
	{"ID" : "276", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_0_6_U", "Parent" : "253"},
	{"ID" : "277", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_0_7_U", "Parent" : "253"},
	{"ID" : "278", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_1_0_U", "Parent" : "253"},
	{"ID" : "279", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_1_1_U", "Parent" : "253"},
	{"ID" : "280", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_1_2_U", "Parent" : "253"},
	{"ID" : "281", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_1_3_U", "Parent" : "253"},
	{"ID" : "282", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_1_4_U", "Parent" : "253"},
	{"ID" : "283", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_1_5_U", "Parent" : "253"},
	{"ID" : "284", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_1_6_U", "Parent" : "253"},
	{"ID" : "285", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_1_7_U", "Parent" : "253"},
	{"ID" : "286", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_2_0_U", "Parent" : "253"},
	{"ID" : "287", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_2_1_U", "Parent" : "253"},
	{"ID" : "288", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_2_2_U", "Parent" : "253"},
	{"ID" : "289", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_2_3_U", "Parent" : "253"},
	{"ID" : "290", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_2_4_U", "Parent" : "253"},
	{"ID" : "291", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_2_5_U", "Parent" : "253"},
	{"ID" : "292", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_2_6_U", "Parent" : "253"},
	{"ID" : "293", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_0_2_7_U", "Parent" : "253"},
	{"ID" : "294", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_0_0_U", "Parent" : "253"},
	{"ID" : "295", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_0_1_U", "Parent" : "253"},
	{"ID" : "296", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_0_2_U", "Parent" : "253"},
	{"ID" : "297", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_0_3_U", "Parent" : "253"},
	{"ID" : "298", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_0_4_U", "Parent" : "253"},
	{"ID" : "299", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_0_5_U", "Parent" : "253"},
	{"ID" : "300", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_0_6_U", "Parent" : "253"},
	{"ID" : "301", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_0_7_U", "Parent" : "253"},
	{"ID" : "302", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_1_0_U", "Parent" : "253"},
	{"ID" : "303", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_1_1_U", "Parent" : "253"},
	{"ID" : "304", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_1_2_U", "Parent" : "253"},
	{"ID" : "305", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_1_3_U", "Parent" : "253"},
	{"ID" : "306", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_1_4_U", "Parent" : "253"},
	{"ID" : "307", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_1_5_U", "Parent" : "253"},
	{"ID" : "308", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_1_6_U", "Parent" : "253"},
	{"ID" : "309", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_1_7_U", "Parent" : "253"},
	{"ID" : "310", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_2_0_U", "Parent" : "253"},
	{"ID" : "311", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_2_1_U", "Parent" : "253"},
	{"ID" : "312", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_2_2_U", "Parent" : "253"},
	{"ID" : "313", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_2_3_U", "Parent" : "253"},
	{"ID" : "314", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_2_4_U", "Parent" : "253"},
	{"ID" : "315", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_2_5_U", "Parent" : "253"},
	{"ID" : "316", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_2_6_U", "Parent" : "253"},
	{"ID" : "317", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_1_2_7_U", "Parent" : "253"},
	{"ID" : "318", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_0_0_U", "Parent" : "253"},
	{"ID" : "319", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_0_1_U", "Parent" : "253"},
	{"ID" : "320", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_0_2_U", "Parent" : "253"},
	{"ID" : "321", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_0_3_U", "Parent" : "253"},
	{"ID" : "322", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_0_4_U", "Parent" : "253"},
	{"ID" : "323", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_0_5_U", "Parent" : "253"},
	{"ID" : "324", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_0_6_U", "Parent" : "253"},
	{"ID" : "325", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_0_7_U", "Parent" : "253"},
	{"ID" : "326", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_1_0_U", "Parent" : "253"},
	{"ID" : "327", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_1_1_U", "Parent" : "253"},
	{"ID" : "328", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_1_2_U", "Parent" : "253"},
	{"ID" : "329", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_1_3_U", "Parent" : "253"},
	{"ID" : "330", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_1_4_U", "Parent" : "253"},
	{"ID" : "331", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_1_5_U", "Parent" : "253"},
	{"ID" : "332", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_1_6_U", "Parent" : "253"},
	{"ID" : "333", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_1_7_U", "Parent" : "253"},
	{"ID" : "334", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_2_0_U", "Parent" : "253"},
	{"ID" : "335", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_2_1_U", "Parent" : "253"},
	{"ID" : "336", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_2_2_U", "Parent" : "253"},
	{"ID" : "337", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_2_3_U", "Parent" : "253"},
	{"ID" : "338", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_2_4_U", "Parent" : "253"},
	{"ID" : "339", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_2_5_U", "Parent" : "253"},
	{"ID" : "340", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_2_6_U", "Parent" : "253"},
	{"ID" : "341", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.win_buf_2_2_7_U", "Parent" : "253"},
	{"ID" : "342", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_fadd_32ns_32bkb_U152", "Parent" : "253"},
	{"ID" : "343", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_fmul_32ns_32cud_U153", "Parent" : "253"},
	{"ID" : "344", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_mux_832_32_1_1_U154", "Parent" : "253"},
	{"ID" : "345", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_mux_832_32_1_1_U155", "Parent" : "253"},
	{"ID" : "346", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_mux_832_32_1_1_U156", "Parent" : "253"},
	{"ID" : "347", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_mux_832_32_1_1_U157", "Parent" : "253"},
	{"ID" : "348", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_mux_832_32_1_1_U158", "Parent" : "253"},
	{"ID" : "349", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_mux_832_32_1_1_U159", "Parent" : "253"},
	{"ID" : "350", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_mux_832_32_1_1_U160", "Parent" : "253"},
	{"ID" : "351", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_mux_832_32_1_1_U161", "Parent" : "253"},
	{"ID" : "352", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.conv5_U0.topp_mux_727_32_1_1_U162", "Parent" : "253"},
	{"ID" : "353", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.detection_head_U0", "Parent" : "0", "Child" : ["354", "355", "356", "357", "358", "359", "360", "361"],
		"CDFG" : "detection_head",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "45953", "EstimateLatencyMax" : "45953",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"StartSource" : "253",
		"StartFifo" : "start_for_detectiibs_U",
		"Port" : [
			{"Name" : "out_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "f5_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "253", "DependentChan" : "410",
				"BlockSignal" : [
					{"Name" : "f5_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "253", "DependentChan" : "411",
				"BlockSignal" : [
					{"Name" : "f5_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "253", "DependentChan" : "412",
				"BlockSignal" : [
					{"Name" : "f5_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "253", "DependentChan" : "413",
				"BlockSignal" : [
					{"Name" : "f5_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "253", "DependentChan" : "414",
				"BlockSignal" : [
					{"Name" : "f5_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "253", "DependentChan" : "415",
				"BlockSignal" : [
					{"Name" : "f5_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "253", "DependentChan" : "416",
				"BlockSignal" : [
					{"Name" : "f5_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "f5_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "253", "DependentChan" : "417",
				"BlockSignal" : [
					{"Name" : "f5_7_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "354", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fadd_32ns_32bkb_U180", "Parent" : "353"},
	{"ID" : "355", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fadd_32ns_32bkb_U181", "Parent" : "353"},
	{"ID" : "356", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fadd_32ns_32bkb_U182", "Parent" : "353"},
	{"ID" : "357", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fadd_32ns_32bkb_U183", "Parent" : "353"},
	{"ID" : "358", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fmul_32ns_32cud_U184", "Parent" : "353"},
	{"ID" : "359", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fdiv_32ns_32eOg_U185", "Parent" : "353"},
	{"ID" : "360", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_fexp_32ns_32fYi_U186", "Parent" : "353"},
	{"ID" : "361", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.detection_head_U0.topp_mux_164_32_1_1_U187", "Parent" : "353"},
	{"ID" : "362", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_0_local_channel_U", "Parent" : "0"},
	{"ID" : "363", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_1_local_channel_U", "Parent" : "0"},
	{"ID" : "364", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_2_local_channel_U", "Parent" : "0"},
	{"ID" : "365", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_3_local_channel_U", "Parent" : "0"},
	{"ID" : "366", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_4_local_channel_U", "Parent" : "0"},
	{"ID" : "367", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_5_local_channel_U", "Parent" : "0"},
	{"ID" : "368", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_6_local_channel_U", "Parent" : "0"},
	{"ID" : "369", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f1_7_local_channel_U", "Parent" : "0"},
	{"ID" : "370", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_0_local_channel_U", "Parent" : "0"},
	{"ID" : "371", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_1_local_channel_U", "Parent" : "0"},
	{"ID" : "372", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_2_local_channel_U", "Parent" : "0"},
	{"ID" : "373", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_3_local_channel_U", "Parent" : "0"},
	{"ID" : "374", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_4_local_channel_U", "Parent" : "0"},
	{"ID" : "375", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_5_local_channel_U", "Parent" : "0"},
	{"ID" : "376", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_6_local_channel_U", "Parent" : "0"},
	{"ID" : "377", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p1_7_local_channel_U", "Parent" : "0"},
	{"ID" : "378", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_0_local_channel_U", "Parent" : "0"},
	{"ID" : "379", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_1_local_channel_U", "Parent" : "0"},
	{"ID" : "380", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_2_local_channel_U", "Parent" : "0"},
	{"ID" : "381", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_3_local_channel_U", "Parent" : "0"},
	{"ID" : "382", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_4_local_channel_U", "Parent" : "0"},
	{"ID" : "383", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_5_local_channel_U", "Parent" : "0"},
	{"ID" : "384", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_6_local_channel_U", "Parent" : "0"},
	{"ID" : "385", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f2_7_local_channel_U", "Parent" : "0"},
	{"ID" : "386", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_0_local_channel_U", "Parent" : "0"},
	{"ID" : "387", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_1_local_channel_U", "Parent" : "0"},
	{"ID" : "388", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_2_local_channel_U", "Parent" : "0"},
	{"ID" : "389", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_3_local_channel_U", "Parent" : "0"},
	{"ID" : "390", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_4_local_channel_U", "Parent" : "0"},
	{"ID" : "391", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_5_local_channel_U", "Parent" : "0"},
	{"ID" : "392", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_6_local_channel_U", "Parent" : "0"},
	{"ID" : "393", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p2_7_local_channel_U", "Parent" : "0"},
	{"ID" : "394", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_0_local_channel_U", "Parent" : "0"},
	{"ID" : "395", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_1_local_channel_U", "Parent" : "0"},
	{"ID" : "396", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_2_local_channel_U", "Parent" : "0"},
	{"ID" : "397", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_3_local_channel_U", "Parent" : "0"},
	{"ID" : "398", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_4_local_channel_U", "Parent" : "0"},
	{"ID" : "399", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_5_local_channel_U", "Parent" : "0"},
	{"ID" : "400", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_6_local_channel_U", "Parent" : "0"},
	{"ID" : "401", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f3_7_local_channel_U", "Parent" : "0"},
	{"ID" : "402", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_0_local_channel_U", "Parent" : "0"},
	{"ID" : "403", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_1_local_channel_U", "Parent" : "0"},
	{"ID" : "404", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_2_local_channel_U", "Parent" : "0"},
	{"ID" : "405", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_3_local_channel_U", "Parent" : "0"},
	{"ID" : "406", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_4_local_channel_U", "Parent" : "0"},
	{"ID" : "407", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_5_local_channel_U", "Parent" : "0"},
	{"ID" : "408", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_6_local_channel_U", "Parent" : "0"},
	{"ID" : "409", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f4_7_local_channel_U", "Parent" : "0"},
	{"ID" : "410", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_0_local_channel_U", "Parent" : "0"},
	{"ID" : "411", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_1_local_channel_U", "Parent" : "0"},
	{"ID" : "412", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_2_local_channel_U", "Parent" : "0"},
	{"ID" : "413", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_3_local_channel_U", "Parent" : "0"},
	{"ID" : "414", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_4_local_channel_U", "Parent" : "0"},
	{"ID" : "415", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_5_local_channel_U", "Parent" : "0"},
	{"ID" : "416", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_6_local_channel_U", "Parent" : "0"},
	{"ID" : "417", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.f5_7_local_channel_U", "Parent" : "0"},
	{"ID" : "418", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_maxpoolg8j_U", "Parent" : "0"},
	{"ID" : "419", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv2_U0_U", "Parent" : "0"},
	{"ID" : "420", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_maxpoolhbi_U", "Parent" : "0"},
	{"ID" : "421", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv3_U0_U", "Parent" : "0"},
	{"ID" : "422", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv4_U0_U", "Parent" : "0"},
	{"ID" : "423", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_conv5_U0_U", "Parent" : "0"},
	{"ID" : "424", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_detectiibs_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	topp {
		image_r {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 45}
		linbu_4_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_4_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_4_0_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_4_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_4_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_4_1_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_4 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_5 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_6 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_7 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_4 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_5 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_6 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_7 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_4 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_5 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_6 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_7 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_4 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_5 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_6 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_7 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_4 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_5 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_6 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_7 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_4 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_5 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_6 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_7 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_4 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_5 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_6 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_7 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_4 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_5 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_6 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_7 {Type IO LastRead -1 FirstWrite -1}}
	conv1 {
		in_r {Type I LastRead 3 FirstWrite -1}
		out_0 {Type O LastRead -1 FirstWrite 6}
		out_1 {Type O LastRead -1 FirstWrite 6}
		out_2 {Type O LastRead -1 FirstWrite 6}
		out_3 {Type O LastRead -1 FirstWrite 6}
		out_4 {Type O LastRead -1 FirstWrite 6}
		out_5 {Type O LastRead -1 FirstWrite 6}
		out_6 {Type O LastRead -1 FirstWrite 6}
		out_7 {Type O LastRead -1 FirstWrite 6}
		linbu_4_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_4_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_4_0_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_4_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_4_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_4_1_2 {Type IO LastRead -1 FirstWrite -1}}
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
		out_0 {Type O LastRead -1 FirstWrite 6}
		out_1 {Type O LastRead -1 FirstWrite 6}
		out_2 {Type O LastRead -1 FirstWrite 6}
		out_3 {Type O LastRead -1 FirstWrite 6}
		out_4 {Type O LastRead -1 FirstWrite 6}
		out_5 {Type O LastRead -1 FirstWrite 6}
		out_6 {Type O LastRead -1 FirstWrite 6}
		out_7 {Type O LastRead -1 FirstWrite 6}
		p1_0 {Type I LastRead 10 FirstWrite -1}
		p1_1 {Type I LastRead 10 FirstWrite -1}
		p1_2 {Type I LastRead 10 FirstWrite -1}
		p1_3 {Type I LastRead 10 FirstWrite -1}
		p1_4 {Type I LastRead 10 FirstWrite -1}
		p1_5 {Type I LastRead 10 FirstWrite -1}
		p1_6 {Type I LastRead 10 FirstWrite -1}
		p1_7 {Type I LastRead 10 FirstWrite -1}
		linbu_5_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_4 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_5 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_6 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_0_7 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_4 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_5 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_6 {Type IO LastRead -1 FirstWrite -1}
		linbu_5_1_7 {Type IO LastRead -1 FirstWrite -1}}
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
		out_0 {Type O LastRead -1 FirstWrite 6}
		out_1 {Type O LastRead -1 FirstWrite 6}
		out_2 {Type O LastRead -1 FirstWrite 6}
		out_3 {Type O LastRead -1 FirstWrite 6}
		out_4 {Type O LastRead -1 FirstWrite 6}
		out_5 {Type O LastRead -1 FirstWrite 6}
		out_6 {Type O LastRead -1 FirstWrite 6}
		out_7 {Type O LastRead -1 FirstWrite 6}
		p2_0 {Type I LastRead 16 FirstWrite -1}
		p2_1 {Type I LastRead 16 FirstWrite -1}
		p2_2 {Type I LastRead 16 FirstWrite -1}
		p2_3 {Type I LastRead 16 FirstWrite -1}
		p2_4 {Type I LastRead 16 FirstWrite -1}
		p2_5 {Type I LastRead 16 FirstWrite -1}
		p2_6 {Type I LastRead 16 FirstWrite -1}
		p2_7 {Type I LastRead 16 FirstWrite -1}
		linbu_6_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_4 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_5 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_6 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_7 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_4 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_5 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_6 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_7 {Type IO LastRead -1 FirstWrite -1}}
	conv4 {
		out_0 {Type O LastRead -1 FirstWrite 6}
		out_1 {Type O LastRead -1 FirstWrite 6}
		out_2 {Type O LastRead -1 FirstWrite 6}
		out_3 {Type O LastRead -1 FirstWrite 6}
		out_4 {Type O LastRead -1 FirstWrite 6}
		out_5 {Type O LastRead -1 FirstWrite 6}
		out_6 {Type O LastRead -1 FirstWrite 6}
		out_7 {Type O LastRead -1 FirstWrite 6}
		f3_0 {Type I LastRead 16 FirstWrite -1}
		f3_1 {Type I LastRead 16 FirstWrite -1}
		f3_2 {Type I LastRead 16 FirstWrite -1}
		f3_3 {Type I LastRead 16 FirstWrite -1}
		f3_4 {Type I LastRead 16 FirstWrite -1}
		f3_5 {Type I LastRead 16 FirstWrite -1}
		f3_6 {Type I LastRead 16 FirstWrite -1}
		f3_7 {Type I LastRead 16 FirstWrite -1}
		linbu_7_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_4 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_5 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_6 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_0_7 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_4 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_5 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_6 {Type IO LastRead -1 FirstWrite -1}
		linbu_7_1_7 {Type IO LastRead -1 FirstWrite -1}}
	conv5 {
		out_0 {Type O LastRead -1 FirstWrite 5}
		out_1 {Type O LastRead -1 FirstWrite 5}
		out_2 {Type O LastRead -1 FirstWrite 5}
		out_3 {Type O LastRead -1 FirstWrite 5}
		out_4 {Type O LastRead -1 FirstWrite 5}
		out_5 {Type O LastRead -1 FirstWrite 5}
		out_6 {Type O LastRead -1 FirstWrite 5}
		out_7 {Type O LastRead -1 FirstWrite 5}
		f4_0 {Type I LastRead 16 FirstWrite -1}
		f4_1 {Type I LastRead 16 FirstWrite -1}
		f4_2 {Type I LastRead 16 FirstWrite -1}
		f4_3 {Type I LastRead 16 FirstWrite -1}
		f4_4 {Type I LastRead 16 FirstWrite -1}
		f4_5 {Type I LastRead 16 FirstWrite -1}
		f4_6 {Type I LastRead 16 FirstWrite -1}
		f4_7 {Type I LastRead 16 FirstWrite -1}
		linbu_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_4 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_5 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_6 {Type IO LastRead -1 FirstWrite -1}
		linbu_0_7 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_4 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_5 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_6 {Type IO LastRead -1 FirstWrite -1}
		linbu_1_7 {Type IO LastRead -1 FirstWrite -1}}
	detection_head {
		out_r {Type O LastRead -1 FirstWrite 45}
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
	{"Name" : "Latency", "Min" : "292951", "Max" : "14846249"}
	, {"Name" : "Interval", "Min" : "102891", "Max" : "14796746"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	image_r { ap_memory {  { image_r_address0 mem_address 1 14 }  { image_r_ce0 mem_ce 1 1 }  { image_r_d0 mem_din 1 32 }  { image_r_q0 mem_dout 0 32 }  { image_r_we0 mem_we 1 1 }  { image_r_address1 mem_address 1 14 }  { image_r_ce1 mem_ce 1 1 }  { image_r_d1 mem_din 1 32 }  { image_r_q1 mem_dout 0 32 }  { image_r_we1 mem_we 1 1 } } }
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
