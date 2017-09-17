/*Write a program which will add two numbers and will show output*/
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,sum;
	cout<<"Enter num1: ";
	cin>>num1;
	cout<<"Enter num2: ";
	cin>>num2;
	sum=num1+num2;
	cout<<"\n"<<num1<<" + "<<num2<<" = "<<sum;
	return 0;
}