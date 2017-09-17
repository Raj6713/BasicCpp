/*Write a header file which will calculate things related to circle*/
#include<iostream>
using namespace std;
#include<math.h>
#define PI 3.14159
#include<iomanip>
class Circle
{
private:
	float radius,diameter,area,circumference;
	float getRadius();
	float getArea();
	float getCircumference();
	float getDiameter();
	void calculation();
public:
	Circle();
	void setRadius(float);
	void displayMessage();
};

Circle::Circle(){}

void Circle::setRadius(float p)
{
	if(p>=0)
		radius=p;
	else
		cerr<<"Radius is not negative"<<endl;
}


void Circle::calculation()
{
	area=PI*radius*radius;
	diameter=2*radius;
	circumference=2*PI*radius;
}

float Circle::getRadius(){return radius;}
float Circle::getDiameter(){return diameter;}
float Circle::getCircumference(){return circumference;}
float Circle::getArea(){return area;}

void Circle::displayMessage()
{
	calculation();
	cout<<"Radius is:"<<fixed<<setprecision(2)<<getRadius()<<endl;
	cout<<"Diameter is:"<<fixed<<setprecision(2)<<getDiameter()<<endl;
	cout<<"circumference is: "<<fixed<<setprecision(2)<<getCircumference()<<endl;
	cout<<"Area is: "<<fixed<<setprecision(2)<<getArea()<<endl;
}