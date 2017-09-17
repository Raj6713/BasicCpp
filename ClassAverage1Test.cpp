/*This class will test working of the class average*/
#include<iostream>
using namespace std;
#include "ClassAverage1.h"
#include<string>
int main()
{
	string s1;
	ClassAverage ca1;
	cout<<"Enter Instructor Name: ";
	getline(cin,s1);
	ca1.setInstructor(s1);
	cout<<"Enter courseName: ";
	getline(cin,s1);
	ca1.setCourseName(s1);
	ca1.calculation();
	ca1.displayMessage();
	return 0;
}