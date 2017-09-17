/*This program class will show the class average of the class and
will summarize the result*/
#include<iostream>
using namespace std;
#include<string>
class ClassAverage
{
private:
	int marks,count,sum;
	float average;
	string instructor,courseName;
public:
	ClassAverage(int count,string course,string ins);
	void displayMessage();
	void calculation();
	string getCourseName();
	string getInstructorName();
	float getAverage();
	int getSum();
};

ClassAverage::ClassAverage(int count,string course,string ins)
{
	count=count;
	courseName=course;
	instructor=ins;
}

void ClassAverage::calculation()
{
	int i=0;
	sum=0;
	cout<<count<<endl;
	while(i<count)
	{
		cout<<"Enter marsk for student ["<<i+1<<"]: ";
		cin>>marks;
		sum+=marks;
		i++;
	}
	if(count!=0)
	average=sum/count;
    else
    	average=0.0;
}

string ClassAverage::getCourseName(){return courseName;}

string ClassAverage::getInstructorName(){return instructor;}

float ClassAverage::getAverage(){return average;}

int ClassAverage::getSum(){return sum;}

void ClassAverage::displayMessage()
{
	cout<<"Course Name: "<<getCourseName()<<endl;
	cout<<"Instructor Name: "<<getInstructorName()<<endl;
	cout<<"Class sum: "<<getSum()<<endl;
	cout<<"Class Average: "<<getAverage()<<endl;
}

















