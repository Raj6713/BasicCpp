/*Write a program which will calculate value based on sentinel
controlled values.*/
#include<iostream>
using namespace std;
#include<string>
#include<iomanip>
class ClassAverage
{
private:
	int counter,marks;
	float average,sum;
	string course,instructor;
public:
	ClassAverage();
	void setCourseName(string s);
	void setInstructor(string s);
	void calculation();

	void displayMessage();
	string getCourseName();
	string getInstructorName();
	int getSum();
	float getAverage();
};
ClassAverage::ClassAverage(){}


void ClassAverage::setCourseName(string s)
{
	course=s;
}

void ClassAverage::setInstructor(string s)
{
	instructor=s;
}

void ClassAverage::calculation()
{
	sum=0;
	average=0.0;
	counter=0;
	cout<<"Press -1 to escape:"<<endl;
	do
	{
		cout<<"Enter marks: ";
		cin>>marks;
		sum+=marks;
		counter++;
	}while(marks!=-1);
	if(sum==-1)
		cerr<<"No valid values entered"<<endl;
	else
	{
		average=sum/counter;
	}
}


string ClassAverage::getCourseName(){return course;}

string ClassAverage::getInstructorName(){return instructor;}

int ClassAverage::getSum(){return sum;}

float ClassAverage::getAverage(){return average;}

void ClassAverage::displayMessage()
{
	cout<<"Course Name: "<<getCourseName()<<endl;
	cout<<"Instructor Name: "<<getInstructorName()<<endl;
	cout<<"Class Sum: "<<getSum()<<endl;
	cout<<"Class Average: "<<getAverage()<<endl;
}