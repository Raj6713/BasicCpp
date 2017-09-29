//Work: This class will set and print time
//written by: raj6713631@gmail.com
#ifndef TIME_H
#define TIME_H
#include<iomanip>
class Time
{
private:
	int hour,minute,second;
public:
	Time();
	~Time();
	void setHour(int);
	void setMinute(int);
	void setSecond(int);
	int getHour();
	int getMinute();
	int getSecond();
	void printLocal();
	void printUniversal();
};
Time::Time()
{
	hour=minute=second=0;
}
Time::~Time()
{
	cout<<"end of class instance"<<endl;
}

void Time::setHour(int a)
{ 
	if(a<24 && a>=0)
	   hour=a; 
    else
    	cerr<<"Wrong hour"<<endl;
}

void Time::setMinute(int a)
{
	if(a<60 && a>=0)
	   minute=a;
    else
    	cerr<<"Wrong minute"<<endl;
}


void Time::setSecond(int a)
{
	if(a>=0 && a<60)
	second=a;
    else
    	cerr<<"Wrong second"<<endl;
}

int Time::getHour(){return hour;}
int Time::getMinute(){return minute;}
int Time::getSecond(){return second;}

void Time::printUniversal()
{ 

	cout<<setfill('O')<<getHour()<<" : "<<getMinute()<<" : "<<getSecond()<<endl;
}

void Time::printLocal()
{
  cout<<setfill('O')<<getHour()<<" : "<<getMinute()<<" : "<<getSecond()<<endl;	
}
#endif