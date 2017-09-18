/*This main program will test the working of the
squaredTest and show output*/
#include<iostream>
using namespace std;
#include "Squared.h"
int main()
{
	int number;
	cout<<"Enter number: ";
	cin>>number;
	Squared p1;
	p1.setNum(number);
	p1.displayMessage();
	return 0;
}