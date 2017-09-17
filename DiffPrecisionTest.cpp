/*This class will show the working of the DiffPrecision class*/
#include<iostream>
using namespace std;
#include "DiffPrecision.h"
int main()
{
	DiffPrecision p1;
	int num1,num2;
	cout<<"Enter width: ";
	cin>>num1;
	cout<<"Enter precision: ";
	cin>>num2;
	p1.setLocField(num1);
	p1.setPrecisionField(num2);
	p1.displayMessage();
	return 0;
}