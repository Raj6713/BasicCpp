/*This class will check working of the different parameter
volume test*/
#include<iostream>
using namespace std;
#include "DiffParameter.h"
int main()
{
	int a,b,c;
	cout<<"Enter three values:";
	cin>>a>>b>>c;
	Volume v1;
	v1.boxVolume();
	v1.displayMessage();
	v1.boxVolume(a);
	v1.displayMessage();
	v1.boxVolume(a,b);
	v1.displayMessage();
	v1.boxVolume(a,b,c);
	v1.displayMessage();
	return 0;
}