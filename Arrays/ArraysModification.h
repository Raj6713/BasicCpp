//Work: This class based array program will modify an array or its element
//author: raj6713631@gmail.com
#include<iomanip>
#include<string>
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
	void allocateArray();
	void modifyArray(int arr[]);
	void modifyElement(int);
	void displayMessage();
}
Array::Array(){}

Array::~Array(){}

void Array::setSize(int a)
{
	if(a>0)
		size=a;
	else
	{
		cerr<<"Size cannot be negative"<<endl;
		size=10;
	}
}

int Array::getSize(){return size;}

void Array::allocateArray()
{
	register int i;
	for(i=0;i<getSize();i++)
		arr[i]=0;
}

void Array::modifyArray(int arr[])
{
	register int i;
	for(i=0;i<getSize();i++)
		arr[i]=rand()%1000;
}

void Array::modifyElement(int e)
{
    e=e*2;
}

void Array::displayMessage()
{
	register int i;
 for(i=0;i<getSize();i++)
 	cout<<setw(4)<<i<<setw(6)<<arr[i]<<endl;
}


