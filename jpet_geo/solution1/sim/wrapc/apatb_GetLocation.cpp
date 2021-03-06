// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
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
#include "ap_stream.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->
    typedef struct detLoc {
        short x;
        float y;
        short module;
       } detLoc;



// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "agg_result_x"
#define AUTOTB_TVOUT_agg_result_x  "../tv/cdatafile/c.GetLocation.autotvout_agg_result_x.dat"
// wrapc file define: "agg_result_y"
#define AUTOTB_TVOUT_agg_result_y  "../tv/cdatafile/c.GetLocation.autotvout_agg_result_y.dat"
// wrapc file define: "agg_result_module"
#define AUTOTB_TVOUT_agg_result_module  "../tv/cdatafile/c.GetLocation.autotvout_agg_result_module.dat"
// wrapc file define: "tdc_channel"
#define AUTOTB_TVIN_tdc_channel  "../tv/cdatafile/c.GetLocation.autotvin_tdc_channel.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "agg_result_x"
#define AUTOTB_TVOUT_PC_agg_result_x  "../tv/rtldatafile/rtl.GetLocation.autotvout_agg_result_x.dat"
// tvout file define: "agg_result_y"
#define AUTOTB_TVOUT_PC_agg_result_y  "../tv/rtldatafile/rtl.GetLocation.autotvout_agg_result_y.dat"
// tvout file define: "agg_result_module"
#define AUTOTB_TVOUT_PC_agg_result_module  "../tv/rtldatafile/rtl.GetLocation.autotvout_agg_result_module.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			agg_result_x_depth = 0;
			agg_result_y_depth = 0;
			agg_result_module_depth = 0;
			tdc_channel_depth = 0;
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
			total_list << "{agg_result_x " << agg_result_x_depth << "}\n";
			total_list << "{agg_result_y " << agg_result_y_depth << "}\n";
			total_list << "{agg_result_module " << agg_result_module_depth << "}\n";
			total_list << "{tdc_channel " << tdc_channel_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int agg_result_x_depth;
		int agg_result_y_depth;
		int agg_result_module_depth;
		int tdc_channel_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};


#define GetLocation AESL_ORIG_DUT_GetLocation
extern detLoc GetLocation (
short tdc_channel);
#undef GetLocation

detLoc GetLocation (
short tdc_channel)
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

		detLoc AESL_return;

		// output port post check: "agg_result_x"
		aesl_fh.read(AUTOTB_TVOUT_PC_agg_result_x, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_agg_result_x, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_agg_result_x, AESL_token); // data

			sc_bv<16> *agg_result_x_pc_buffer = new sc_bv<16>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'agg_result_x', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'agg_result_x', possible cause: There are uninitialized variables in the C design." << endl;
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
					agg_result_x_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_agg_result_x, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_agg_result_x))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: agg_result_x
				{
					// bitslice(15, 0)
					// {
						// celement: agg.result.x(15, 0)
						// {
							sc_lv<16>* agg_result_x_lv0_0_0_1 = new sc_lv<16>[1];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: agg.result.x(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(AESL_return.x) != NULL) // check the null address if the c port is array or others
								{
									agg_result_x_lv0_0_0_1[hls_map_index++].range(15, 0) = sc_bv<16>(agg_result_x_pc_buffer[hls_map_index].range(15, 0));
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: agg.result.x(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : AESL_return.x
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : AESL_return.x
								// output_left_conversion : AESL_return.x
								// output_type_conversion : (agg_result_x_lv0_0_0_1[hls_map_index++]).to_uint64()
								if (&(AESL_return.x) != NULL) // check the null address if the c port is array or others
								{
									AESL_return.x = (agg_result_x_lv0_0_0_1[hls_map_index++]).to_uint64();
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] agg_result_x_pc_buffer;
		}

		// output port post check: "agg_result_y"
		aesl_fh.read(AUTOTB_TVOUT_PC_agg_result_y, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_agg_result_y, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_agg_result_y, AESL_token); // data

			sc_bv<32> *agg_result_y_pc_buffer = new sc_bv<32>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'agg_result_y', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'agg_result_y', possible cause: There are uninitialized variables in the C design." << endl;
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
					agg_result_y_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_agg_result_y, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_agg_result_y))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: agg_result_y
				{
					// bitslice(31, 0)
					// {
						// celement: agg.result.y(31, 0)
						// {
							sc_lv<32>* agg_result_y_lv0_0_0_1 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: agg.result.y(31, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(AESL_return.y) != NULL) // check the null address if the c port is array or others
								{
									agg_result_y_lv0_0_0_1[hls_map_index++].range(31, 0) = sc_bv<32>(agg_result_y_pc_buffer[hls_map_index].range(31, 0));
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: agg.result.y(31, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : AESL_return.y
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : AESL_return.y
								// output_left_conversion : *(int*)&AESL_return.y
								// output_type_conversion : (agg_result_y_lv0_0_0_1[hls_map_index++]).to_uint64()
								if (&(AESL_return.y) != NULL) // check the null address if the c port is array or others
								{
									*(int*)&AESL_return.y = (agg_result_y_lv0_0_0_1[hls_map_index++]).to_uint64();
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] agg_result_y_pc_buffer;
		}

		// output port post check: "agg_result_module"
		aesl_fh.read(AUTOTB_TVOUT_PC_agg_result_module, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_agg_result_module, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_agg_result_module, AESL_token); // data

			sc_bv<16> *agg_result_module_pc_buffer = new sc_bv<16>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'agg_result_module', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'agg_result_module', possible cause: There are uninitialized variables in the C design." << endl;
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
					agg_result_module_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_agg_result_module, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_agg_result_module))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: agg_result_module
				{
					// bitslice(15, 0)
					// {
						// celement: agg.result.module(15, 0)
						// {
							sc_lv<16>* agg_result_module_lv0_0_0_1 = new sc_lv<16>[1];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: agg.result.module(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(AESL_return.module) != NULL) // check the null address if the c port is array or others
								{
									agg_result_module_lv0_0_0_1[hls_map_index++].range(15, 0) = sc_bv<16>(agg_result_module_pc_buffer[hls_map_index].range(15, 0));
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: agg.result.module(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : AESL_return.module
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : AESL_return.module
								// output_left_conversion : AESL_return.module
								// output_type_conversion : (agg_result_module_lv0_0_0_1[hls_map_index++]).to_uint64()
								if (&(AESL_return.module) != NULL) // check the null address if the c port is array or others
								{
									AESL_return.module = (agg_result_module_lv0_0_0_1[hls_map_index++]).to_uint64();
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] agg_result_module_pc_buffer;
		}

		AESL_transaction_pc++;

		return AESL_return;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "agg_result_x"
		char* tvout_agg_result_x = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_agg_result_x);

		// "agg_result_y"
		char* tvout_agg_result_y = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_agg_result_y);

		// "agg_result_module"
		char* tvout_agg_result_module = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_agg_result_module);

		// "tdc_channel"
		char* tvin_tdc_channel = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_tdc_channel);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_tdc_channel, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_tdc_channel, tvin_tdc_channel);

		sc_bv<16> tdc_channel_tvin_wrapc_buffer;

		// RTL Name: tdc_channel
		{
			// bitslice(15, 0)
			{
				// celement: tdc_channel(15, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : tdc_channel
						// sub_1st_elem          : 
						// ori_name_1st_elem     : tdc_channel
						// regulate_c_name       : tdc_channel
						// input_type_conversion : tdc_channel
						if (&(tdc_channel) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> tdc_channel_tmp_mem;
							tdc_channel_tmp_mem = tdc_channel;
							tdc_channel_tvin_wrapc_buffer.range(15, 0) = tdc_channel_tmp_mem.range(15, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_tdc_channel, "%s\n", (tdc_channel_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_tdc_channel, tvin_tdc_channel);
		}

		tcl_file.set_num(1, &tcl_file.tdc_channel_depth);
		sprintf(tvin_tdc_channel, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_tdc_channel, tvin_tdc_channel);

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		detLoc AESL_return = AESL_ORIG_DUT_GetLocation(tdc_channel);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_agg_result_x, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_agg_result_x, tvout_agg_result_x);

		sc_bv<16>* agg_result_x_tvout_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: agg_result_x
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: agg.result.x(15, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : AESL_return.x
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : AESL_return.x
						// regulate_c_name       : agg_result_x
						// input_type_conversion : AESL_return.x
						if (&(AESL_return.x) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> agg_result_x_tmp_mem;
							agg_result_x_tmp_mem = AESL_return.x;
							agg_result_x_tvout_wrapc_buffer[hls_map_index++].range(15, 0) = agg_result_x_tmp_mem.range(15, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_agg_result_x, "%s\n", (agg_result_x_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_agg_result_x, tvout_agg_result_x);
		}

		tcl_file.set_num(1, &tcl_file.agg_result_x_depth);
		sprintf(tvout_agg_result_x, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_agg_result_x, tvout_agg_result_x);

		// release memory allocation
		delete [] agg_result_x_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_agg_result_y, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_agg_result_y, tvout_agg_result_y);

		sc_bv<32>* agg_result_y_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: agg_result_y
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: agg.result.y(31, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : AESL_return.y
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : AESL_return.y
						// regulate_c_name       : agg_result_y
						// input_type_conversion : *(int*)&AESL_return.y
						if (&(AESL_return.y) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> agg_result_y_tmp_mem;
							agg_result_y_tmp_mem = *(int*)&AESL_return.y;
							agg_result_y_tvout_wrapc_buffer[hls_map_index++].range(31, 0) = agg_result_y_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_agg_result_y, "%s\n", (agg_result_y_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_agg_result_y, tvout_agg_result_y);
		}

		tcl_file.set_num(1, &tcl_file.agg_result_y_depth);
		sprintf(tvout_agg_result_y, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_agg_result_y, tvout_agg_result_y);

		// release memory allocation
		delete [] agg_result_y_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_agg_result_module, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_agg_result_module, tvout_agg_result_module);

		sc_bv<16>* agg_result_module_tvout_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: agg_result_module
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: agg.result.module(15, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : AESL_return.module
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : AESL_return.module
						// regulate_c_name       : agg_result_module
						// input_type_conversion : AESL_return.module
						if (&(AESL_return.module) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> agg_result_module_tmp_mem;
							agg_result_module_tmp_mem = AESL_return.module;
							agg_result_module_tvout_wrapc_buffer[hls_map_index++].range(15, 0) = agg_result_module_tmp_mem.range(15, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_agg_result_module, "%s\n", (agg_result_module_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_agg_result_module, tvout_agg_result_module);
		}

		tcl_file.set_num(1, &tcl_file.agg_result_module_depth);
		sprintf(tvout_agg_result_module, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_agg_result_module, tvout_agg_result_module);

		// release memory allocation
		delete [] agg_result_module_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "agg_result_x"
		delete [] tvout_agg_result_x;
		// release memory allocation: "agg_result_y"
		delete [] tvout_agg_result_y;
		// release memory allocation: "agg_result_module"
		delete [] tvout_agg_result_module;
		// release memory allocation: "tdc_channel"
		delete [] tvin_tdc_channel;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);

		return AESL_return;
	}
}

