// ==============================================================
// File generated on Mon Jun 08 21:02:42 +0700 2026
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "image_r"
#define AUTOTB_TVIN_image_r  "../tv/cdatafile/c.topp.autotvin_image_r.dat"
// wrapc file define: "output_r"
#define AUTOTB_TVOUT_output_r  "../tv/cdatafile/c.topp.autotvout_output_r.dat"
#define AUTOTB_TVIN_output_r  "../tv/cdatafile/c.topp.autotvin_output_r.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "output_r"
#define AUTOTB_TVOUT_PC_output_r  "../tv/rtldatafile/rtl.topp.autotvout_output_r.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			image_r_depth = 0;
			output_r_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{image_r " << image_r_depth << "}\n";
			total_list << "{output_r " << output_r_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int image_r_depth;
		int output_r_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern "C" void topp (
float image[64][64][3],
float output[8][8][16]);

extern "C" void AESL_WRAP_topp (
float image[64][64][3],
float output[8][8][16])
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "output_r"
		aesl_fh.read(AUTOTB_TVOUT_PC_output_r, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_output_r, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_output_r, AESL_token); // data

			sc_bv<32> *output_r_pc_buffer = new sc_bv<32>[1024];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'output_r', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'output_r', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					output_r_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_output_r, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_output_r))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: output_r
				{
					// bitslice(31, 0)
					// {
						// celement: output(31, 0)
						// {
							sc_lv<32>* output_lv0_0_7_1_lv1_0_7_1_lv2_0_15_1 = new sc_lv<32>[1024];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: output(31, 0)
						{
							// carray: (0) => (7) @ (1)
							for (int i_0 = 0; i_0 <= 7; i_0 += 1)
							{
								// carray: (0) => (7) @ (1)
								for (int i_1 = 0; i_1 <= 7; i_1 += 1)
								{
									// carray: (0) => (15) @ (1)
									for (int i_2 = 0; i_2 <= 15; i_2 += 1)
									{
										if (&(output[0][0][0]) != NULL) // check the null address if the c port is array or others
										{
											output_lv0_0_7_1_lv1_0_7_1_lv2_0_15_1[hls_map_index].range(31, 0) = sc_bv<32>(output_r_pc_buffer[hls_map_index].range(31, 0));
											hls_map_index++;
										}
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: output(31, 0)
						{
							// carray: (0) => (7) @ (1)
							for (int i_0 = 0; i_0 <= 7; i_0 += 1)
							{
								// carray: (0) => (7) @ (1)
								for (int i_1 = 0; i_1 <= 7; i_1 += 1)
								{
									// carray: (0) => (15) @ (1)
									for (int i_2 = 0; i_2 <= 15; i_2 += 1)
									{
										// sub                    : i_0 i_1 i_2
										// ori_name               : output[i_0][i_1][i_2]
										// sub_1st_elem           : 0 0 0
										// ori_name_1st_elem      : output[0][0][0]
										// output_left_conversion : *(int*)&output[i_0][i_1][i_2]
										// output_type_conversion : (output_lv0_0_7_1_lv1_0_7_1_lv2_0_15_1[hls_map_index]).to_uint64()
										if (&(output[0][0][0]) != NULL) // check the null address if the c port is array or others
										{
											*(int*)&output[i_0][i_1][i_2] = (output_lv0_0_7_1_lv1_0_7_1_lv2_0_15_1[hls_map_index]).to_uint64();
											hls_map_index++;
										}
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] output_r_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "image_r"
		char* tvin_image_r = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_image_r);

		// "output_r"
		char* tvin_output_r = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_output_r);
		char* tvout_output_r = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_output_r);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_image_r, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_image_r, tvin_image_r);

		sc_bv<32>* image_r_tvin_wrapc_buffer = new sc_bv<32>[12288];

		// RTL Name: image_r
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: image(31, 0)
				{
					// carray: (0) => (63) @ (1)
					for (int i_0 = 0; i_0 <= 63; i_0 += 1)
					{
						// carray: (0) => (63) @ (1)
						for (int i_1 = 0; i_1 <= 63; i_1 += 1)
						{
							// carray: (0) => (2) @ (1)
							for (int i_2 = 0; i_2 <= 2; i_2 += 1)
							{
								// sub                   : i_0 i_1 i_2
								// ori_name              : image[i_0][i_1][i_2]
								// sub_1st_elem          : 0 0 0
								// ori_name_1st_elem     : image[0][0][0]
								// regulate_c_name       : image
								// input_type_conversion : *(int*)&image[i_0][i_1][i_2]
								if (&(image[0][0][0]) != NULL) // check the null address if the c port is array or others
								{
									sc_lv<32> image_tmp_mem;
									image_tmp_mem = *(int*)&image[i_0][i_1][i_2];
									image_r_tvin_wrapc_buffer[hls_map_index].range(31, 0) = image_tmp_mem.range(31, 0);
                                 			       hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 12288; i++)
		{
			sprintf(tvin_image_r, "%s\n", (image_r_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_image_r, tvin_image_r);
		}

		tcl_file.set_num(12288, &tcl_file.image_r_depth);
		sprintf(tvin_image_r, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_image_r, tvin_image_r);

		// release memory allocation
		delete [] image_r_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_output_r, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_output_r, tvin_output_r);

		sc_bv<32>* output_r_tvin_wrapc_buffer = new sc_bv<32>[1024];

		// RTL Name: output_r
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: output(31, 0)
				{
					// carray: (0) => (7) @ (1)
					for (int i_0 = 0; i_0 <= 7; i_0 += 1)
					{
						// carray: (0) => (7) @ (1)
						for (int i_1 = 0; i_1 <= 7; i_1 += 1)
						{
							// carray: (0) => (15) @ (1)
							for (int i_2 = 0; i_2 <= 15; i_2 += 1)
							{
								// sub                   : i_0 i_1 i_2
								// ori_name              : output[i_0][i_1][i_2]
								// sub_1st_elem          : 0 0 0
								// ori_name_1st_elem     : output[0][0][0]
								// regulate_c_name       : output
								// input_type_conversion : *(int*)&output[i_0][i_1][i_2]
								if (&(output[0][0][0]) != NULL) // check the null address if the c port is array or others
								{
									sc_lv<32> output_tmp_mem;
									output_tmp_mem = *(int*)&output[i_0][i_1][i_2];
									output_r_tvin_wrapc_buffer[hls_map_index].range(31, 0) = output_tmp_mem.range(31, 0);
                                 			       hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1024; i++)
		{
			sprintf(tvin_output_r, "%s\n", (output_r_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_output_r, tvin_output_r);
		}

		tcl_file.set_num(1024, &tcl_file.output_r_depth);
		sprintf(tvin_output_r, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_output_r, tvin_output_r);

		// release memory allocation
		delete [] output_r_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		topp(image, output);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_output_r, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_output_r, tvout_output_r);

		sc_bv<32>* output_r_tvout_wrapc_buffer = new sc_bv<32>[1024];

		// RTL Name: output_r
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: output(31, 0)
				{
					// carray: (0) => (7) @ (1)
					for (int i_0 = 0; i_0 <= 7; i_0 += 1)
					{
						// carray: (0) => (7) @ (1)
						for (int i_1 = 0; i_1 <= 7; i_1 += 1)
						{
							// carray: (0) => (15) @ (1)
							for (int i_2 = 0; i_2 <= 15; i_2 += 1)
							{
								// sub                   : i_0 i_1 i_2
								// ori_name              : output[i_0][i_1][i_2]
								// sub_1st_elem          : 0 0 0
								// ori_name_1st_elem     : output[0][0][0]
								// regulate_c_name       : output
								// input_type_conversion : *(int*)&output[i_0][i_1][i_2]
								if (&(output[0][0][0]) != NULL) // check the null address if the c port is array or others
								{
									sc_lv<32> output_tmp_mem;
									output_tmp_mem = *(int*)&output[i_0][i_1][i_2];
									output_r_tvout_wrapc_buffer[hls_map_index].range(31, 0) = output_tmp_mem.range(31, 0);
                                 			       hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1024; i++)
		{
			sprintf(tvout_output_r, "%s\n", (output_r_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_output_r, tvout_output_r);
		}

		tcl_file.set_num(1024, &tcl_file.output_r_depth);
		sprintf(tvout_output_r, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_output_r, tvout_output_r);

		// release memory allocation
		delete [] output_r_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "image_r"
		delete [] tvin_image_r;
		// release memory allocation: "output_r"
		delete [] tvout_output_r;
		delete [] tvin_output_r;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

