//This class will test working of tEven class to check
//whatever a number is Even or not
#include<iostream>
using namespace std;
#include "Even.h"
int main()
{
	Even eve;
	register int num;
    register char ch;
	do
	{
		cout<<"Enter a Integer: ";
		cin>>num;
		eve.setNumber(num);
		eve.displayMessage();
		cout<<"Enter Y or y to continue: ";
		cin>>ch;
	}while(ch=='Y' ||ch=='y');
	return 0;
}