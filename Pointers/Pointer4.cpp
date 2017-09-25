//Work: This program will show the working of the pointer when it is declared constant
//written by : raj6713631@gmail.com
#include<iostream>
using namespace std;
#include<iomanip>
//void func1(const int *);
void func2(const int *);
int main()
{
	int num;
	cout<<"Enter num"<<endl;
	cin>>num;
//	func1(&num);
	func2(&num);
}

//void func1(const int *num)
//{
	//*num=7;
//}

void func2(const int *num)
{
	cout<<"Number is given by: "<<*num<<endl;
}