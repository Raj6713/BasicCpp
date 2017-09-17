/*Write a program which will create a employee class */
#include<iostream>
using namespace std;
#include<string>
class Employee
{
private:
	string fname,lname;
	int salary;
public:
	Employee(string f,string l,int p);
	void setFname(string s);
	void setLname(string s);
	void setSalary(int p);
	string getFname();
	string getLname();
	int getSalary();
	void displayDetails();
};

Employee::Employee(string f,string l,int p)
{
	fname=f;
	lname=l;
	salary=p;
}

void Employee::setFname(string s)
{
	if(s!="")
	fname=s;
}

void Employee::setLname(string s)
{
	if(s!="")
	lname=s;
}

void Employee::setSalary(int p)
{
	if(p>0)
	salary=p;
    else
    	cerr<<"Salary Cannot be negative."<<endl;
}

string Employee::getFname(){return fname;}
string Employee::getLname(){return lname;}
int Employee::getSalary(){return salary;}

void Employee::displayDetails()
{
	cout<<"Employee First Name: "<<getFname()<<endl;
	cout<<"Employee Last Name: "<<getLname()<<endl;
	cout<<"Employee Salary: "<<getSalary()<<endl;
}












