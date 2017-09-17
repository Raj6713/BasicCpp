/*Write a program which will take a string and reverse it using
stack and show output of it.*/
#include<iostream>
using namespace std;
#include<stack>
#include<string>
int main()
{
	stack<char> sp;
	char ch;
	cout<<"Enter a string: ";
	do
	{
		cin>>ch;
		sp.push(ch);
	}while(ch!='9');

	cout<<endl<<endl;
	cout<<"The reversed String is:\n";
	sp.pop();
	while(!sp.empty())
	{
		cout<<sp.top();
		sp.pop();
	}
	return 0;
}