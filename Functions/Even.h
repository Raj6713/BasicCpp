//This class will test whatever a number is even or odd
#ifndef EVEN_H
#define EVEN_H
class Even
{
private:
	int number;
	bool result;
public:
	Even();
	~Even();
	void setNumber(int);
	int getNumber();
	bool getResult();
	void isEven();
	void displayMessage();
};

Even::Even()
{
	number=0;
	result=true;
}

Even::~Even(){}

void Even::setNumber(int a)
{
	number=a;
}
int Even::getNumber(){return number;}

bool Even::getResult(){return result;}

void Even::isEven()
{
	if(getNumber()%2==0)
		result=true;
	else
		result=false;
}
void Even::displayMessage()
{
	isEven();
	cout<<"Number: "<<getNumber()<<endl;
	cout<<"Result: "<<boolalpha<<getResult()<<endl; 
}
#endif