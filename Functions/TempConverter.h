//Work: Will convert celsius to farenhit and farenhit to celsius
//Input: Tempreature in celsius or farenhit
//Output: reverse of it
//Author: raj6713631@gmail.com
#ifndef TEMPCONVERTER_H
#define TEMPCONVERTER_H
class TempConverter
{
private:
	float temp,result;
public:
	TempConverter();
	~TempConverter();
	void setTempreature(float);
	float getTempreature();
	float getResult();
	void calToFar();
	void farToCal();
	void displayMessage();
};

TempConverter::TempConverter(){}

TempConverter::~TempConverter(){}

void TempConverter::setTempreature(float v)
{
	temp=v;
}
float TempConverter::getTempreature(){return temp;}

float TempConverter::getResult(){return result;}

void TempConverter::calToFar()
{
   result=(9/5)*(temp)+32;
}

void TempConverter::farToCal()
{
	result=(temp-32)*(5/9);
}

void TempConverter::displayMessage()
{
  cout<<"Initial Tempreature: "<<getTempreature()<<endl;
  cout<<"Final Tempreature: "<<getResult()<<endl;
}
#endif