/*This class will show working of the do..while loop*/
#include<iostream>
using namespace std;
#include<string>
class DoWhile
{
private:
	int counter,upperLimit;
	string message;
public:
	DoWhile();
	~DoWhile();
	void setUpperLimit(int);
	void calculation();
	void displayMessage();
};
DoWhile::DoWhile(){counter=0;message="";}
DoWhile::~DoWhile(){}

void DoWhile::setUpperLimit(int p)
{
	if(p>0)
		upperLimit=p;
	else
		p=100;
}

void DoWhile::calculation()
{
	do
	{
		message+=to_string(counter)+"\n";
		counter++;
	}while(counter<=upperLimit);
}

void DoWhile::displayMessage()
{
	cout<<message<<endl;
}