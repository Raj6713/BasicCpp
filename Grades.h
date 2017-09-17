/*This program will take the marks and will show the corresponding 
grades */
#include<iostream>
using namespace std;
#include<string>
class Grades
{
private:
	string s;
	float marks;
public:
	Grades();
	void calculation();
	void setMarks(float mark);
	string getGrades();
	void displayMessage();
};

Grades::Grades(){}

void Grades::setMarks(float mark){marks=mark;}
void Grades::calculation()
{
	if(marks>=0 && marks<=100)
	{
       if(marks>90.0)
       	s="Ex";
       else if(marks>80.0)
       	s="A";
       else if(marks>70.0)
       s="B";
       else if(marks>60.0)
       	s="C";
       else if(marks>50.0)
       	s="D";
       else if(marks>35.0)
       	s="P";
       else
       	s="F";
	}
	else
		cerr<<"Marks out of bound."<<endl;
}

string Grades::getGrades(){return s;}

void Grades::displayMessage()
{
    calculation();
	cout<<"Grade Obtained: "<<s<<endl;
}
