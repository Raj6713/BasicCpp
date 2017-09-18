/*This class based program will square a number*/
//@RAJKUMAR
#ifndef SQUARE_H
#define SQUARE_H
#include<iostream>
using namespace std;
#include<cstdlib>
#include<iomanip>
class Square
{
private:
	float num,square;
public:
	Square();
	~Square();
	void setNumber(float);
	float getNumber();
	float getSquare();
	void calculation();
	void displayMessage();
};

Square::Square(){num=0.0;}
Square::~Square(){}

void Square::setNumber(float in)
{
	num=in;
}

float Square::getNumber(){return num;}
float Square::getSquare(){return square;}

void Square::calculation()
{
	square=getNumber()*getNumber();
}

void Square::displayMessage()
{
	calculation();
	cout<<"Number: "<<fixed<<setw(20)<<setprecision(3)<<getNumber()<<endl;
	cout<<"Square: "<<fixed<<setw(20)<<setprecision(3)<<getSquare()<<endl;
}
#endif