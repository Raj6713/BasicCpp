//Work: will check of Arrays3.h
//Author: raj6713631@gmail.com
#include<iostream>
using namespace std;
#include "Arrays3.h"
int main()
{
	int size;
	Array ar;
	cout<<"Enter size"<<endl;
	cin>>size;
	ar.setSize(size);
	ar.displayMessage();
	return 0;
}