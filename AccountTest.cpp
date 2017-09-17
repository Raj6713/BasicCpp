/*Write a program which will show the working of the Account class
and show output on screen.*/
#include<iostream>
using namespace std;
#include "Account.h"
int main()
{
	char ch;
	int k,amount;
    Account raj(100);
    do
    {
      cout<<"1. For Credit\n2. For debit"<<endl;
      cin>>k;
      if(k==1)
      {
      	cout<<"Enter amount:"<<endl;
      	cin>>amount;
        raj.credit(amount);
        raj.displayBalance();
      }
      else if(k==2)
      {
            cout<<"Enter amount:"<<endl;
      	cin>>amount;
        raj.debit(amount);
        raj.displayBalance();
      }
      else
      	cerr<<"Wrong input"<<endl;
      cout<<"Press Y or y for again"<<endl;
      cin>>ch;
    }while(ch=='Y' || ch=='y');
}