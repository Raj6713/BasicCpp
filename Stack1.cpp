/*Write a program which will implement a stack in c++*/
#include<iostream>
using namespace std;
#include<stack>
#include<cstdlib>
int main()
{
	int num;
	cout<<"How many numbers you want to push: ";
	cin>>num;
	stack<double> numbers;
	for(int i=0;i<num;i++)
	{
		numbers.push(rand()%100+0.5);
	}

	cout<<"/n Pop operation: ";
	for(int i=0;i<num;i++)
	{
		numbers.pop();
	}
	cout<<endl;
}