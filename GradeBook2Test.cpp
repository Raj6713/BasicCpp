/*This main file will test working of the gradebook2 */
#include<iostream>
using namespace std;
#include<string>
#include "GradeBook2.h"
int main()
{
	string s1;
	GradeBook gb("");
	cout<<"Course Name before Initilization: "<<endl;
	gb.displayMessage();
	cout<<endl;
	cout<<"Enter courseName: ";
	getline(cin,s1);
	gb.setCourseName(s1);
	gb.displayMessage();
	return 0;
}