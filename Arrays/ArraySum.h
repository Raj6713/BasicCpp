//Sum elements of an array and will show it
//author: raj6713631@gmail.com
#ifndef ARRAYSUM_H
#define ARRAYSUM_H
#include<string>
#include<iomanip>
#include<cstdlib>
#define MAX_SIZE 1000
class Array
{
private:
	int size;
	int arr[MAX_SIZE];
	int sum;
	string message;
public:
	Array();
	~Array();
	void setSize(int);
	int getSize();
	void allocateAndSum();
	void displayMessage();
};

Array::Array()
{
	cout<<"Constructor initiated."<<endl;
	message="";
	sum=0;
}

Array::~Array()
{
	cout<<"Destructor initiated."<<endl;
}

void Array::setSize(int a)
{
	if(a>0)
		size=a;
	else
		size=0;
}

int Array::getSize(){return size;}

void Array::allocateAndSum()
{
	message="Array and their sum\n";
	register int i;
	for(i=0;i<getSize();i++)
		{arr[i]=rand()%1000;
			message+=to_string(arr[i])+"  ";
			if(((i+1)%5)==0) message+="\n";
          sum+=arr[i];
		}
	message+="\nSum of array element is:"+to_string(sum);
}

void Array::displayMessage()
{
	allocateAndSum();
	cout<<message<<endl;
}
#endif
















