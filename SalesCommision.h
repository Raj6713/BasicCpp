/*Write a program which will find the sales commision formed
and will output the result*/
#include<iostream>
using namespace std;
#include<string>
#include<iomanip>
class SalesCommision
{
private:
   string fname,lname;
   float sales,salary;
public:
	SalesCommision();
	void setFname(string s);
	void setLname(string s);
	void setSales(float p);
	string getFname();
	string getLname();
	float getSales();
	float getSalary();
	void calculation();
	void displayMessage();
};

SalesCommision::SalesCommision()
{
	sales=0.0;
	salary=0.0;
	fname="";
	lname="";
}

void SalesCommision::setFname(string s)
{
	fname=s;
}

void SalesCommision::setLname(string s)
{
	lname=s;
}

void SalesCommision::setSales(float p)
{
	if(p>0)
		sales=p;
	else
		sales=0.0;
}

string SalesCommision::getFname(){return fname;}
string SalesCommision::getLname(){return lname;}
float SalesCommision::getSales(){return sales;}
float SalesCommision::getSalary(){return salary;}

void SalesCommision::calculation()
{
    
	salary=200+0.09*sales;

}

void SalesCommision::displayMessage()
{
	cout<<"First Name: "<<getFname()<<endl;
	cout<<"Last Name: "<<getLname()<<endl;
	cout<<"Sales: $ "<<getSales()<<endl;
	cout<<"Salary: $ "<<getSalary()<<endl;
}













