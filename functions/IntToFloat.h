//This class will change a integer to float
#ifndef INTTOFLOAT_H
#define INTTOFLOAT_H
class IntToFloat
{
private:
	int num;
	float converted;
public:
	IntToFloat();
	~IntToFloat();
	void setInt(int);
	int getInt();
	float getFloat();
	void convertor();
	void displayMessage();
};

IntToFloat::IntToFloat()
{
	num=0;
}
IntToFloat::~IntToFloat(){}

void IntToFloat::setInt(int a){num=a;}

int IntToFloat::getInt(){return num;}

float IntToFloat::getFloat(){return converted;}

void IntToFloat::convertor()
{
	converted=num+0.0;
}

void IntToFloat::displayMessage()
{
	convertor();
	cout<<"Integer num: "<<getInt()<<endl;
	cout<<"Float equivalent: "<<getFloat()<<endl;
}
#endif