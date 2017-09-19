//This class will check working of nearest class
#include<iostream>
using namespace std;
#include "NearestInt.h"
int main()
{
	float num;
	cout<<"Enter a number: ";
	cin>>num;
	Nearest nr;
	nr.setNumber(num);
	nr.displayMessage();
	return 0;
}