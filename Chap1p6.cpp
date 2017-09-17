/*Write a program which will find diameter,circumference and area*/
#include<iostream>
using namespace std;
#include<iomanip>
#define PI 3.14159
int main()
{
	float radius,diameter,circumference,area;
	cout<<"Enter radius of circle: ";
	cin>>radius;
	diameter=2*radius;
	area=PI*radius*radius;
	circumference=2*PI*radius;
	cout<<"\nRadius: "<<setw(10)<<radius;
	cout<<"\nDiameter: "<<setw(10)<<diameter;
	cout<<"\nCircumference: "<<setw(10)<<circumference;
	cout<<"\nArea: "<<setw(10)<<area;
	return 0;
}