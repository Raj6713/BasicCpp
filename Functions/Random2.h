/*This class will show functionality of srand class and show output*/
#include<iostream>
using namespace std;
#include<string>
#include<iomanip>
#include<cstdlib>
class Random2
{
private:
	int i,upperLimit,freq1,freq2,freq3,freq4,freq5,freq6,seed;
	string message;
public:
	Random2();
	~Random2();
	void setUpperLimit(int);
	int getUpperLimit();
	void setSeed(int);
	int getSeed();
	void allocator();
	void switcher(int);
	void displayMessage();
};

Random2::Random2()
{
	message="";
	upperLimit=0;
	freq1=freq2=freq3=freq4=freq5=freq6=0;
}

Random2::~Random2(){}

void Random2::setUpperLimit(int p)
{
	if(p>0)
		upperLimit=p;
	else
		upperLimit=50;
}

void Random2::setSeed(int p)
{
	seed=p;
}

int Random2::getUpperLimit(){return upperLimit;}

int Random2::getSeed(){return seed;}

void Random2::allocator()
{
	srand(getSeed());
	for(int i=0;i<getUpperLimit();i++)
	{
		switcher(rand()%6+1);
	}

	message+="\nFrequency Graph for a dice:";
	   message+="\nFrequency[1]: "+to_string(freq1)+
	          "\nFrequency[2]: "+to_string(freq2)+
	          "\nFrequency[3]: "+to_string(freq3)+
	          "\nFrequency[4]: "+to_string(freq4)+
	          "\nFrequency[5]: "+to_string(freq5)+
	          "\nFrequency[6]: "+to_string(freq6);
}




void Random2::switcher(int p)
{
	switch(p)
	{
		case 1: ++freq1; break;
		case 2: ++freq2; break;
		case 3: ++freq3; break;
		case 4: ++freq4; break;
		case 5: ++freq5; break;
		case 6: ++freq6; break;
	}
}

void Random2::displayMessage()
{
	allocator();
   cout<<message<<endl;
}