//This is the classfor testing smallest
#include<iostream>
using namespace std;
#include "Smallest.h"
int main()
{
	Smallest small;
	int n1,n2,n3;
	cout<<"Enter three numbers: ";
	cin>>n1>>n2>>n3;
	small.setValues(n1,n2,n3);
	small.displayMessage();
	return 0;
}