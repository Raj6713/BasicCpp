/*This program will show working of square class*/
//@RAJKUMAR
#include<iostream>
using namespace std;
#include "Square.h"
int main()
{
	Square sq;
	float num;
	cout<<"Enter a number: ";
	cin>>num;
	sq.setNumber(num);
	sq.displayMessage();
	return 0;
}