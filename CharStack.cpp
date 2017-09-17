#include<iostream>
using namespace std;
#include"Stack.h"
#include<cstdlib>
int main()
{
	Stack<char> charStack(26);
	char ch='A';
	int i=0;
	while(charStack.push(ch))
	{
		ch=(char(65+i++));
		cout<<ch<<' ';
	}
	cout<<"\nCannot push value"<<ch<<"\nWill pop values";

	while(charStack.pop(ch))
	{
		cout<<ch<<' ';
	}
	cout<<"\nCannot pop values";

}