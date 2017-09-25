//Work: This header file will remove duplicate
//Author: raj6713631@gmail.com
#ifndef DUPLICATEELIM_H
#define DUPLICATEELIM_H
#include<iomanip>
#include<string>
#define MAX_SIZE 100
class Duplicate
{
private:
	int entries,counter;
	int arr[MAX_SIZE];
	int num;
public:
	Duplicate();
	~Duplicate();
	int getCounter();
	void setEntries(int);
	bool checkNum(int);
	void process();
	void displayMessage();
};
Duplicate::Duplicate(){counter=0;}
Duplicate::~Duplicate(){}

void setEntries(int a)
{
	if(a>0)
		entries=a;
	else
		entries=10;
}
int Duplicate::getCounter(){return counter;}

void Duplicate::process()
{
   cout<<"Enter Values: ";
   cin>>num;
   if(checkNum(num))
   {
   	arr[counter]=num;
   	counter++;
   }
}

bool Duplicate::checkNum(int a)
{
	register int i;
	bool result;
	for(i=0;i<getCounter();i++)
	{
		if(arr[i]==a)
		{
			result=false;
			break;
		}
	}
	return result;
}


void Duplicate::displayMessage()
{
	register int i;
	for(i=0;i<getCounter();i++)
		{cout<<setw(7)<<arr[i];
			if((i+1)%8==0)cout<<endl;
		}
}
#endif






