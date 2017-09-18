//This class will create a header file to compute hypotonuse;
#include<iostream>
using namespace std;
#include<string>
#include<math.h>
class Hypotonuse
{
private:
	float base,height,hypotonuse;
	string message;
public:
	Hypotonuse();
	~Hypotonuse();
	void setBase(float);
	void setHeight(float);
	float getBase();
	float getHeight();
	float getHypotonuse();
	void calculation();
	void displayMessage();
};


Hypotonuse::Hypotonuse()
{
	base=height=hypotonuse=0;
	message="";
}

Hypotonuse::~Hypotonuse(){}

void Hypotonuse::setBase(float a)
{
	if(a>0)
		base=a;
	else
	{
		cerr<<"Base cannot be negative"<<endl;
		base=0;
	}
}

void Hypotonuse::setHeight(float a)
{
	if(a>0)
		height=a;
	else
	{
		cerr<<"Height is not negative"<<endl;
		height=0;
	}
}

float Hypotonuse::getBase(){return base;}

float Hypotonuse::getHeight(){return height;}

float Hypotonuse::getHypotonuse(){return hypotonuse;}

void Hypotonuse::calculation()
{
	hypotonuse=sqrt(pow(getBase(),2)+pow(getHeight(),2));
	
	message+="Base: "+to_string(getBase());
	message+="\nHeight: "+to_string(getHeight());
	message+="\nHypotonuse: "+to_string(getHypotonuse());
}

void Hypotonuse::displayMessage()
{
	calculation();
	cout<<message<<endl;
}