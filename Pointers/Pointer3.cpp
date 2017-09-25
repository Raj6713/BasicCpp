//Work: This program will show the working of the argument by reference
//written by: raj713631@gmail.com
#include<iostream>
using namespace std;
#include<cstdlib>
#include<iomanip>
void fourthPower(float *);
int main()
{
   float num;
   cout<<"Enter a number: "<<endl;
   cin>>num;
   fourthPower(&num);
   cout<<"Result is: "<<fixed<<setprecision(3)<<num;
   return 0;
}

void fourthPower(float *num)
{
	*num=*num * *num * *num * *num;
}