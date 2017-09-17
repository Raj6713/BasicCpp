/*This header class will sum values*/
#ifndef SUMMING_H
#define SUMMING_H
#include<iostream>
using namespace std;
#include<string>
#include<iomanip>
class Summing
{
private:
	int count,num,sum;
	string message;
public:
	Summing();
	~Summing();
	void setCounter(int);
	int getCounter();
    void calculation();
    void displayMessage();
};

Summing::Summing()
{
	sum=0;
	num=0;
	count=0;
	message="";
}

Summing::~Summing(){}

void Summing::setCounter(int p)
{
	if(p>0)
		count=p;
	else
		cerr<<"Counter cannot be negatve.";
}
int Summing::getCounter(){return count;}

void Summing::calculation()
{
    message+="Sum of Numbers entered when counter "+to_string(getCounter())+"\n";
    for(int i=0;i<getCounter();i++)
    {
    	cin>>num;
    	sum+=num;
    }   
    message+="\n"+to_string(sum);
}

void Summing::displayMessage()
{
	cout<<message<<endl;
}
#endif




















