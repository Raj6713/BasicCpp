//Work: Will find the fourth power of a number
//written by : raj6713631@gmail.com
#include<iostream>
using namespace std;
#include<cstdlib>
#include<iomanip>
double fourthPower(float);
int main()
{
	float num;
	float result;
	cout<<"Enter a number"<<endl;
	cin>>num;
	result=fourthPower(num);
	cout<<"Result is "<<fixed<<setprecision(2)<<result<<endl;
	return 0;
}

double fourthPower(float a)
{
	double val;
	val=a*a*a*a;
	return val;
}