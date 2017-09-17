/*This program will check working of the triangle class*/
#include<iostream>
using namespace std;
#include "Triangle.h"
int main()
{
	Triangle teen;
	float a,b,c;
	cout<<"Enter three sides:"<<endl;
	cin>>a>>b>>c;
	teen.setSides(a,b,c);
	teen.displayMessage();
	return 0;
}