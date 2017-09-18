//This class will find the smallest number among the given
#include<iostream>
using namespace std;
#include<string>
#include<climits>
class Smallest
{
private:
	int num1,num2,num3,smallest;
	string message;
public:
	Smallest();
	~Smallest();
	void setValues(int,int,int);
	int getMinimum();
	void calculation();
	void displayMessage();
};

Smallest::Smallest()
{
	num1=num2=num3=0;
	smallest=INT_MAX;
}

Smallest::~Smallest(){}

void Smallest::setValues(int a,int b,int c)
{
	num1=a;
	num2=b;
	num3=c;
}

int Smallest::getMinimum(){return smallest;}

void Smallest::calculation()
{
	if(num1<smallest)smallest=num1;
	if(num2<smallest)smallest=num2;
	if(num3<smallest)smallest=num3;
	message+="Smallest is: "+to_string(getMinimum());
}

void Smallest::displayMessage()
{
    calculation();
    cout<<message<<endl;
}
