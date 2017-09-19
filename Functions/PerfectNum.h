//Work will take number and check whatever it is perfect or not
//Author: raj6713631@gmail.com
#ifndef PERFECTNUM_H
#define PERFECTNUM_H
class Perfect
{
private:
	int number;
	int sum;
	bool result;
public:
	Perfect();
	~Perfect();
	void setNumber(int);
	int getNumber();
	bool getResult();
	void calculation();
	void displayMessage();
};

Perfect::Perfect()
{
	sum=0;
}

Perfect::~Perfect(){}

void Perfect::setNumber(int a)
{
	number=a;
}

int Perfect::getNumber()
{
	return number;
}

bool Perfect::getResult()
{
	return result;
}


void Perfect::calculation()
{
  register int i;
  for(i=1;i<=getNumber()/2+1;i++)
  {
  	if(getNumber()%i==0)
  		sum+=i;
  }

  if(getNumber()==sum)
  result=true;
  else
  	result=false;
}

void Perfect::displayMessage()
{
	calculation();
	cout<<"Number: "<<getNumber()<<endl;
	cout<<"Is perfect: "<<boolalpha<<getResult()<<endl;
}
#endif