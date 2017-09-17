/*This class will produce tabular result and will show output
related to it on screen.*/
#include<iostream>
using namespace std;
#include<string>
class Tabular
{
private:
	string message;
public:
	Tabular();
	void calculation();
	void displayMessage();
};

Tabular::Tabular()
{
	message="";
}

void Tabular::calculation()
{
	message+="N          10*N      100*N     1000*N    \n";
	int i=1;
	while(i<=10)
	{
		message+=to_string(i)+" "+to_string(10*i)+" "+to_string(100*i)+" "+to_string(1000*i)+" "+"\n";
     i++;
	}
}

void Tabular::displayMessage()
{
	cout<<message;
}