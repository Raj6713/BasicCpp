/*Write a program which will show take a number ans check whatever
it is palindrome or not*/
#include<iostream>
using namespace std;
#include<string>
#include<math>
class Palindrome
{
private:
	int number;
	bool message;
public:
	Palindrome();
	void getNumber(int);
	void calculation();
	bool getMessage();
	void displayMessage();
}
Palindrome::Palindrome()
{
	message=false;
}

void Palindrome::getNumber(int p)
{
	number=p;
}

void Palindrome::calculation()
{
	int i=0,oldCopy,p,newNum=0;
	oldCopy=number;
	while(oldCopy>0)
	{
          p=oldCopy%10;
          oldCopy/=10;
          newNum+=(int)pow(10,i)*p;
          i++;
	}
	
}