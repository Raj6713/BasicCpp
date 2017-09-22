//Work: Will implement linear search into a class and show output
//Author: raj6713631@gmail.com
#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H
#include<string>
#include<iomanip>
#include<cstdlib>
#define MAX_SIZE 20000
class LinearSearch
{
private:
   int size;
   int arr[MAX_SIZE];
   int keyElement;
   string message;
public:
     LinearSearch();
     ~LinearSearch();
     void setSize(int);
     int getSize();
     void setArray();
     void toFind(int);
     void displayMessage();
};

LinearSearch::LinearSearch()
{
	cout<<"constructor executed"<<endl;
	message="";
}

LinearSearch::~LinearSearch()
{
	cout<<"Destructor executed"<<endl;
}

void LinearSearch::setSize(int p)
{
	if(p>0)
		size=p;
	else
	{
		cerr<<"Size cannot be negative"<<endl;
		size=1;
	}
}

void LinearSearch::setArray()
{
	register int i;
	for(i=0;i<getSize();i++)
		arr[i]=rand()%100;
}

void LinearSearch::toFind(int)
{
	register int j
}

int LinearSearch::getSize(){return size;}

void LinearSearch::setArray(int arr[])
{
	for()
}












