//This will test class Int to float
#include<iostream>
using namespace std;
#include "IntToFloat.h"
int main()
{
	int n;
	cout<<"Enter number: "<<endl;
	cin>>n;
	IntToFloat itf;
	itf.setInt(n);
	itf.displayMessage();
	return 0;
}