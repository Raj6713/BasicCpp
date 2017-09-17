/*This class will generate random numbers and will show it on the screen */
#include<iostream>
using namespace std;
#include<cstdlib>
#include<iomanip>
class Random
{
private:
	int upperLimit;
public:
	Random();
	~Random();
	void setUpperLimit(int);
	int getUpperLimit();
	void dispMessage();
};

Random::Random()
{
	upperLimit=0;
}

Random::~Random(){}

void Random::setUpperLimit(int p)
{
	if(p>0)
		upperLimit=p;
	else
		upperLimit=20;
}

int Random::getUpperLimit(){return upperLimit;}

void Random::dispMessage()
{
	for(int i=1;i<=getUpperLimit();i++)
	{
		cout<<setw(5)<<(rand()%6+1);
		if(i%5==0)
			cout<<endl;
	}
}