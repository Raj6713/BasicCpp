/*Class will test working with ForLooper.h*/
//@Raj Kumar
#include<iostream>
using namespace std;
#include "ForLooper.h"
#include<string>
int main()
{
	int count;
	cout<<"Enter how many elements: ";
	cin>>count;
	ForLooper fp;
	fp.setCounter(count);
	fp.calculation();
	fp.displayMessage();
	return 0;
}