/*Write a program which will swap values using template class*/
#include<iostream>
using namespace std;
 template<class X>void swapargs(X &a,X &b)
 {
 	X temp;
 	temp=a;
 	a=b;
 	b=temp;
 }

 int main()
 {
 	int num1,num2;
 	float num3,num4;
 	char ax,bx;
 	cout<<"Enter two numbers: ";
 	cin>>num1>>num2;
 	cout<<"Enter two float values: ";
 	cin>>num3>>num4;
 	cout<<"Enter two characters: ";
 	cin>>ax>>bx;
 	cout<<"Before swapping\n";
 	cout<<num1<<" "<<num2<<"\n";
 	cout<<num3<<" "<<num4<<"\n";
 	cout<<ax<<" "<<bx<<"\n";

 	swapargs(num1,num2);
 	swapargs(num3,num4);
 	swapargs(ax,bx);

 	cout<<"After swapping\n";
 	cout<<num1<<" "<<num2<<"\n";
 	cout<<num3<<" "<<num4<<"\n";
 	cout<<ax<<" "<<bx<<"\n";
 	return 0;
 }