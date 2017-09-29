//Work: Will check working of counter class
//written by: raj6713631@gmail.com
#include<iostream>
using namespace std;
#include "Counter.h"
#include<string>
#include<iomanip>
int main()
{
	register int num;
	register char ch;
	do
	{
		cout<<"Enter num:"<<endl;
		cin>>num;
		Count cp;
		Count *cpPoint=&cp;
		Count &cpRef=cp;

		cout<<"When value is set by normal"<<endl;
		cp.setX(num);
		cp.displayMessage();

		cout<<"When value is set by reference"<<endl;
		cpRef.setX(num);
		cpRef.displayMessage();

		cout<<"When value is set by pointer"<<endl;
		cpPoint->setX(num);
		cpPoint->displayMessage();

		cout<<"Want to repeat again"<<endl;
		cin>>ch;

	}while(ch=='Y' || ch=='y');
	return 0;
}