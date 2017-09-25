//Work:will check working of the Salary class
//Author: raj6713631@gmail.com
#include<iostream>
using namespace std;
#include "Salary.h"
int main()
{
	int size;
	char ch;
	do
	{
		cout<<"Enter size:"<<endl;
		cin>>size;
		Salary sp;
		sp.setSize(size);
		sp.displayMessage();
		cout<<"Want to continue: Press Y"<<endl;
		cin>>ch;
	}while(ch=='Y' || ch=='y');
	return 0;
}