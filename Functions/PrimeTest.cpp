//Work: This class will test working of PrimeCheck.h
//Author: raj6713631@gmail.com
#include<iostream>
using namespace std;
#include "PrimeCheck.h"
int main()
{
	Prime p;
	register int num;
	register char ch;
	do
	{
		cout<<"Enter number: "<<endl;
		cin>>num;
		p.setNumber(num);
		p.displayMessage();
		cout<<"Enter choice:(Y or y)"<<endl;
		cin>>ch;
	}while(ch=='Y' || ch=='y');
	return 0;
}