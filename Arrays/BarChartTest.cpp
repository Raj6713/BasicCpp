//Work: Will check working of the Barchart header
//author: raj6713631@gmail.com
#include<iostream>
using namespace std;
#include<string>
#include "BarChart.h"
int main()
{
	char ch;
   int size;
   string ins,course;
   do
   {
   	cout<<"Course name: "<<endl;
   	getline(cin,course);
   	cout<<"Instructor name: "<<endl;
   	getline(cin,ins);
   	cout<<"Enter class Size: "<<endl;
   	cin>>size;
   	BarChart br;
   	br.setSize(size);
   	br.setCourse(course);
   	br.setInstructor(ins);
   	br.displayMessage();
   	cout<<"Want to repeat again: Y or n"<<endl;
   	cin>>ch;
   }while(ch=='Y' || ch=='y');
   return 0;
}