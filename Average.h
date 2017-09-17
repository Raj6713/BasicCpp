/*This header file will calclate sum of the values till a prespecified values
is not entered*/
#ifndef AVERAGE_H
#define AVERAGE_H
#include<iostream>
using namespace std;
#include<iomanip>
#include<string>
class Average
{
private:
	int num,counter;
	float avg;
	string message;
public:
	Average();
	~Average();
	void calculation();
	float getAverage();
	int getCounter();
	void displayMessage();
};


Average::Average()
{
	num=0;
	counter=0;
	avg=0.0;
	message="";
}

Average::~Average(){}

float Average::getAverage(){return avg;}

int Average::getCounter(){return counter;}

void Average::calculation()
{
	bool flag=true;
	do
	{
		cout<<"Enter number(9999 to break):";
		cin>>num;
		if(num==9999)
			break;
		else
		{
			avg+=num;
			counter++;

		}
	}while(flag);
	message="Average is"+to_string(getAverage()/getCounter())+"\n";
}

void Average::displayMessage()
{
	cout<<message<<endl;
}
#endif










