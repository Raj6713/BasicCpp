//Work: CPP class to solve Duplicate Test
//author: raj6713631@gmail.com
#include<iostream>
using namespace std;
#include "DuplicateElim.h"
int main()
{
	int size;
	char ch;
	do
	{
		cout<<"Enter size: "<<endl;
		cin>>size;
		Duplicate dp;
		dp.setEntries(size);
		dp.process();
		dp.displayMessage();
		cout<<"Repeat Again:Y or y:  ";
		cin>>ch;
	}while(ch=='Y' || ch=='y');
	return 0;
}