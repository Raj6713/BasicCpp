/*This class will calculate the factorial and will show output for small
numbers*/
#include<iostream>
using namespace std;
#include<iomanip>
#include<string>
class Factorial
{
private:
	int num;
	long long int fac;
public:
	Factorial();
	void setNum(int p);
	void calculation();
	int  getNum();
	long long int getFacto();
	void displayMessage();
};
Factorial::Factorial()
{
	num=0;
	fac=1;
}

void Factorial::setNum(int p)
{
	if(p>=0)
		num=p;
	else
		cerr<<"Factorial cannot be calculated for negative"<<endl;
}

void Factorial::calculation()
{
    int p=num;
    while(p>0)
    {
    	fac*=p;
    	p--;
    }
}

int Factorial::getNum(){return num;}
long long int Factorial::getFacto(){return fac;}

void Factorial::displayMessage()
{
	calculation();
	cout<<"Number: "<<getNum()<<endl;
	cout<<"Factorial value: "<<getFacto()<<endl;
}