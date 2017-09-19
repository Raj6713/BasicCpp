//This class will test working of Exponent class
#include<iostream>
using namespace std;
#include "Exponent.h"
int main()
{
	Exponent ex;
	float base; int po;
	cout<<"Enet base: "<<endl;
	cin>>base;
	cout<<"Enter power: "<<endl;
	cin>>po;
	ex.setBase(base);
	ex.setPower(po);
	ex.calculation();
	ex.displayMessage();
	return 0;
}