//Work: Will check Sales Person Test class
//Author: raj6713631@gmail.com
#include<iostream>
using namespace std;
#include "Sales.h"
int main()
{
	char ch;
	do
	{
		Sales sp;
		sp.displayMessage();
		cout<<"Want to continue: Press Y or y"<<endl;
		cin>>ch;
	}while(ch=='Y'|| ch=='y');
	return 0;
}