/*Write a program which will perform fibbonaci and will show output*/
#include<iostream>
using namespace std;
#include<string>
#include<climits>
class Fibbonaci
{
private:
	int num;
public:
	Fibbonaci();
	~Fibbonaci();
	void setNum(int);
	int getNum();
	unsigned long fibbonaci(int);
	void displayMessage();
};
Fibbonaci::Fibbonaci(){}

Fibbonaci::~Fibbonaci(){}

void Fibbonaci::setNum(int a)
{
	if(a>=0)
		num=a;
    else
    	cerr<<"Fibbonaci is not possible for negative numbers"<<endl;
}

int Fibbonaci::getNum(){return num;}

unsigned long Fibbonaci::fibbonaci(int num)
{
	if(num==0 || num==1)
		return 1;
	else
		return fibbonaci(num-1)+fibbonaci(num-2);
}

void Fibbonaci::displayMessage()
{
	cout<<"Number is: "<<getNum()<<endl;
	cout<<"Value of fibbonaci sequence is: "<<fibbonaci(getNum())<<endl;
}