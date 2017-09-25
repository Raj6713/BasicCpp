//Work: This program will show the size of an array and used
//written by: raj6713631@gmail.com
#include<iostream>
using namespace std;
#include<iomanip>
#include<cstdlib>
size_t getSizeInt(int *);
size_t  getSizeDouble(double *);
int main()
{
	register int i;
	int size;
	cout<<"Enter Size"<<endl;
	cin>>size;
	int arr1[size];
	double arr2[size];
	for(i=0;i<size;i++)
	{
		arr1[i]=rand()%200;
		arr2[i]=(rand()%200)+0.5;
	}
	cout<<"Size of interger Array:  "<<sizeof(arr1)<<endl;
	cout<<"Size of integer array returned by function:   "<<getSizeInt(arr1)<<endl;

	cout<<"Size of Double Array:  "<<sizeof(arr2)<<endl;
	cout<<"Size of Double array returned by function:   "<<getSizeDouble(arr2)<<endl;

    return 0;
}

size_t getSizeInt(int * a)
{
	return sizeof(a);
}

size_t getSizeDouble(double *a)
{
	return sizeof(a);
}