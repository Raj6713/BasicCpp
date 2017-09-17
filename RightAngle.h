/*Write a program which will show that a triangle is right angle*/
/*@Raj Kumar*/
#include<iostream>
using namespace std;
#include<iomanip>
#include<math.h>
class RightAngle
{
private:
	float side1,side2,side3;
	bool result;
public:
	RightAngle();
	void setSides(float, float,float);
	float getSide1();
	float getSide2();
	float getSide3();
	bool getResult();
	void calculation();
	void displayMessage();
};
/*Constructor*/
RightAngle::RightAngle()
{
	side1=side2=side3=0.0;
	result=false;
}

void RightAngle::setSides(float a,float b,float c)
{
	side1=a;
	side2=b;
	side3=c;
}

void RightAngle::calculation()
{
	if(side1>0 && side2>0 && side3>0)
	{
		if((side1+side2)>side3 && (side2+side3)>side1 && (side3+side1)>side2)
		{
          bool s1,s2,s3;
          s1=pow(side1,2)+pow(side2,2)==pow(side3,2)?true:false;
          s1=pow(side2,2)+pow(side3,2)==pow(side1,2)?true:false;
          s1=pow(side3,2)+pow(side1,2)==pow(side2,2)?true:false;

          if(s1 || s2 || s3)
          result=true;
          else
          result=false;         
		}
	}
	else
		cerr<<"Sides cannot be negative"<<endl;
}

float RightAngle::getSide1(){return side1;}
float RightAngle::getSide2(){return side2;}
float RightAngle::getSide3(){return side3;}
bool RightAngle::getResult(){return result;}

void RightAngle::displayMessage()
{
	calculation();
	cout<<"Side1: "<<getSide1()<<endl;
	cout<<"Side2: "<<getSide2()<<endl;
	cout<<"Side3: "<<getSide3()<<endl;
	cout<<"Right Angle Triangle: "<<boolalpha<<getResult()<<endl;
}