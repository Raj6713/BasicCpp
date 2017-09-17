/*This class will test working of the Decimal class and will show output*/
#include<iostream>
using namespace std;
#include "Decimal.h"
#include<string>
int main()
{
	Decimal d1;
	string p;
	cout<<"Enter string to convert to decimal:\n";
	getline(cin,p);
	d1.setBinary(p);
	d1.calculation();
	d1.displayMessage();
	return 0;
}