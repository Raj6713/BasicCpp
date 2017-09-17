/*Write a program which will take three numbers and fnd the largest among them
*/
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"Eter three numbers: ";
	cin>>num1>>num2>>num3;
	if(num1>num2 && num1>num3)
		cout<<"Largest is: "<<num1;
	else if(num2>num3)
		cout<<"Largest is: "<<num2;
	else
		cout<<"Largest is: "<<num3;
	return 0;
}