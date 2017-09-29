//Work: will show the working of time class
//written by: raj6713631@gmail.com
#include<iostream>
using namespace std;
#include "Time.h"
#include<iomanip>
#include<string>
int main()
{

	char ch;
	int h,m,s,choice;
	do
	{
		cout<<"Enter (Hour,minute,second):"<<endl;
		cin>>h>>m>>s;
		Time t1;
		t1.setHour(h);
		t1.setMinute(m);
		t1.setSecond(s);
		cout<<"Enter choice:"<<endl;
		cout<<"1> Universal Time\n2>Local time"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
			t1.printUniversal();
			break;

			case 2:
			t1.printLocal();
			break;

			default:
			cout<<"Wrong Choice"<<endl;
		}

	}while(ch=='Y' || ch=='y');
	return 0;
}