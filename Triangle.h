#include<iostream>
using namespace std;
#include<iomanip>
class Triangle
{
private:
	float side1,side2,side3;
	bool result;
	float getSide1();
	float getSide2();
	float getSide3();
	bool getResult();
	void calculation();
public:
	Triangle();
	void setSides(float,float,float);
	void displayMessage();
};
Triangle::Triangle()
{
	side1=side2=side3=0;
}

void Triangle::setSides(float a,float b,float c)
{
	if(a>0 && b>0 && c>0)
	{
       side1=a;
       side2=b;
       side3=c;
	}
	else
		cerr<<"Sides cannot be negative"<<endl;
}


void Triangle::calculation()
{
   float p1,p2,p3;
   p1=side1+side2;
   p2=side2+side3;
   p3=side3+side1;
   if(p1>side3 && p2>side1 && p3>side2)
   	result=true;
   else
   	result=false;
}

float Triangle::getSide1(){return side1;}

float Triangle::getSide2(){return side2;}

float Triangle::getSide3(){return side3;}

bool Triangle::getResult(){return result;}

void Triangle::displayMessage()
{
	cout<<"Given tirangle side:"<<endl;
	cout<<getSide1()<<endl<<getSide2()<<endl<<getSide3()<<endl;
	cout<<"Triangle possible: "<<getResult()<<endl;
}