/*This class will show how the gradebook class work when methods are declared
outside the class.
*/
#include<iostream>
using namespace std;
#include "GradeBook3.h"
#include<string>
int main()
{
	string s;
	GradeBook gb("");
	cout<<"CourseName before Declaration"<<endl;
    gb.displayMessage();
    cout<<"Enter course Name: "<<endl;
    getline(cin,s);
    gb.setCourseName(s);
    gb.displayMessage();
    return 0;
}