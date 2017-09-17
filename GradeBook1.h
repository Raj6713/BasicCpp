/*This class will create a class Gradebook1 with parameters*/
#include<iostream>
using namespace std;
#include<string>
class GradeBook
{
private:
	string courseName;
public:
	GradeBook1(string n1)
	{
		courseName=n1;
	}
 void setCourseName(string n1)
 {
 	courseName=n1;
 }

 string getCourseName()
 {
 	return courseName;
 }

 void displayMessage()
 {
 	cout<<"Name of course is: "<<getCourseName()<<endl;
 }
};