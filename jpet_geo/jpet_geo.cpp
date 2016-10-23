#include "jpet_geo.h"

using namespace std;


detectorMap dm;

detLoc GetLocation(short tdc_channel) {

	return dm.detMap[tdc_channel];
}
