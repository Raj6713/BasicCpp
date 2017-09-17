/*This program is a refied program for the given*/
#include<iostream>
using namespace std;
#include<stack>
int main()
{
	stack<double> numbers;
	int num;
	double value;
	cout<<"How many numbers you want to push: ";
	cin>>num;
	for(int i=0;i<num;i++)
	{
		cout<<"Value:  ";
		cin>>value;
		numbers.push(value);
	}

	cout<<endl<<endl;
	cout<<"Here we will print the pop value: \n";
	while(!numbers.empty())
	{
		cout<<numbers.top()<<"\n";
		numbers.pop();
	}
	return 0;
}