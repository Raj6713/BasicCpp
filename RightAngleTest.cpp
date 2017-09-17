/*This program will test working of the right angle*/
#include<iostream>
using namespace std;
#include "RightAngle.h"
int main()
{
	RightAngle ra;
	float s1,s2,s3;
	cout<<"Enter three sides:\n";
	cin>>s1>>s2>>s3;
	ra.setSides(s1,s2,s3);
	ra.displayMessage();
	return 0;
}