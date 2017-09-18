//This class will check working of hypotonuse
#include<iostream>
using namespace std;
#include "Hypotonuse.h"
int main()
{
	Hypotonuse hp;
	int b,h;
	cout<<"Enter base and height"<<endl;
	cin>>b>>h;
	hp.setBase(b);
	hp.setHeight(h);
	hp.displayMessage();
	return 0;
}