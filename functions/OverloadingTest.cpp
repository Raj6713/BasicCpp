/*This class will test working of the Overloading and 
show results*/
#include<iostream>
using namespace std;
#include "Overloading.h"
int main()
{
	Square sp;
	int a;
	float b;
	char cp;
	cout<<"Enter an integer: "<<endl;
	cin>>a;
	sp.square(a);
	sp.displayMessage();

	cout<<"Enter an float: "<<endl;
	cin>>b;
	sp.square(b);
	sp.displayMessage();

	cout<<"Enter an character: "<<endl;
	cin>>cp;
	sp.square(cp);
	sp.displayMessage();

	return 0;
}