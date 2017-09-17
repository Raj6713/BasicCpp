/*Write a program which will solve the problem of a class basis where 
grades of three students will be enetered and will be output on screen.*/
#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include<iostream>
using namespace std;
#include<string>
#include<iomanip>
#include<climits>
class GradeBook
{
private:
	string courseName,student,message;
	int marks1,marks2,marks3,maximum;
public:
	GradeBook();
	~GradeBook();
	void setCourse(string);
	void setStudent(string);
	void setMarks(int,int,int);
	string getCourse();
	string getStudent();
	int getMaximum();
	void maximumCal();
	void showMessage();
};

GradeBook::GradeBook()
{
	courseName=student=message="";
	marks1=marks2=marks3=0;
	maximum=INT_MIN;
}

GradeBook::~GradeBook(){}

void GradeBook::setCourse(string s)
{
	courseName=s;
}

void GradeBook::setStudent(string s)
{
	student=s;
}

void GradeBook::setMarks(int a,int b,int c)
{
	marks1=a;
	marks2=b;
	marks3=c;
}

int GradeBook::getMaximum(){return maximum;}

string GradeBook::getStudent(){return student;}

string GradeBook::getCourse(){return courseName;}

void GradeBook::maximumCal()
{
	message+="Student Name: "+getStudent()+"\n"+
	         "Course Name: "+getCourse()+"\n";
	         if(marks1>maximum)
	         	maximum=marks1;
	         if(marks2>maximum)
	         	maximum=marks2;
	         if(marks3>maximum)
	         	maximum=marks3;
	message+="Maximum marks: "+to_string(getMaximum());
}

void GradeBook::showMessage()
{
	maximumCal();
	cout<<message<<endl;
}
#endif










