/*Write a program which will show the working of pass by values and pass for reference*/
//@RAJ KUMAR
#ifndef SQUARED_H
#define SQUARED_H
#include<iostream>
using namespace std;
#include<string>
#include<cstdlib>
#include<iomanip>
class Squared
{
	private:
		int num,value;
	public:
		Squared();
		~Squared();
		void setNum(int);
		int getNum();
		int getValue();
		void squareByValue(int);
		void squareByReference(int &);
		void displayMessage();
};

Squared::Squared(){num=0;value=0;}

Squared::~Squared(){}

void Squared::setNum(int a)
{
	num=a;
}

int Squared::getNum(){return num;}

int Squared::getValue(){return value;}

void Squared::squareByValue(int a)
{
	value=a*a;
}

void Squared::squareByReference(int &a)
{
	value=a*a;
}

void Squared::displayMessage()
{
    squareByValue(getNum());
    cout<<"Value is: "<<getNum()<<" "<<getValue();
    squareByReference(num);
    cout<<"\nValue is: "<<getNum()<<" "<<getValue();
}
#endif