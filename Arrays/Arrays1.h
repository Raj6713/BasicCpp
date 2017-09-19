//Work: Will initializa an array and will show output
//Author: raj6713631@gmail.com
#ifndef ARRAYS1_H
#define ARRAYS1_H
#include<cstdlib>
#include<iomanip>
#define MAX_SIZE 1000
class Array
{
private:
	int size;
    int arr[MAX_SIZE];
public:
	Array();
	~Array();
	void setSize(int);
	int getSize();
	void allocate();
	void displayMessage();
};

Array::Array()
{
	cout<<"Constructor Executed"<<endl;
}
Array::~Array()
{
	cout<<"Destructor exectued"<<endl;
}

void Array::setSize(int a)
{
	if(a>0)
		size=a;
	else
	{
		cerr<<"Size of array cannot be negative";
		size=1;
	}
}

int Array::getSize(){return size;}

void Array::allocate()
{
	register int i;
	for(i=0;i<getSize();i++)
		arr[i]=rand()%120;
}

void Array::displayMessage()
{
	allocate();
	register int i;
	for(i=0;i<getSize();i++)
		cout<<setw(3)<<i+1<<setw(5)<<arr[i]<<endl;
}
#endif