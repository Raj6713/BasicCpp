/*Write a program which will show the working of the grader class*/
#include<iostream>
using namespace std;
#include "Grader.h"
int main()
{
	Grader class1;
	string c1;
	cout<<"Enter course name: ";
	getline(cin,c1);
	class1.setCourseName(c1);
	cout<<"Enter Instructor name: ";
	getline(cin,c1);
	class1.setInstructor(c1);
	class1.displayMessage();
	return 0;
}