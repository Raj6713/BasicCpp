//Work: Will check working of array1.h
//Author::  raj6713631@gmail.com
#include<iostream>
using namespace std;
#include "Arrays1.h"
int main()
{
	int size;
	Array ap;
	cout<<"Enter size:"<<endl;
	cin>>size;
	ap.setSize(size);
	ap.displayMessage();
	return 0;
}