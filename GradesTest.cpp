/*This class will test grades class and will show output*/
#include<iostream>
using namespace std;
#include "Grades.h"
int main()
{
	float marks;
	Grades gr;
	cout<<"Before initialization: ";
	gr.displayMessage();
	cout<<"Enter marks:";
	cin>>marks;
	gr.setMarks(marks);
	gr.displayMessage();
	return 0;
}