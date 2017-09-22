//Work: Randomly allocate marks to student in between grades and will produce
//bar chart
//Author: raj6713631@gmail.com
#ifndef BARCHART_H
#define BARCHART_H
#include<string>
#include<iomanip>
#include<cstdlib>
#define MAX_SIZE 100
class BarChart
{
private:
	string courseName,instructor,message;
	int classSize,arr[MAX_SIZE];
	int size;
	int grades[10]={0};
public:
	BarChart();
	~BarChart();
	void setSize(int);
	int getSize();
	void setCourse(string);
	string getCourse();
	void setInstructor(string);
	string getInstructor();
	string getMessage();
	void allocateMarks();
	void formBarChart();
	void toValues(int);
	void displayMessage();
};
BarChart::BarChart()
{
	message="";
	instructor="";
	courseName="";
	classSize=0;
}
BarChart::~BarChart(){}

void BarChart::setSize(int a)
{
	if(a>0)
		size=a;
	else
		{
			cerr<<"Size cannot be negative"<<endl;
			size=3;
		}
}

void BarChart::setCourse(string p)
{
	courseName=p;
}

void BarChart::setInstructor(string p)
{
	instructor=p;
}

int BarChart::getSize(){return size;}

string BarChart::getCourse(){return courseName;}

string BarChart::getInstructor(){return instructor;}

string BarChart::getMessage(){return message;}

void BarChart::formBarChart()
{
	register int i,j;
	message="Instructor: "+getInstructor();
	message+="\nCourse Name: "+getCourse();
	for(i=0;i<getSize();i++)
	{
		arr[i]=rand()%100+1;
		toValues(arr[i]);
	}
	message+="\n";
    for(i=3;i<10;i++)
    {
    message+=to_string(i*10)+" - "+to_string((i+1)*10)+" : ";
      for(j=0;j<grades[i];j++)
      	{   
      		message+="*";
        }
      message+="\n";
    }
}
inline void BarChart::toValues(int p)
{
	if(p>90)
		++grades[9];
	else if(p>80)
		++grades[8];
	else if(p>70)
		++grades[7];
	else if(p>60)
		++grades[6];
	else if(p>50)
		++grades[5];
	else if(p>35)
		++grades[4];
	else
		++grades[3];
}

void BarChart::displayMessage()
{
	formBarChart();
	cout<<getMessage()<<endl;
}

#endif