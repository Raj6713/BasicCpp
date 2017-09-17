/*This class will roll a dice upto a given time and will find the frequency of each face*/
//@Raj Kumar
#include<iostream>
using namespace std;
#include<string>
#include<cstdlib>
class Frequency
{
private:
	int freq1,freq2,freq3,freq4,freq5,freq6,i,upperLimit;
	string message;
	void calculation();
	int getUpperLimit();
	void incrementor(int);
public:
	Frequency();
	~Frequency();
	void setUpperLimit(int);
	void dispMessage();
};

Frequency::Frequency()
{
	freq1=freq2=freq3=freq4=freq5=freq6=0;
	message="";
}

Frequency::~Frequency(){}

void Frequency::setUpperLimit(int p)
{
	if(p>0)
		upperLimit=p;
	else
		upperLimit=50;
}

int Frequency::getUpperLimit(){return upperLimit;}

void Frequency::calculation()
{
   for(int i=0;i<getUpperLimit();i++)
   {
   	incrementor((rand()%6)+1);
   }
   message+="Deafult values is 50\n";
   message+="Frequency [1]: "+to_string(freq1)+"\n"+
            "Frequency [2]: "+to_string(freq2)+"\n"+
            "Frequency [3]: "+to_string(freq3)+"\n"+
            "Frequency [4]: "+to_string(freq4)+"\n"+
            "Frequency [5]: "+to_string(freq5)+"\n"+
            "Frequency [6]: "+to_string(freq6)+"\n";
}

void Frequency::incrementor(int p)
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


void Frequency::dispMessage()
{
	calculation();
	cout<<message<<endl;
}
