//Work: This header will check whatever a input number is prime or not
//Author: raj6713631@gmail.com
#ifndef PRIMECHECK_H
#define PRIMECHECK_H
#include<math.h>
class Prime
{
private:
	int number;
	bool result;
public:
	Prime();
	~Prime();
	void setNumber(int);
	int getNumber();
	bool getResult();
	void checkPrime();
	void displayMessage();
};

Prime::Prime()
{
   number=0;
   result=false;
}

Prime::~Prime(){}
void Prime::setNumber(int a)
{
	if(a>0)
		number=a;
	else
		number=-a;
}

int Prime::getNumber(){return number;}

bool Prime::getResult(){return result;}

void Prime::checkPrime()
{
	register bool flag=true;
	register int i;
    for(i=2;i<=sqrt(getNumber())+1;i++)
    {
    	if(getNumber()%i==0)
    	{
    		flag=false;
    		break;
    	}
    }
    if(flag==true)
    	result=true;
    else
    	result=false;
}

void Prime::displayMessage()
{
	checkPrime();
  cout<<"Number: "<<getNumber()<<endl;
  cout<<"Is prime: "<<boolalpha<<getResult()<<endl;
}
#endif