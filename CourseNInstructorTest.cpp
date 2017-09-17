#include<iostream>
using namespace std;
#include "Course.h"
#include "Instructor.h"
#include<string>
int main()
{
	string s1,s2;
	Course c1(" ");
	Instructor i1(" ");
	cout<<"Before Initialization: "<<endl;
	c1.displayMessage();
	i1.displayMessage();
	cout<<"Enter Course Name and Instructor Name"<<endl;
	getline(cin,s1);
	getline(cin,s2);
	c1.setCourseName(s1);
	i1.setInstructorName(s2);
	cout<<"After initialization: "<<endl;
	c1.displayMessage();
	i1.displayMessage();
}