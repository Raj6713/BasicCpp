/*This class will check working of the random2 using srand*/
#include<iostream>
using namespace std;
#include "Random2.h"
int main()
{
	int seed, upper;
	Random2 r2d2;
	cout<<"Enter seed,upper";
	cin>>seed>>upper;
	r2d2.setSeed(seed);
	r2d2.setUpperLimit(upper);
	r2d2.displayMessage();
	return 0;
}