/*This program will write into a file and*/
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<math.h>
using namespace std;
int main()
{
	ofstream outClientFile("G:/C++/p1.txt",ios::out);
	if(!outClientFile)
	{
		cerr<<"System cannot read File"<<endl;
		exit(1);
	}

   outClientFile<<setw(10)<<"Number"<<setw(10)<<"Square"<<setw(10)<<"Cube"<<setw(10)<<"Sqrt"<<endl;
   for(int i=1;i<100;i++)
   {
   	outClientFile<<setw(10)<<i<<setw(10)<<i*i<<setw(10)<<i*i*i<<setw(10)<<sqrt(i)<<endl;
   }   

}

