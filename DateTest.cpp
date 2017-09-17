/*This class will test working of the Date class formed and will
show output.*/
#include<iostream>
using namespace std;
#include "Date.h"
int main()
{
	int d,m,y;
	Date date(0,0,0);
	cout<<"Initial Date:"<<endl;
	date.displayDate();
	cout<<"Enter in (d,m,y):";
	cin>>d>>m>>y;
	date.setDay(d);
	date.setMonth(m);
	date.setYear(y);
	date.displayDate();
	return 0;
}