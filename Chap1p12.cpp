/*Write a program which will print the digits of a five 
digit number seperately*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num;
	cout<<"Enter number: ";
	cin>>num;
	int a,b,c,d,e;
	a=num%10;num=num/10;
	b=num%10;num=num/10;
	c=num%10;num=num/10;
	d=num%10;num=num/10;
	e=num;
	cout<<"Number seperated is: ";
	cout<<setw(3)<<e<<setw(3)<<d<<setw(3)<<c<<setw(3)<<b<<setw(3)<<a;
	return 0;
}