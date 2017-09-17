/*This template will compare two values and will show the
corresponding output on screen.*/
#include<iostream>
using namespace std;
#include<cstdlib>
#include<iomanip>

template<typename T>
void isEqualTo(T &a,T &b)
{
     if(a==b)
     	cout<<a<<" is equal to "<<b<<"\n";
     else
     	cout<<a<<" is not equal to "<<b<<"\n";
}

int main()
{
	int num1,num2;
	char ch1,ch2;
	float num3,num4;
	cout<<"Enter two numbers\n";
	cin>>num1>>num2;
	isEqualTo(num1,num2);
	cout<<"Enter two float numbers\n";
	cin>>num3>>num4;
	isEqualTo(num3,num4);
	cout<<"Enter two characters:\n";
	cin>>ch1>>ch2;
	isEqualTo(ch1,ch2);
	return 0;
}