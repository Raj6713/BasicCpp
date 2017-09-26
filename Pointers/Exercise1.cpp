//Work: this will ddeclare an array of size and than will allocate and
//see the values at position
//written by: raj6713631@gmail.com
#include<iostream>
using namespace std;
#include<cstdlib>
#include<iomanip>
void printer(double *const,const int);
int main()
{
	
	double arr[10]={0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<"Size is: "<<size<<endl;
	cout<<"Sending to the function for printing"<<endl;
	printer(arr,size);
	return 0;
}
void printer(double *const arr,const int size)
{
	register int i;
	for(i=0;i<size;i++)
	{
		cout<<setw(5)<<*(arr+i)<<endl;
	}
}