/*Write a program which will show working of Promotion*/
#include<iostream>
using namespace std;
#include "Promotion.h"
#include<string>
int main()
{
	Promotion p1;
	string ins;
	cout<<"Enter instructor name: "<<endl;
	getline(cin,ins);
	p1.setInstructor(ins);
	p1.calculation();
	p1.displayMessage();
	return 0;
}