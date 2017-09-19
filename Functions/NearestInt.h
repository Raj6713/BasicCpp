//This header file will construct a class which will fint the nearest inte
//integer to a number and show that
#ifndef NEARESTNT_H
#define NEARESTNT_H
#include<math.h>
#include<iomanip>
class Nearest
{
private:
	float number;
	int converted;
public:
	Nearest();
	~Nearest();
	void setNumber(float);
	float getNumber();
	int getNearest();
	void calculation();
	void displayMessage();
};
Nearest::Nearest(){number=0.0; converted=0.0;}
Nearest::~Nearest(){}

void Nearest::setNumber(float a)
{
	number=a;
}

float Nearest::getNumber(){return number;}

int Nearest::getNearest(){return converted;}

void Nearest::calculation()
{
	converted=floor(getNumber()+0.5);
}

void Nearest::displayMessage()
{
	calculation();
	cout<<setw(20)<<"Number: "<<getNumber()<<endl;
	cout<<setw(20)<<"Integer equi: "<<getNearest()<<endl;
}
#endif