/*Write a program which will take numbers and will chedk of equality*/
#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cin>>num1;
	cin>>num2;
	if(num1>num2)
		cout<<num1<<" > "<<num2;
	if(num1<num2)
		cout<<num1<<" < "<<num2;
	if(num1==num2)
		cout<<num1<<" = "<<num2;
	return 0;
}