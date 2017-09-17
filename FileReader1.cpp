/*Write a program which will read the lines*/
#include<iostream>
#include<cstdlib>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;
void outputFile(int,const string,double);
int main()
{
	ifstream inClientFile("G:/C++/Addition.cpp",ios::in);
	if(!inClientFile)
	{
		cerr<<"File cannot read files"<<endl;
		exit(1);
	}

	int account;
	string name;
	double balance;
	cout<<setw(10)<<"Account"<<setw(20)<<"Name"<<setw(20)<<"Balance"<<endl;
	inClientFile>>account>>name>>balance;
	outputFile(account,name,balance);
}

void outputFile(int acc,const string name,double value)
{
	cout<<setw(10)<<acc<<setw(20)<<name<<setw(10)<<value<<"\n";
}