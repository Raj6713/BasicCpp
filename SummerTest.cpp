/*This class will test working of the Summer class*/
//@Raj Kumar
#include<iostream>
using namespace std;
#include "Summer.h"
int main()
{
	int low,high;
	cout<<"Enter lower: ";
	cin>>low;
	cout<<"Enter higher: ";
	cin>>high;
	Summer s1;
	s1.setLower(low);
	s1.setUpper(high);
	s1.displayMessage();
	return 0;
}