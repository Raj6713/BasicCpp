//Work: This program will show working of pointer using array
//written by: raj6713631@gmail.com
#include<iostream>
using namespace std;
#include<iomanip>
#include<cstdlib>
void printSimple(const int [],const int);
void printPointer(int *const, const int);
int main()
{
	register int i;
	int size;
	cin>>size;
	int arr[size];
	for(i=0;i<size;i++)
		arr[i]=rand()%2000;
	cout<<"Print using Simple way"<<endl;
	printSimple(arr,size);
	cout<<"\nPrint using Pointer"<<endl;
	printPointer(arr,size);
	return 0;
}

void printSimple(const int arr[],const int a)
{
	register int i;
	for(i=0;i<a;i++)
		cout<<setw(5)<<arr[i];
}
void printPointer(int *const arr,const int a)
{
	register int i;
	for(i=0;i<a;i++)
		cout<<setw(5)<<*(arr+i);
}
