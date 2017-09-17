/*This class will create Course and will get and set values for
corresponding*/
#include<iostream>
using namespace std;
#include<string>
class Course
{
private:
	string courseName;
public:
	Course(string s);
	void setCourseName(string s);
	string getCourseName();
	void displayMessage();
};

Course::Course(string s)
{
	courseName=s;
}

void Course::setCourseName(string s)
{
	courseName=s;
}

string Course::getCourseName()
{
	return courseName;
}

void Course::displayMessage()
{
	cout<<"Name of course: "<<getCourseName()<<endl;
}
