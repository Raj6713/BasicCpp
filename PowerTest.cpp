/*Write a program which will test power class and show output*/
#include<iostream>
using namespace std;
#include "Power.h"
#include<string>
int main()
{
	float b;
	int p;
	Power p1;
	cout<<"Enter base: "<<endl;
	cin>>b;
	p1.setBase(b);
	cout<<"Enter power"<<endl;
	cin>>p;
	p1.setPower(p);
	p1.calculation();
	p1.displayMessage();
	return 0;
}