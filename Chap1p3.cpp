/*Write a program which will compare two numbers and will show 
output on screen.*/
#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter two numbers: ";
	cin>>num1>>num2;
	if(num1==num2)
	{
      cout<<num1<<" = "<<num2<<endl;
	}
	else
	{
		if(num1>num2)
			cout<<num1<<" > "<<num2<<endl;
		else
			cout<<num2<<" > "<<num1<<endl;
	}
	return 0;
}