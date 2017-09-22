//Work: This will roll a dice and will show the relatice occurence of each dice
//author: raj6713631@gmail.com
#ifndef DICEROLL_H
#define DICEROLL_H
#include<iomanip>
#include<ctime>
using namespace std;
#define MAX_SIZE 100000
class DiceRoll
{
private:
	int diceRolls;
	int arr[MAX_SIZE];
	float frequency[7]={};
	string message;
public:
	DiceRoll();
	~DiceRoll();
	void setSize(int);
	int getSize();
	string getMessage();
	void calculation();
    void displayMessage();
};
DiceRoll::DiceRoll()
{
	message="";
	diceRolls=6;
}
DiceRoll::~DiceRoll(){}

void DiceRoll::setSize(int p)
{
	if(p>0)
		diceRolls=p;
	else
	{
		cerr<<"Dice Rolls cannot be negative(Default Value 1000):"<<endl;
        diceRolls=p;
	}
}

int DiceRoll::getSize(){return diceRolls;}
string DiceRoll::getMessage(){return message;}
void DiceRoll::calculation()
{
	srand(time(0));
	register int i;
	register float sum=0;
	for(i=0;i<getSize();i++)
	{
       arr[i]=(rand()%6)+1;
	}
    for(int i=1;i<=getSize();i++)
    {
    	++frequency[arr[i]];
    }
    message="Relative frequency\n";
    for(int i=1;i<=6;i++)
    {
    	message+=to_string(i);
    	frequency[i]/=getSize();
    	message+="   : "+to_string(frequency[i])+"\n";
    	sum+=frequency[i];
    }
    message+="Frequency Sum: "+to_string(sum);
}

void DiceRoll::displayMessage()
{
	calculation();
	cout<<getMessage()<<endl;
}
#endif



