//Work: This program will show the size of various data type;
#include<iostream>
using namespace std;
#include<iomanip>
#include<cstdlib>
class Cp
{
private:
	int a,b;
	float c;
	int arr[100];	
};

struct Node
{
   int data;
   struct Node *left;
   struct Node *right;
};

int main()
{
	int a;
	float b;
	char c;
	double d;
	long e;
	int arr[10];
	int *ptr=arr;
    Cp cp1;
    struct Node np1;
	cout<<"Size of int: "<<sizeof(int)<<endl;
	cout<<"Size of a: "<<sizeof a<<endl;

	cout<<"Size of float: "<<sizeof(float)<<endl;
	cout<<"Size of b:  "<<sizeof b<<endl;

	cout<<"Size of char: "<<sizeof(char)<<endl;
	cout<<"Size of c:  "<<sizeof c<<endl;


	cout<<"Size of Double: "<<sizeof(double)<<endl;
	cout<<"Size of b:  "<<sizeof d<<endl;

	cout<<"Size of long: "<<sizeof(long)<<endl;
	cout<<"Size of e:  "<<sizeof e<<endl;

	cout<<"Size of arr: "<<sizeof(int)<<endl;
	cout<<"Size of typr:  "<<sizeof arr<<endl;

	cout<<"Size of float: "<<sizeof(ptr)<<endl;
	cout<<"Size of ptr:  "<<sizeof arr<<endl;
    
    cout<<"Size of class element: "<<sizeof(Cp)<<endl;
	cout<<"Size of cp1:  "<<sizeof cp1<<endl;


    cout<<"Size of struct Node: "<<sizeof(struct Node)<<endl;
    cout<<"Size of node formed"<<sizeof np1<<endl;
   return 0;


}
