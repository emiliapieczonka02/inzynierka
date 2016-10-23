#include <cmath>
#include <stdio.h>
#include <map>
#include <initializer_list>

using namespace std;

struct detLoc {
  detLoc(){};

  detLoc(short p_x, float p_y, short p_module){
    x = p_x;
    y = p_y;
    module = p_module;
  }
  short x;
  float y;
  short module;
};

struct detectorMap {
	detLoc detMap[96];

	detectorMap()
	{
	    const short D = 10; //diameter of a straw in [mm]
        const short R = 5; //radius of a pipe in [mm]
        float SHORTER_LENGTH = 8.747; //74685657822 distance between the heights of centres of pipes
                                      //in the same layer but in different levels in [mm]
        const short LONGER_LENGTH = 100; //distance between the centres of bottom level pipes
                                   //in two neighbouring layers in [mm]
		// MODULE 1
		// LAYER 1

			detMap[1] = detLoc(0, SHORTER_LENGTH, 1); // pierwsza s³omka: R, shorter_lenght, rz¹d, nr w rzêdzie
			detMap[2] = detLoc(R, 0, 1);
			detMap[3] = detLoc(D, SHORTER_LENGTH, 1);
			detMap[4] = detLoc(R+D, 0, 1);

			detMap[5] = detLoc(2*D, SHORTER_LENGTH, 1);
			detMap[6] = detLoc(R+2*D, 0, 1);
			detMap[7] = detLoc(3*D, SHORTER_LENGTH, 1);
			detMap[8] = detLoc(R+3*D, 0, 1);

			detMap[9] = detLoc(4*D, SHORTER_LENGTH, 1);
			detMap[10] = detLoc(R+4*D, 0, 1);
			detMap[11] = detLoc(5*D, SHORTER_LENGTH, 1);
			detMap[12] = detLoc(R+5*D, 0, 1);

			detMap[13] = detLoc(6*D, SHORTER_LENGTH, 1);
			detMap[14] = detLoc(R+6*D, 0, 1);
			detMap[15] = detLoc(7*D, SHORTER_LENGTH, 1);
			detMap[16] = detLoc(R+7*D, 0, 1);

			detMap[17] = detLoc(8*D, SHORTER_LENGTH, 1);
			detMap[18] = detLoc(R+8*D, 0, 1);
			detMap[19] = detLoc(9*D, SHORTER_LENGTH, 1);
			detMap[20] = detLoc(R+9*D, 0, 1);

			detMap[21] = detLoc(10*D, SHORTER_LENGTH, 1);
			detMap[22] = detLoc(R+10*D, 0, 1);
			detMap[23] = detLoc(11*D, SHORTER_LENGTH, 1);
			detMap[24] = detLoc(R+11*D, 0, 1);

			detMap[25] = detLoc(12*D, SHORTER_LENGTH, 1);
			detMap[26] = detLoc(R+12*D, 0, 1);
			detMap[27] = detLoc(13*D, SHORTER_LENGTH, 1);
			detMap[28] = detLoc(R+13*D, 0, 1);

			detMap[29] = detLoc(14*D, SHORTER_LENGTH, 1);
			detMap[30] = detLoc(R+14*D, 0, 1);
			detMap[31] = detLoc(15*D, SHORTER_LENGTH, 1);
			detMap[32] = detLoc(R+15*D, 0, 1);

        // LAYER 2

			detMap[33] = detLoc(0, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[34] = detLoc(R, LONGER_LENGTH, 1);
			detMap[35] = detLoc(D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[36] = detLoc(R+D, LONGER_LENGTH, 1);

			detMap[37] = detLoc(2*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[38] = detLoc(R+2*D, LONGER_LENGTH, 1);
			detMap[39] = detLoc(3*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[40] = detLoc(R+3*D, LONGER_LENGTH, 1);

			detMap[41] = detLoc(4*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[42] = detLoc(R+4*D, LONGER_LENGTH, 1);
			detMap[43] = detLoc(5*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[44] = detLoc(R+5*D, LONGER_LENGTH, 1);

			detMap[45] = detLoc(6*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[46] = detLoc(R+6*D, LONGER_LENGTH, 1);
			detMap[47] = detLoc(7*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[48] = detLoc(R+7*D, LONGER_LENGTH, 1);

        // MODULE 2

            detMap[49] = detLoc(8*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[50] = detLoc(R+8*D, LONGER_LENGTH, 1);
			detMap[51] = detLoc(9*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[52] = detLoc(R+9*D, LONGER_LENGTH, 1);

			detMap[53] = detLoc(10*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[54] = detLoc(R+10*D, LONGER_LENGTH, 1);
			detMap[55] = detLoc(11*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[56] = detLoc(R+11*D, LONGER_LENGTH, 1);

			detMap[57] = detLoc(12*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[58] = detLoc(R+12*D, LONGER_LENGTH, 1);
			detMap[59] = detLoc(13*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[60] = detLoc(R+13*D, LONGER_LENGTH, 1);

			detMap[61] = detLoc(14*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[62] = detLoc(R+14*D, LONGER_LENGTH, 1);
			detMap[63] = detLoc(15*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[64] = detLoc(R+15*D, LONGER_LENGTH, 1);

        // LAYER 3

			detMap[65] = detLoc(0, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[66] = detLoc(R, LONGER_LENGTH, 1);
			detMap[67] = detLoc(D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[68] = detLoc(R+D, LONGER_LENGTH, 1);

			detMap[69] = detLoc(2*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[70] = detLoc(R+2*D, LONGER_LENGTH, 1);
			detMap[71] = detLoc(3*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[72] = detLoc(R+3*D, LONGER_LENGTH, 1);

			detMap[73] = detLoc(4*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[74] = detLoc(R+4*D, LONGER_LENGTH, 1);
			detMap[75] = detLoc(5*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[76] = detLoc(R+5*D, LONGER_LENGTH, 1);

			detMap[77] = detLoc(6*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[78] = detLoc(R+6*D, LONGER_LENGTH, 1);
			detMap[79] = detLoc(7*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[80] = detLoc(R+7*D, LONGER_LENGTH, 1);

			detMap[81] = detLoc(8*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[82] = detLoc(R+8*D, LONGER_LENGTH, 1);
			detMap[83] = detLoc(9*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[84] = detLoc(R+9*D, LONGER_LENGTH, 1);

			detMap[85] = detLoc(10*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[86] = detLoc(R+10*D, LONGER_LENGTH, 1);
			detMap[87] = detLoc(11*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[88] = detLoc(R+11*D, LONGER_LENGTH, 1);

			detMap[89] = detLoc(12*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[90] = detLoc(R+12*D, LONGER_LENGTH, 1);
			detMap[91] = detLoc(13*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[92] = detLoc(R+13*D, LONGER_LENGTH, 1);

			detMap[93] = detLoc(14*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[94] = detLoc(R+14*D, LONGER_LENGTH, 1);
			detMap[95] = detLoc(15*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
			detMap[96] = detLoc(R+15*D, LONGER_LENGTH, 1);
	}
};

detLoc GetLocation(short tdc_channel);
