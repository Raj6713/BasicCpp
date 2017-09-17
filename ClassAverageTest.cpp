/*This will test class Average and show appropriate results*/
#include<iostream>
using namespace std;
#include<string>
#include "ClassAverage.h"
int main()
{
	string course,ins;
	int marks,counter;
	cout<<"Enter course Name: ";
	getline(cin,course);
	cout<<"Enter instructor: ";
	getline(cin,ins);
	cout<<"Enter class Strength: ";
	cin>>counter;
	ClassAverage cb1(counter,course,ins);
	cb1.calculation();
	cb1.displayMessage();
	return 0;
}