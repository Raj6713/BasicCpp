/*Write a program which will show the maximum sum of a array*/
#include<iostream>
using namespace std;
#include<climits>
int maximumSum(int a[],int size);
int main()
{
	int arr[]={-1,-2,3,5,-10,90,-4,60};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<"Maximum sum is: "<<maximumSum(arr,size);
	return 0;
}

int maximumSum(int a[],int size)
{
	int maxSum=INT_MIN;
	int max_end=0;
	for(int i=0;i<size;i++)
	{
       max_end+=a[i];
       if(maxSum<max_end)
       	maxSum=max_end;
       if(max_end<0)
       	max_end=0;
	}
	return maxSum;
}