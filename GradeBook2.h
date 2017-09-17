/*This header file will contain definition of a class which will
show the working of set and get method*/
#include<iostream>
#include<string>
using namespace std;
class GradeBook 
{
private:
	string courseName;
public:
	GradeBook(string s1)
	{
          courseName=s1;
	}

	void setCourseName(string s1)
	{
		courseName=s1;
	}

	string getCourseName()
	{
		return courseName;
	}

	void displayMessage()
	{
		cout<<"Name of Course: "<<getCourseName();
	}
};