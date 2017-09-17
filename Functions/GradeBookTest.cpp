/*This class will test gradebook class*/
#include<iostream>
using namespace std;
#include "GradeBook.h"
int main()
{
	GradeBook gb1;
	string p1;
	int m1,m2,m3;
	cout<<"Enter course Name: ";
	cin>>p1;
	gb1.setCourse(p1);
	cout<<"Enter student Name: ";
	cin>>p1;
	gb1.setStudent(p1);
	cout<<"Enter marks: ";
	cin>>m1>>m2>>m3;
	gb1.setMarks(m1,m2,m3);
	gb1.showMessage();
	return 0;
}