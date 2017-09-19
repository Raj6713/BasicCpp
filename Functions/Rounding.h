//This class will take a number and based on user demand will round the number w
//with certain points
#ifndef ROUNDING_H
#define ROUNDING_H
#include<math.h>
#include<cstdlib>
class Rounding
{
private:
	float number,converted;
public:
	Rounding();
	~Rounding();
	void setNumber(float);
    float getNumber();
    float getConverted();
    void RoundToInteger();
    void RoundToTen();
    void RoundToHundred();
    void RoundToThousand();
    void displayMessage();
};


Rounding::Rounding()
{
	number=0.0;
	converted=0.0;
}

Rounding::~Rounding(){}

void Rounding::setNumber(float a)
{
	number=a;
}

float Rounding::getNumber()
{
	return number;
}

float Rounding::getConverted()
{
	return converted;
}

void Rounding::RoundToInteger()
{
	converted=floor(1*getNumber()+0.5)/1;
}

void Rounding::RoundToTen()
{
	converted=floor(10*getNumber()+0.5)/10;
}

void Rounding::RoundToHundred()
{
	converted=floor(100*getNumber()+0.5)/100;
}

void Rounding::RoundToThousand()
{
	converted=floor(1000*getNumber()+0.5)/1000;
}


void Rounding::displayMessage()
{
	cout<<"Original Number: "<<getNumber()<<endl;
	cout<<"Rounder Number: "<<getConverted()<<endl;
}
#endif