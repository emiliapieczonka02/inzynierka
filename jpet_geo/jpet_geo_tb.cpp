#include "jpet_geo.h"

#include <iostream>

using namespace std;



int main(int argc, char **argv)
{
	cout<<"Test mapowania"<<endl;
	detLoc a = GetLocation(3);
	printf("%d, %f, %d\n", a.x, a.y, a.module);
	a = GetLocation(46);
	printf("%d, %f, %d\n", a.x, a.y, a.module);
	a = GetLocation(67);
	printf("%d, %f, %d\n", a.x, a.y, a.module);
}
