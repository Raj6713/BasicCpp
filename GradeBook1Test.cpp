/*This program will test working of the gradebook1 class*/
#include<iostream>
#include "GradeBook1.h"
using namespace std;
#include<string>
int main()
{
	string s1;
	GradeBook gb;
	cout<<"Enter courseName: ";
	getline(cin,s1);
	gb.setCourseName(s1);
	gb.displayMessage();
	return 0;
}
