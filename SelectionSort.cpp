/*Write a program which will implement selection sort*/
#include<iostream>
using namespace std;
#include<cstdlib>
void selectionSort(int *a,int size);
void printArray(int *a,int size);
int main()
{
	int size;
	cout<<"Enter size of array: ";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
         arr[i]=(size*i+i*10)%20;
     printArray(arr,size);
     selectionSort(arr,size);
     printArray(arr,size);
     return 0;
}

void selectionSort(int *a,int size)
{
	int i,j,smallest,temp;
	for(i=0;i<size-1;i++)
	{
		smallest=a[i];
		for(j=i+1;j<size;j++)
		{
            if(*a+j<smallest)
            {
            	temp=a[j];
            	a[j]=a[i];
                a[i]=temp; 
            }
		}

	}
}

void printArray(int *a,int size)
{
	cout<<"\nPrinting array:\n";
	for(int i=0;i<size;i++)
		cout<<a[i]<<" ";
}