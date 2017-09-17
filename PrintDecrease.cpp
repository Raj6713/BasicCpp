/*Write a program which will take numbers in increasing size
and then will print them in reverse order and will break if 
previous number is smaller then input*/
#include<iostream>
using namespace std;
#include<stack>
#include<climits>
int main()
{
	int predecessor,input;
    input=INT_MIN;
	stack<int> values;
	do
	{
		predecessor=input;
		cout<<"Enter number: ";
		cin>>input;
		values.push(input);
	}while(predecessor<input);
	cout<<endl<<endl;
	cout<<"Values in decreasing order\n";
	values.pop();
	while(!values.empty())
	{
		cout<<values.top()<<"\n";
		values.pop();
	}
	return 0;
}