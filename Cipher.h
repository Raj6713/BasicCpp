/*Write a program which will show the encryption scheme*/
#include<iostream>
using namespace std;
#include<string>
#include<iomanip>
class Cipher
{
private:
	string toEncrypt,encrypted;
public:
	Cipher();
	void setString(string);
	string getEncrypted();
	string getOriginal();
	void calculation();
	void displayMessage();
	~Cipher();
};
Cipher::Cipher(){
	encrypted="0000";
}
Cipher::~Cipher(){}

void Cipher::setString(string s)
{
	if(s.length()==4)
		toEncrypt=s;
	else
		{cerr<<"Length is not according to question.";
	    }
}

void Cipher::calculation()
{
	for(int i=0;i<getOriginal().length();i++)
	{
		encrypted[i]=((((int)toEncrypt[i]-48)+7)%10)+48;
	}
}

string Cipher::getOriginal(){return toEncrypt;}

string Cipher::getEncrypted(){return encrypted;}

void Cipher::displayMessage()
{
	calculation();
	cout<<"Original string: "<<getOriginal()<<endl;
	cout<<"Encrypted string: "<<getEncrypted()<<endl;
}