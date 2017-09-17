/*This program will take various precision and field which is input
by used provided a number also*/
#include<iostream>
using namespace std;
#include<string>
#include<iomanip>
class DiffPrecision
{
private:
	int locField,precisionField,num;
public:
	DiffPrecision();
	~DiffPrecision();
	void setLocField(int);
	void setPrecisionField(int);
	int getLocField();
	int getPrecision();
	void displayMessage();
};

DiffPrecision::DiffPrecision()
{
	num=100.00;
	locField=10;
	precisionField=10;
}

DiffPrecision::~DiffPrecision(){}

void DiffPrecision::setLocField(int p)
{
	if(p>0)
	locField=p;
    else
    	locField=10;
}

void DiffPrecision::setPrecisionField(int p)
{
	if(p>0)
		precisionField=p;
	else
		precisionField=10;
}

int DiffPrecision::getLocField(){return locField;}
int DiffPrecision::getPrecision(){return precisionField;}

void DiffPrecision::displayMessage()
{
	cout<<setw(getLocField())<<setprecision(getPrecision())<<num;
}






