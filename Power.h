/*Write a program which will take calculate the power of a number*/
#include<iostream>
using namespace std;
#include<string>
class Power
{
private:
	float base,result;
	int power;
public:
	Power();
	void setBase(float);
	void setPower(int);
	float getBase();
	int getPower();
	void calculation();
	float getResult();
	void displayMessage();
};

Power::Power()
{
	base=1;
	result=0;
	power=0;
}

void Power::setBase(float p)
{
    base=p;
}

void Power::setPower(int p)
{
   power=p;
}

float Power::getBase(){return base;}
int Power::getPower(){return power;}
float Power::getResult(){return result;}

void Power::calculation()
{
	    result=1;
	    int i=1;
	    while(i<=power)
	    {
	    	result=result*base;
	    	i++;
	    }
}

void Power::displayMessage()
{
	cout<<getBase()<<"^"<<getPower()<<" = "<<getResult()<<endl;
}
