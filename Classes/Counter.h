//Work: This class will create a count class and show working of it.
//written by: raj6713631@gmail.com
#ifndef COUNTER_H
#define COUNTER_H
#include<iomanip>
#include<cstdlib>
class Count
{
private:
	int count;
public:
	Count();
	~Count();
	void setX(int);
	int getX();
    void displayMessage();
};

Count::Count()
{
	count=0;
}

Count::~Count(){cout<<"Destrucor"<<endl;}

void Count::setX(int a){count=a;}

int Count::getX(){return count;}

void Count::displayMessage()
{
  cout<<"Value of counter is: "<<getX()<<endl;	
}
#endif
