/*This class will test working of the do...while loop*/
#include<iostream>
using namespace std;
#include "DoWhile.h"
int main()
{
	int p;
	cout<<"Enter upper limit"<<endl;
	cin>>p;
	DoWhile dw;
	dw.setUpperLimit(p);
	dw.calculation();
	dw.displayMessage();
	return 0;
}