/*Write a program which will print the salary of a sales commision agent*/
#include<iostream>
using namespace std;
#include "SalesCommision.h"
#include<string>
int main()
{
	string s;
	float sales;
	SalesCommision sc;
	cout<<"Before initialization: ";
	sc.displayMessage();
	cout<<"Enter firstName: ";
	getline(cin,s);
	sc.setFname(s);
	cout<<"Enter Last Name: ";
	getline(cin,s);
	sc.setLname(s);
	cout<<"Enter sales ";
	cin>>sales;
	sc.setSales(sales);
	sc.calculation();
	sc.displayMessage();
    return 0;
}