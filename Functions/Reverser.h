//Work will take a number and will reverse it
//Author: raj6713631@gmail.com
#ifndef REVERSER_H
#define REVERSER_H
#include<string>
class Reverser
{
private:
	int number;
	string s1,s2;
public:
	Reverser();
	~Reverser();
	void setNumber(int);
	int getNumber();
	int getResult();
	void reverse();
	void displayMessage();
};

Reverser::Reverser()
{
	number=0;
	s1=s2="";
}

Reverser::~Reverser(){}

void Reverser::setNumber(int a)
{
	number=a;
}

int Reverser::getNumber(){return number;}

int Reverser::getResult(){return stoi(s2);}

void Reverser::reverse()
{
   s1=to_string(getNumber());
   register int i;
   for(i=s1.length()-1;i>=0;i--)
   {
   	s2+=s1[i];
   }
}

void Reverser::displayMessage()
{
	reverse();
   cout<<"Original number: "<<getNumber()<<endl;
   cout<<"Reversed number: "<<getResult()<<endl;
}
#endif