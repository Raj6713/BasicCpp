/*This main class will solve the problem when values are odd in between 
range*/
//@RAJ KUMAR
#include<iostream>
using namespace std;
#include "OddSum.h"
int main()
{
	int num1,num2;
	cout<<"Enter lower and upper(lower<upper):"<<endl;
	cin>>num1>>num2;
	OddSum od1;
	od1.setLower(num1);
	od1.setUpper(num2);
	od1.calculation();
	od1.displayMessage();
	return 0;
}