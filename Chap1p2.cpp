/*Write a program which will find the sum,product,difference
,quotient*/
#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter two numbers: ";
	cin>>num1>>num2;
	int sum=num1+num2;
	int product=num1*num2;
	int difference=num1-num2;
	int quotient=num1%num2;
	cout<<"\nSum is: "<<sum;
    cout<<"\nProduct is: "<<product;
    cout<<"\nDifference is: "<<difference;
    cout<<"\nQuotient is: "<<quotient;
    return 0;
}