// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __GetLocation_dm_detMap_x_H__
#define __GetLocation_dm_detMap_x_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct GetLocation_dm_detMap_x_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 8;
  static const unsigned AddressRange = 96;
  static const unsigned AddressWidth = 7;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(GetLocation_dm_detMap_x_ram) {
        ram[0] = "0b00000000";
        ram[1] = "0b00000000";
        ram[2] = "0b00000101";
        ram[3] = "0b00001010";
        ram[4] = "0b00001111";
        ram[5] = "0b00010100";
        ram[6] = "0b00011001";
        ram[7] = "0b00011110";
        ram[8] = "0b00100011";
        ram[9] = "0b00101000";
        ram[10] = "0b00101101";
        ram[11] = "0b00110010";
        ram[12] = "0b00110111";
        ram[13] = "0b00111100";
        ram[14] = "0b01000001";
        ram[15] = "0b01000110";
        ram[16] = "0b01001011";
        ram[17] = "0b01010000";
        ram[18] = "0b01010101";
        ram[19] = "0b01011010";
        ram[20] = "0b01011111";
        ram[21] = "0b01100100";
        ram[22] = "0b01101001";
        ram[23] = "0b01101110";
        ram[24] = "0b01110011";
        ram[25] = "0b01111000";
        ram[26] = "0b01111101";
        ram[27] = "0b10000010";
        ram[28] = "0b10000111";
        ram[29] = "0b10001100";
        ram[30] = "0b10010001";
        ram[31] = "0b10010110";
        ram[32] = "0b10011011";
        ram[33] = "0b00000000";
        ram[34] = "0b00000101";
        ram[35] = "0b00001010";
        ram[36] = "0b00001111";
        ram[37] = "0b00010100";
        ram[38] = "0b00011001";
        ram[39] = "0b00011110";
        ram[40] = "0b00100011";
        ram[41] = "0b00101000";
        ram[42] = "0b00101101";
        ram[43] = "0b00110010";
        ram[44] = "0b00110111";
        ram[45] = "0b00111100";
        ram[46] = "0b01000001";
        ram[47] = "0b01000110";
        ram[48] = "0b01001011";
        ram[49] = "0b01010000";
        ram[50] = "0b01010101";
        ram[51] = "0b01011010";
        ram[52] = "0b01011111";
        ram[53] = "0b01100100";
        ram[54] = "0b01101001";
        ram[55] = "0b01101110";
        ram[56] = "0b01110011";
        ram[57] = "0b01111000";
        ram[58] = "0b01111101";
        ram[59] = "0b10000010";
        ram[60] = "0b10000111";
        ram[61] = "0b10001100";
        ram[62] = "0b10010001";
        ram[63] = "0b10010110";
        ram[64] = "0b10011011";
        ram[65] = "0b00000000";
        ram[66] = "0b00000101";
        ram[67] = "0b00001010";
        ram[68] = "0b00001111";
        ram[69] = "0b00010100";
        ram[70] = "0b00011001";
        ram[71] = "0b00011110";
        ram[72] = "0b00100011";
        ram[73] = "0b00101000";
        ram[74] = "0b00101101";
        ram[75] = "0b00110010";
        ram[76] = "0b00110111";
        ram[77] = "0b00111100";
        ram[78] = "0b01000001";
        ram[79] = "0b01000110";
        ram[80] = "0b01001011";
        ram[81] = "0b01010000";
        ram[82] = "0b01010101";
        ram[83] = "0b01011010";
        ram[84] = "0b01011111";
        ram[85] = "0b01100100";
        ram[86] = "0b01101001";
        ram[87] = "0b01101110";
        ram[88] = "0b01110011";
        ram[89] = "0b01111000";
        ram[90] = "0b01111101";
        ram[91] = "0b10000010";
        ram[92] = "0b10000111";
        ram[93] = "0b10001100";
        ram[94] = "0b10010001";
        ram[95] = "0b10010110";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(GetLocation_dm_detMap_x) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 96;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


GetLocation_dm_detMap_x_ram* meminst;


SC_CTOR(GetLocation_dm_detMap_x) {
meminst = new GetLocation_dm_detMap_x_ram("GetLocation_dm_detMap_x_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~GetLocation_dm_detMap_x() {
    delete meminst;
}


};//endmodule
#endif
