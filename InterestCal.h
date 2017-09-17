/*Write a program which will show the working of the principal and 
interest calculator*/
#include<iostream>
using namespace std;
#include<iomanip>
#include<string>
class Interest
{
private:
	float principal,intRate,amount;
	int years;
    string message;
public:
	Interest();
	~Interest();
	void setParameters(float,float,int);
	void displayMessage();
	float getPrincipal();
	float getIntRate();
	float getNumYears();
	void calculation();
};

Interest::Interest()
{
	principal=0.0;
	intRate=0.0;
	numOfYears=0;
	amount=0;
	message="";
}

Interest::~Interest(){}

void Interest::setParameters(float a,float b,float c)
{
	if(a>0)
		princiapl=a;
	else
		cerr<<"Principal amount should be greater than 0"<<endl;
	if(b>0 && b<1)
		intRate=b;
	else
		cerr<<"Interest rate is out or range"<<endl;
	if(c>0)
		years=c;
	else
		cerr<<"Years cannot be negative"<<endl;
}

float Interest::getPrincipal(){return principal;}

float Interest::getIntRate(){return intRate;}

int Interest::getNumYears(){return years;}

void Interest::calculation()
{
	for(int i=0;i<getNumYears();i++)
	{
		amount=principal*(1+getIntRate());
		message+=to_string(i)+" "+
	}
}











void Interest::displayMessage()
{
	cout<<message<<endl;
}

