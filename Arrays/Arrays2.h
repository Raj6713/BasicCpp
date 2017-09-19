//Work: This header will execute the preinitialized array in private of class 
//and show output
//Author: raj6713631@gmail.com
#ifndef ARRAYS2_H
#define ARRAYS2_H
#include<iomanip>
#define SIZE 10
class Array
{
private:
	int arr[SIZE]={1,5,6,8,1,4,7,9,3,10};
public:
	Array();
	~Array();
	void displayMessage();
};
Array::Array()
{
	cout<<"Constructor executed"<<endl;
}

Array::~Array()
{
	cout<<"Destructor executed"<<endl;
}

void Array::displayMessage()
{
	register int i;
	for(i=0;i<SIZE;i++)
		cout<<setw(3)<<i+1<<setw(5)<<arr[i]<<endl;
}
#endif