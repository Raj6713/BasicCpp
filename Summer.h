/*This class will sum the values from a lower limit to higher and
will show output*/
#include<iostream>
using namespace std;
#include<iomanip>
class Summer
{
private:
	int lowerLimit,upperLimit,i;
	long int sum;
public:
	Summer();
	~Summer();
	void setLower(int);
	void setUpper(int);
	int getLower();
	int getUpper();
	long int getSum();
	void calculation();
	void displayMessage();
};

Summer::Summer(){sum=0;}

void Summer::setLower(int a){lowerLimit=a;}
void Summer::setUpper(int a){upperLimit=a;}

int Summer::getUpper(){return upperLimit;}
int Summer::getLower(){return lowerLimit;}
long int Summer::getSum(){return sum;}

void Summer::calculation()
{
	int j=1;
	for(i=getLower();i<=getUpper();i++)
	{
       sum+=i;
	}
}

void Summer::displayMessage()
{
	calculation();
	cout<<"Initial value: "<<getLower()<<endl;
	cout<<"Final value: "<<getUpper()<<endl;
	cout<<"Intermediate sum: "<<getSum()<<endl;
}

Summer::~Summer(){}