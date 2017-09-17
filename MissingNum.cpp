/*Write a program which will show the missing numbers from array*/
#include<iostream>
using namespace std;
void missingNumber(int arr[],int size);

int main()
{
	cout<<"This array will allocate numbers and will show numbers missing";
	int arr[]={1,2,3,4,5,6,8,10};
	int size=sizeof(arr)/sizeof(arr[0])+2;
	missingNumber(arr,size);
	return 0;
}

void missingNumber(int arr[],int size)
{
	int ar[size]={};
	for(int i=0;i<size;i++)
	{
		++ar[arr[i]-1];
	}

	cout<<"Missing numbers are: \n";
	for(int i=0;i<size;i++)
	{
		if(ar[i]==0)
			cout<<ar[i]<<" ";
	}
}