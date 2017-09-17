/*This class will tke lower and upper limit and will sum the
number between them if odd*/
/*@Raj kumatr*/
#include<iostream>
using namespace std;
#include<string>
#include<iomanip>
class OddSum
{
private:
	string message;
	int lower,upper,sum;
public:
	OddSum();
	~OddSum();
	void setLower(int);
	void setUpper(int);
	int getLower();
	int getUpper();
	void calculation();
	void displayMessage();
};

OddSum::OddSum()
{
	message="";
	sum=0;
}

OddSum::~OddSum(){}

void OddSum::setUpper(int p){upper=p;}

void OddSum::setLower(int p){lower=p;}

int OddSum::getLower(){return lower;}

int OddSum::getUpper(){return upper;}

void OddSum::calculation()
{
	message+="Sum of odd numbers from \n";
	message+=to_string(getLower())+" to "+to_string(getUpper())+"\n";
	for(int i=getLower();i<=getUpper();i++)
	{
		if(i%2!=0)
			sum+=i;

	}
	message+="\nSum is: "+to_string(sum);
}

void OddSum::displayMessage()
{
	cout<<message<<endl;
}