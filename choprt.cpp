/*Write a program which will find the relation between two numbers*/
#include<iostream>
using namespace std;
int main()
{
   int num1,num2;
   cin>>num1>>num2;
   if(num1<num2)
   cout<<"<\n";
   if(num1>num2)
   cout<<">\n";
   if(num1==num2)
   cout<<"=\n";
   return 0;
}