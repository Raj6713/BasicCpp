/*Write a program which will print sort an array */
#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
template<typename T>
void insertionSort( T* arr,int size)
{
	T key;
	int j;
    for(int i=1;i<size;i++)
    {
      key=arr[i];
      j=i-1;
      while(j>=0 && key<arr[j])
      {
      	arr[j+1]=arr[j];
      	j=j-1;
      }
      arr[j+1]=key;
    }
}

int main()
{
	int size;
	cout<<"Enter size of array: ";
	cin>>size;
	int arr[size];
	float arr1[size];
	char arr2[size];
    for(int i=0;i<size;i++)
    {
    	int p=rand()%120;
    	arr[i]=p;
    	arr1[i]=(float)p+0.5;
    	arr2[i]=(char)p;
    }

    cout<<"Array before passing to function:\n";
    for(int i=0;i<size;i++)
    {
    	cout<<setw(6)<<arr[i]<<setw(6)<<arr1[i]<<setw(6)<<arr2[i]<<"\n";
    }

    insertionSort(arr,size);
    insertionSort(arr1,size);
    insertionSort(arr2,size);
    cout<<"Array after passing to function:\n";
    for(int i=0;i<size;i++)
    {
    	cout<<setw(6)<<arr[i]<<setw(6)<<arr1[i]<<setw(6)<<arr2[i]<<"\n";
    }
}