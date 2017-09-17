/*Write a program which will find the cube and sqrt of a given number*/
#include<math.h>
#include<iostream>
using namespace std;

template<class X>X cube(X &num)
{
	X num1;
    num1=num*num* num;
    return num1;
}

int main()
{
	int number;
	cout<<"Enter a number: ";
	cin>>number;
	cout<<"Number before operation: "<<number;
	number=cube(number);
	cout<<"Number after operation: "<<number;

}