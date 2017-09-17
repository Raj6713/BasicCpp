#include<iostream>
using namespace std;
#include<string>
#include<iomanip>
class Date
{
private:
	int day,month,year;
public:
	Date(int,int,int);
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	int getDay();
	int getMonth();
	int getYear();
	void displayDate();
};
Date::Date(int d,int m,int y)
{
	setDay(d);
	setMonth(m);
	setYear(y);
}

void Date::setDay(int d)
{
	if(d>0 and d<=31)
		day=d;
	else
		day=0;
}

void Date::setMonth(int m)
{
	if(m>0 && m<=12)
		month=m;
	else
		month=0;
}

void Date::setYear(int y)
{
	if(y>0)
		year=y;
	else
		y=0;
}

int Date::getDay(){return day;}
int Date::getMonth(){return month;}
int Date::getYear(){return year;}

void Date::displayDate()
{
	cout<<setw(2)<<getDay()<<"/"<<setw(2)<<getMonth()<<"/"<<setw(4)<<getYear()<<endl;
}



