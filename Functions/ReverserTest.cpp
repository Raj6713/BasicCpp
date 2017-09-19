//Work: Will check working of the Reverse class.
//Author: raj6713631@gmail.com
#include<iostream>
using namespace std;
#include "Reverser.h"
int main()
{
	register int num;
	register char ch;
	do
	{
		Reverser reve;
		cout<<"Enter number:"<<endl;
		cin>>num;
		reve.setNumber(num);
		reve.displayMessage();
		cout<<"Enter Y or y to repeat:"<<endl;
		cin>>ch;
	}while(ch=='Y' || ch=='y');
	return 0;
}