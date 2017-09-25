//Work: This program will implement selection sort and show output
//written by: raj6713631@gmail.com
#include<iostream>
using namespace std;
#include<iomanip>
#include<cstdlib>
void selectionSort(int *const,const int);
void swapper(int *const,int *const);
int main()
{
	int size;
	cout<<"Enter size of array"<<endl;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
        arr[i]=rand()%2000;
    cout<<"Original Array "<<endl;
    for(int i=0;i<size;i++)
    	cout<<setw(4)<<arr[i]<<endl;

    selectionSort(arr,size);
    cout<<"Sorted Array"<<endl;
    for(int i=0;i<size;i++)
    	cout<<setw(4)<<arr[i]<<endl;
    return 0;
}

void selectionSort(int *const arr,int const size)
{
	register int i,j,smallest;
	for(i=0;i<size-1;i++)
	{
		smallest=i;
		for(j=i+1;j<size;j++)
		{
			if(arr[j]<arr[smallest])
				smallest=j;				
		}
		swapper(&arr[i],&arr[smallest]);
	}
}

void swapper(int *const a1,int *const a2)
{

  int num=*a1;
  *a1=*a2;
  *a2=num;
}