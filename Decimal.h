/*This will take a binary string and then will show the decimal 
equivalent of the following*/
#include<iostream>
using namespace std;
#include<string>
#include<math.h>
#include<string.h>
class Decimal
{
private:
	string input;
	int num;
public:
	Decimal();
	void setBinary(string s);
	int getDecimal();
	string getBinary();
	void calculation();
	void displayMessage();
};

Decimal::Decimal(){input="";num=0;}

void Decimal::setBinary(string s){input=s;}


void Decimal::calculation()
{
	int j=0;
	for(int i=input.length()-1;i>=0;i--)
	{
       num+=(int)pow(2,j)*((int)input[i]-48);
       j++;
	}

}


int Decimal::getDecimal(){return num;}

string Decimal::getBinary(){return input;}

void Decimal::displayMessage()
{
	cout<<"Following is conversion:"<<endl;
	cout<<getBinary()<<"    : "<<getDecimal()<<endl;
}