//Work: This is a class which will sort an array using bubble sort and will show output
//Author: raj6713631@gmail.com
#ifndef BUBBLE_H
#define BUBBLE_H
#include<iomanip>
#define MAX_SIZE 100000
class Bubble
{
private:
	int size;
	int arr[MAX_SIZE];
public:
	Bubble();
	~Bubble();
	void setSize(int);
	int getSize();
	void allocateArray();
	void bubble();
	void displayMessage();
};

Bubble::Bubble()
{
	cout<<"Constructor initiated"<<endl;
}
Bubble::~Bubble()
{
	cout<<"Destructor initiated"<<endl;
}

void Bubble::setSize(int a)
{
	if(a>0)
		size=a;
	else
		size=MAX_SIZE;	
}
int Bubble::getSize(){return size;}
void Bubble::allocateArray()
{
	register int i;
	for(i=0;i<getSize();i++)
		arr[i]=rand()%10000+1;
}
void Bubble::bubble()
{
	register int temp,i,j;
	for(i=0;i<getSize();i++)
	{
		for(j=i+1;j<getSize();j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

void Bubble::displayMessage()
{
	for(int i=0;i<getSize();i++)
		{
            cout<<arr[i]<<"\t";
            if((i+1)%10==0)cout<<endl;
        }
}
#endif









