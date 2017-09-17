/*This class will check Random class*/
//@Raj Kumar
#include<iostream>
using namespace std;
#include "Random.h"
int main()
{
	Random rp;
	int num;
	cout<<"Enter how many random numbers: ";
	cin>>num;
	rp.setUpperLimit(num);
	rp.dispMessage();
	return 0;
}