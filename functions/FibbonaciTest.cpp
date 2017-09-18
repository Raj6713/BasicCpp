/*This main will test working of the fibbonaci sequence*/
#include<iostream>
using namespace std;
#include "Fibbonaci.h"
int main()
{
	Fibbonaci f1;
	int num;
	cout<<"Enter number: "<<endl;
	cin>>num;
	f1.setNum(num);
	f1.displayMessage();
	return 0;
}