/*This will test Circle class */
#include<iostream>
using namespace std;
#include "Circle.h"
int main()
{
	Circle c1;
	float rad;
	cout<<"Enter radius:"<<endl;
	cin>>rad;
	c1.setRadius(rad);
	c1.displayMessage();
	return 0;
}