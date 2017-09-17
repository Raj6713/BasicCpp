/*Write a program which will print the data based on array lower and 
upper subscript*/
#include<iostream>
using namespace std;
#include<cstdlib>
#include<iomanip>

template<typename T>
  void PrintArray(T *a,int low,int high,int size)
  {
    /*This will print the values such that they are valid*/
    if(low>=0 && high<size)
    {
    	if(low<=high)
    	{
    		for(int i=low;i<high;i++)
    			cout<<a[i]<<" ";
    	}
    }


  }

int main()
{
	int low,high;
	int intSize=100;
	int intArray[intSize];
	for(int i=0;i<intSize;i++)
		intArray[i]=i+1;
	/*Implementation to print numbers  in a range*/
	cout<<"Enter lower and upper subscript\n";
    cin>>low>>high;
    PrintArray(intArray,low,high,intSize);
	/*Implementation to print characters in a range*/
	int charSize=120;
	char charArray[charSize];
	for(int i=0;i<charSize;i++)
		charArray[i]=(char)i+1;
	cout<<"Enter lower and upper subscript\n";
	cin>>low>>high;
	PrintArray(charArray,low,high,charSize);
	return 0;
}