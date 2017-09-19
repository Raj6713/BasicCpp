//Work: Will act as main class for PerfectNum.h header file
//Author: raj6713631@gmail.com
#include<iostream>
using namespace std;
#include "PerfectNum.h"
int main()
{
	Perfect pf;
    register char choice;
    register int number;
	do
	{
		cout<<"Enter number: ";
		cin>>number;
		pf.setNumber(number);
		pf.displayMessage();
		cout<<"Wnat to repeat:Press Y or y"<<endl;
		cin>>choice;
	}while(choice=='Y' || choice=='y');
	return 0;
}