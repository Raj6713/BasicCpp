/*This class will test working of the employee class*/
#include<iostream>
using namespace std;
#include "Employee.h"
#include<string>
int main()
{
	string s1,s2;
	int value;
	Employee emp1("Raj","Kumar",12345);
	emp1.displayDetails();
	cout<<"Enter Details of Emp: "<<endl;
	cout<<"Enter first Name: ";
	cin>>s1;
	cout<<"Enter Last name: ";
	cin>>s2;
	cout<<"Enter Salary: ";
	cin>>value;
	cout<<"\nDetails of Employee"<<endl<<endl;
	emp1.setFname(s1);
	emp1.setLname(s2);
	emp1.setSalary(value);
	emp1.displayDetails();
	return 0;
}