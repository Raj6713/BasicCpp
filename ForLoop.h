/*This class will show working of the for loop*/
#include<iostream>
using namespace std;
#include<iomanip>
class ForLoop
{
private:
	int i,upper,lower;
public:
	ForLoop();
	void setLower(int);
	void setUpper(int);
	void printLoop();
};

ForLoop::ForLoop(){}


void ForLoop::setLower(int p){lower=p;}
void ForLoop::setUpper(int p){upper=p;}

void ForLoop::printLoop()
{
	for(i=lower;i<=upper;i++)
		cout<<setw(5)<<i;
}

//ForLoop::~ForLoop()

