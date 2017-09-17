/*This class will implement member function outside the class*/
#include<iostream>
using namespace std;
#include<string>
class GradeBook
{
private:
	string courseName;
public:
	GradeBook(string s);
	void setCourseName(string s1);
	string getCourseName();
	void displayMessage();
};

GradeBook::GradeBook(string s)
{
	courseName=s;
}

void GradeBook::setCourseName(string s)
{
	courseName=s;
}

string GradeBook::getCourseName()
{
	return courseName;
}

void GradeBook::displayMessage()
{
	cout<<"Name of Course: "<<getCourseName()<<endl;
}