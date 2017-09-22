//Work::will check working of DiceRoll.h header
//Author: raj6713631@gmail.com
#include<iostream>
using namespace std;
#include "DiceRoll.h"
int main()
{
	char ch;
	int size;
	do
	{
		cout<<"Enter size: ";
		cin>>size;
		DiceRoll dr;
		dr.setSize(size);
		dr.displayMessage();
		cout<<"want to continue: press y";
		cin>>ch;
	}while(ch=='Y' || ch=='y');
	return 0;
}