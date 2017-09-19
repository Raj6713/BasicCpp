//Write a program which will take base and exponent and than calculate
//values of the given
#ifndef EXPONENT_H
#define EXPONENT_H
class Exponent
{
private:
	float base,exponent,result;
public:
	Exponent();
	~Exponent();
	void setBase(float);
	void setPower(int);
	float getBase();
	int getPower();
	float getResult();
	void calculation();
	void displayMessage();
};


Exponent::Exponent()
{
	base=0;
	exponent=0;
	result=1;
}
Exponent::~Exponent(){}

void Exponent::setBase(float p)
{
	base=p;
}

void Exponent::setPower(int a)
{
	if(a>0)
		exponent=a;
	else
		exponent=0;
}


float Exponent::getBase(){return base;}

int Exponent::getPower(){return exponent;}

float Exponent::getResult(){return result;}

void Exponent::calculation()
{
	int k=getPower();
    while(k>0)
    {
    	result=result*getBase();
    	k--;
    }
}


void Exponent::displayMessage()
{
	cout<<"Base: "<<getBase()<<endl;
	cout<<"Power: "<<getPower()<<endl;
	cout<<"Result: "<<getResult()<<endl;
}
#endif