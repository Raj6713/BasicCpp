/*Write a program which will find sum, avg,product,largest and smallest
for three input numbers*/
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"Enter three numbers: ";
	cin>>num1>>num2>>num3;
	int sum=num1+num2+num3;
	float avg=sum/3;
	int product=num1*num2*num3;
    int largest;
	if(num1>num2 && num1>num3)
		largest=num1;
	else if(num2>num3)
		largest=num2;
	else
		largest=num3;
    int smallest;
	if(num1<num2 && num1<num3)
		smallest=num1;
	else if(num2<num3)
		smallest=num2;
	else
		smallest=num3;
	cout<<"\nSum is: "<<sum;
	cout<<"\nProduct is: "<<product;
	cout<<"\nAverage is: "<<avg;
	cout<<"\nLargest is: "<<largest;
	cout<<"\nSmallest is: "<<smallest;
	return 0;
}