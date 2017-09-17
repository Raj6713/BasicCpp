/*This class will represent an account and will show the credit debit
and will set Account values along with display message*/
#include<iostream>
using namespace std;
#include<string>
class Account
{
private:
	int balance;
public:
	Account(int val);
	void credit(int value);
	void debit(int value);
	void displayBalance();
};

Account::Account(int val)
{
	if(val<0)
		balance=0;
	else
		balance=val;
	cerr<<"Initial Balanace was invalid"<<endl;
}

void Account::credit(int value)
{
	if(value<0)
	{
		cerr<<"Credit ammout cannot be negative"<<endl;
	}
	else
		balance=balance+value;
}

void Account::debit(int value)
{
	if(value<0)
		cerr<<"Debit amount cannot be negative"<<endl;
	else
	{
		if(balance>=value)
			balance-=value;
		else
			cerr<<"Debit not possible,low balance"<<endl;
	}
}


void Account::displayBalance()
{
	cout<<"Balance is "<<balance<<endl;
} 


























