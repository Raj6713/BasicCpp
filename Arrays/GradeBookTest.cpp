//Work:: Will test working of the GradeBook.h header file
//Author: raj6713631@gmail.com
#include<iostream>
using namespace std;
#include "GradeBook.h"
#include<string>
int main()
{
	int size;
	string p1,p2;
	char ch;
	do
	{
	    GradeBook gb1;
		cout<<"Enter size:";
		cin>>size;
		cout<<"Enter courseName: ";
		getline(cin,p1);
		cout<<"Enter Instructor Name: ";
		getline(cin,p2);
        gb1.setInstructor(p2);
		gb1.setCourseName(p1);
		gb1.setClassSize(size);
        gb1.setArrayValues();
        gb1.displayMessage();
        cout<<"Want to continue: press Y or y"<<endl;
        cin>>ch;
	}while(ch=='Y' || ch=='y');
	return 0;
}