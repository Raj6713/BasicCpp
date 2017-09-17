/*Write a program which will use header Summing class*/
#include<iostream>
using namespace std;
#include "Summing.h"
int main()
{
	int counter;
	cout<<"Enter counter: ";
	cin>>counter;
	Summing sm;
	sm.setCounter(counter);
	sm.calculation();
	sm.displayMessage();
	return 0;
}