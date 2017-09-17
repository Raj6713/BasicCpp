/*Write a program which will print the values on the screen*/
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<math.h>
using namespace std;
void outputFile(int,int,int,double);
int main()
{
	ifstream inClientFile("G:/C++/p1.txt",ios::in);
	if(!inClientFile)
	{
		cerr<<"System cannot open File"<<endl;
		exit(1);
	}
	int a,b,c;
	double d;
    
	inClientFile>>a>>b>>c>>d
	outputFile(a,b,c,d);
}

void outputFile(int a,int b,int c,double d)
{
	cout<<setw(10)<<a<<setw(10)<<b<<setw(10)<<c<<setw(10)<<d<<endl;
}