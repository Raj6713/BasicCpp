/*Write a program which will take subscripts and will print arrays
in the given range*/
#include<iostream>
using namespace std;
template<typename T>
void printArray(const T* const array,int low,int high,int size)
{
	if(low<size && high<size)
	{
        if(low<=high)
        {
           for(int i=low;i<high;i++)
           	cout<<array[i]<<" ";
        }
	}
	else
		cout<<"Array cannot be printed\n";
	cout<<"\n";
}

int main()
{
	int aCount,bCount,cCount;
	aCount=6;
	bCount=7;
	cCount=9;
	int arr1[aCount]={1,2,3,4,5,6};
	double arr2[bCount]={1.1,2.2,3.3,4.4,5.5,6.6,7.7};
	char arr3[cCount]={'a','b','c','d','e','f','g','h','i','j'};
	cout<<"Array are following:";
	printArray(arr1,2,5,aCount);
	printArray(arr2,0,6,bCount);
	printArray(arr3,4,2,cCount);
    return 0;
}