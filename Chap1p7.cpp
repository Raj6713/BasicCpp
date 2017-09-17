/*Write a program which will find Largest and smallest for five 
input.*/
#include<iostream>
using namespace std;
#include<climits>
int main()
{
	int Largest,smallest,num;
	Largest=INT_MIN;
	smallest=INT_MAX;
	cout<<"Enter first number: ";
	cin>>num;
	if(num>Largest)Largest=num;
	if(num<smallest)smallest=num;

	cout<<"Enter Second number: ";
	cin>>num;
	if(num>Largest)Largest=num;
	if(num<smallest)smallest=num;

	cout<<"Enter third number: ";
	cin>>num;
	if(num>Largest)Largest=num;
	if(num<smallest)smallest=num;

	cout<<"Enter fourth number: ";
	cin>>num;
    if(num>Largest)Largest=num;
	if(num<smallest)smallest=num;

	cout<<"Enter fifth number: ";
	cin>>num;
	if(num>Largest)Largest=num;
	if(num<smallest)smallest=num;

	cout<<"\nSmallest: "<<smallest;
	cout<<"\nLargest: "<<Largest;

	return 0;
}