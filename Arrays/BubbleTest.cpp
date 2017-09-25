//Work: Will implement Bubble.h 
//author: raj6713631@gmail.com
#include<iostream>
using namespace std;
#include "Bubble.h"
int main()
{
	int size;
	char ch;
	do
	{
		cout<<"Enter size:"<<endl;
		cin>>size;
		Bubble bp;
		bp.setSize(size);
		bp.allocateArray();
		cout<<"Before "<<endl;
		bp.displayMessage();
		cout<<endl<<"\nAfter"<<endl;
		bp.bubble();
		bp.displayMessage();
		cout<<"\nWant to compute again:"<<endl;
		cout<<"\nPress Y or y:   ";
	}while(ch=='Y' || ch=='y');
	return 0;
}