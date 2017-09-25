//Work: Program to show the working of the pointer
//written by: raj6713631@gmail.com
#include<iostream>
using namespace std;
#include<cstdlib>
int main()
{
	int num,*numPtr;
	cout<<"Enter num: "<<endl;
	cin>>num;
	numPtr=&num;
	cout<<"Number's address is"<<&num<<endl;
	cout<<"Number's address is"<<numPtr<<endl;

	//Value of num;
	cout<<"Numbers values is  "<<num<<endl;
	cout<<"Number value is  "<<*numPtr<<endl;

    cout<<"Reversibility check "<<&*numPtr<<endl;
    cout<<"Reversibility check "<<*&numPtr<<endl;

    return 0;
}