#ifndef FORLOOPER_H
#define FORLOOPER_H
#include<iostream>
using namespace std;
#include<string>
#include<iomanip>
#include<climits>
class ForLooper
{
   private:
   int counter,value,maximum;
   string message;
   public:
   	ForLooper();
   	~ForLooper();
   	void setCounter(int);
   	int getCounter();
   	int getMaximum();
   	void calculation();
   	void displayMessage();
};

ForLooper::ForLooper()
{
	counter=0;
	value=0;
	maximum=INT_MIN;
}

ForLooper::~ForLooper(){}

void ForLooper::setCounter(int p)
{
	if(p>0)
		counter=p;
	else
		cerr<<"Counter cannot be negative"<<endl;
}

int ForLooper::getCounter(){return counter;}

int ForLooper::getMaximum(){return maximum;}

void ForLooper::calculation()
{
   for(int i=0;i<getCounter();i++)
   {
   	cout<<"Enter num:  ";
   	cin>>value;
   	if(value>maximum)
   		maximum=value;
   }
   message+="Maximum values is: "+to_string(getMaximum());
}

void ForLooper::displayMessage()
{
	cout<<message<<endl;
}
#endif





