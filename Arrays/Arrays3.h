//Work: this array will calculate array value and will attempt to modify them
#ifndef ARRAYS3_H
#define ARRAYS3_H
#include<iomanip>
#define MAX_SIZE 200
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
	cout<<"Constructor initiated"<<endl;
}

Array::~Array()
{
	cout<<"Destructor initiated"<<endl;
}


void Array::setSize(int p)
{
	if(p>0)
		size=p;
	else
	{
		cerr<<"Array size cannot be negative, setting size 5"<<endl;
		size=5;
	}
}
int Array::getSize(){return size;}

void Array::allocate()
{
	register int i;
	for(i=0;i<getSize();i++)
		arr[i]=2*i+2;
}


void Array::displayMessage()
{
	allocate();
	register int i;
	for(i=0;i<getSize();i++)
		cout<<setw(4)<<i<<setw(5)<<arr[i]<<endl;
}
#endif