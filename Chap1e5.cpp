/*Write a program which will check equality of two numbers and 
will show result on screen.*/
#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter first num: ";
	cin>>num1;
	cout<<"Enter second num: ";
	cin>>num2;
	if(num1==num2)
		cout<<num1<<" = "<<num2<<"\n";
	if(num1>num2)
		cout<<num1<<" > "<<num2<<"\n";
	if(num1<num2)
		cout<<num1<<" < "<<num2<<"\n";
	return 0;
}