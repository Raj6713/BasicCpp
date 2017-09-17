/*Write a program which will read a file and will show output*/
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main()
{
	ofstream outClientFile("G:/C++/Addition.cpp",ios::out);
	if(!outClientFile)
	{
		cerr<<"System cannot read file"<<endl;
		exit(1);
	}
	int account;
	string name;
	double balance;
	cout<<"Enter account,name and balance\n";
	while(cin>>account>>name>>balance)
	{
		outClientFile<<account<<' '<<name<<' '<<balance;
		cout<<'?';
	}

}