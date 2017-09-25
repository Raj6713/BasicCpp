//Work: will check working of the Two dices
//Author: raj6713631@gmail.com
#include<iostream>
using namespace std;
#include "TwoDice.h"
int main()
{
	int size;
	char ch;
	do
	{
		cout<<"Enter size:"<<endl;
		cin>>size;
		TwoDice dice1;
		dice1.setRolls(size);
		dice1.showMessage();
		cout<<"Want to repeat Press Y or y"<<endl;
		cin>>ch;
	}while(ch=='Y' || ch=='y');
	return 0;
}