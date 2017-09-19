//Work: will check working of TempConverter.h
//Author: raj6713631@gmail.com
#include<iostream>
using namespace std;
#include "TempConverter.h"
int main()
{
	TempConverter tep;
	register char ch;
	register int choice;
	register float tempo;
	do
	{
		cout<<"1> For Celsius to Farenhit:"<<endl;
		cout<<"2>For farenhit to celsis"<<endl;
        cin>>choice;
        switch(choice)
        {
        	case 1:
        	cout<<"Enter tempreature in Celsius:"<<endl;
        	cin>>tempo;
        	tep.setTempreature(tempo);
        	tep.calToFar();
        	tep.displayMessage();
        	break;

        	case 2:
        	cout<<"Enter tempreature in farenhit:"<<endl;
        	cin>>tempo;
        	tep.setTempreature(tempo);
        	tep.farToCal();
        	tep.displayMessage();
        	break;
        }
        cout<<"Want to perform again: press Y or y"<<endl;
        cin>>ch;
	}while(ch=='Y' || ch=='y');
	return 0;
}