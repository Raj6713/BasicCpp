/*Program to check frequency class*/
//@RAJ KUMAR
#include<iostream>
using namespace std;
#include "Frequency.h"
int main()
{
	Frequency fr1;
	int upper;
	cout<<"Enter upper Limit: ";
	cin>>upper;
	fr1.setUpperLimit(upper);
	fr1.dispMessage();
	return 0;
}