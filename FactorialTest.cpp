/*This class will test the working of the factorial class*/
#include<iostream>
using namespace std;
#include "Factorial.h"
int main()
{
	int num;
	cout<<"Enter num: ";
	cin>>num;
	Factorial g1;
	g1.setNum(num);
	g1.displayMessage();
	return 0;
}