/*Write a program which will show working of the stack template and
will show the output*/
#include<iostream>
#include"Stack.h"
using namespace std;
#include<cstdlib>
int main()
{
  Stack<double> doubleStack(5);
  double doubleValue=1.1;
  while(doubleStack.push(doubleValue))
  {
  	cout<<doubleValue<<' ';
  	doubleValue+=1.1;
  }

  cout<<"\nStack is full. Cannot push"<<doubleValue<<"\nPopping elemt from the stack";
 
  while(doubleStack.pop(doubleValue))
  {
  	cout<<doubleValue<<' ';
  }

  cout<<"\nStack is empty cannot pop";

  Stack<int> intStack(7);
  int intValue=1;
  cout<<"\nPushing element on the stack:";
  while(intStack.push(intValue))
  {
  	cout<<intValue<<' ';
  	intValue++;
  }

  cout<<"\nStack is full cannot push"<<intValue<<"\nPopping up values";
  while(intStack.pop(intValue))
  {
  	cout<<intValue<<' ';
  }

  cout<<"\nStack is empty cannot pop";
}