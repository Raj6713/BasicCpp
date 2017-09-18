//The intention of this class is to show working of the Overloaded function
//with reference to C++. In header file we will used square of a function
//which will return square of a number and for char it will double the characters
#include<iostream>
using namespace std;
#include<iomanip>
#include<string>
class Square
{
private:
	string sp;
public:
	Square();
	~Square();
	void square(int);
	void square(float);
	void square(char);
	string getSp();
	void displayMessage();
};

Square::Square()
{
	sp="";
}

Square::~Square(){}

void Square::square(int a)
{
	sp=to_string(a*a);
}

void Square::square(float a)
{
	sp=to_string(a*a);
}

void Square::square(char ch)
{
	sp=to_string((char)ch);
	sp+=to_string((char)ch);
}

string Square::getSp()
{
	return sp;
}

void Square::displayMessage()
{
	cout<<"Result is: "<<getSp()<<endl;
}

