/*Write a program which will find the largest*/
#include<iostream>
#include<climits>
using namespace std;
class Largest 
{
private:
	int largest,num;
public:
	Largest();
	void calculation();
	int getLargest();
	void displayMessage();
};

Largest::Largest()
{
	largest=INT_MIN;
}

void Largest::calculation()
{
  int i=0,count=10;
   while(i<count)
   {
   	cout<<"Enter number: ";
   	cin>>num;
   	if(num>largest)
   		largest=num;
   	i++;
   }

}

int Largest::getLargest()
{
	return largest;
}

void Largest::displayMessage()
{
	cout<<"Largest values is"<<getLargest()<<endl;
}