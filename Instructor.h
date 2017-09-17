/*This class will take and set Name of instructors and will show*/
#include<iostream>
using namespace std;
#include<string>
class Instructor
{
private:
	string instructorName;
public:
	Instructor(string s);
	void setInstructorName(string s);
	string getInstructorName();
	void displayMessage();
};

Instructor::Instructor(string s)
{
	instructorName=s;
}

void Instructor::setInstructorName(string s)
{
	instructorName=s;
}

string Instructor::getInstructorName()
{
	return instructorName;
}

void Instructor::displayMessage()
{
	cout<<"Name of Instructor: "<<getInstructorName()<<endl;
}
