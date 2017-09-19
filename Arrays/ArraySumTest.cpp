//Work: Will work as testing class for ArraySum.h
//Author: raj6713631@gmail.com
#include<iostream>
using namespace std;
#include "ArraySum.h"
int main()
{
	register int size;
    register char ch;
 	do
	{
		Array ar;
		cout<<"Enter size:";
		cin>>size;
		ar.setSize(size);
        ar.displayMessage();
        cout<<"Want to repeat: Y or y"<<endl;
        cin>>ch;
	}while(ch=='Y' || ch=='y');
	return 0;
}