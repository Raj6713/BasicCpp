/*Write a program which will print the data based on template*/
#include<iostream>
using namespace std;
template<typename T>
void printArray(const T* const array,int count)
{
	for(int i=0;i<count;i++)
	{
		cout<<array[i]<<" ";

	}
	cout<<endl;
}

int main()
{
	int aCount=5,bCount=5,cCount=5;
	int arr1[aCount]={1,2,3,4,5};
	float arr2[bCount]={1.1,2.1,3.1,4.1,5.1};
	char arr3[cCount]={'a','b','c','d','e'};
	cout<<"The following array declared in program are:\n ";
	printArray(arr1,aCount);
	printArray(arr2,bCount);
	printArray(arr3,cCount);
	return 0;
}