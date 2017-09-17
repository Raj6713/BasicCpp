/*Write a program which will show the working of the for loop*/
#include<iostream>
using namespace std;
#include "ForLoop.h"
int main()
{
	ForLoop fl;
	int a,b;
	cout<<"Enter lower: ";
	cin>>a;
	cout<<"Enter upper: ";
	cin>>b;
	fl.setLower(a);
	fl.setUpper(b);
	fl.printLoop();
	return 0;
}