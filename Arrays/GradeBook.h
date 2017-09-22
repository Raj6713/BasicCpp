//Work: This gradebook clas will use array and will also show class summary
//Author: raj6713631@gmail.com
#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include<string>
#include<iomanip>
#include<climits>
#include<cstdlib>
#define MAX_SIZE 200
class GradeBook
{
private:
	string courseName,instructorName,message;
	int classSize;
	int arr[MAX_SIZE],frequency[10]={};
	int maximum,minimum;
	float average;
public:
	GradeBook();
	~GradeBook();

	void setInstructor(string);
	string getInstructor();
	
	void setCourseName(string);
	string getCourseName();
	
	void setClassSize(int);
	int getClassSize();
     
    void setArrayValues();
    void findMaximum();
    void findMinimum();
    void findAverage();
    void processBarChart();
    void displayMessage();
};

GradeBook::GradeBook()
{
	cout<<"Constructor executed"<<endl;
	message="";
	maximum=INT_MIN;
	minimum=INT_MAX;	
}

GradeBook::~GradeBook()
{
	cout<<"Destructor executed"<<endl;
}


void GradeBook::setInstructor(string p)
{
	instructorName=p;
}

string GradeBook::getInstructor(){return instructorName;}


void GradeBook::setCourseName(string p)
{
	courseName=p;
}

string GradeBook::getCourseName(){return courseName;}

void GradeBook::setClassSize(int p)
{
	if(p>0)
		classSize=p;
	else
	{
		cerr<<"Size cannot be negative;(default 10)";
		classSize=10;
	}
}

int GradeBook::getClassSize(){return classSize;}

void GradeBook::setArrayValues()
{
	register int i;
	for(i=0;i<getClassSize();i++)
	arr[i]=rand()%100+1;
}

void GradeBook::findMaximum()
{
   register int i;
   for(i=0;i<getClassSize();i++)
   {
   	if(arr[i]>maximum)
   		maximum=arr[i];
   }
   message+="\nClass maximum: "+to_string(maximum);
}

void GradeBook::findMinimum()
{
	register int i;
	for(i=0;i<getClassSize();i++)
	{
		if(arr[i]<minimum)
			minimum=arr[i];
	}
	message+="\nClass minimum: "+to_string(minimum);
}

void GradeBook::processBarChart()
{
	message+="\nFrequency Bar Chart\n";
	register int i,j;
	for(i=0;i<getClassSize();i++)
		++frequency[(int)arr[i]/10];

	for(int i=0;i<10;i++)
	{
		message+=to_string(10*i)+" : "+to_string((i+1)*10)+"  ";
		for(j=0;j<frequency[i];j++)
			message+="*";
		message+="\n";
	}
}
void GradeBook::findAverage()
{
	register int i,sum=0;
	for(i=0;i<getClassSize();i++)
		sum+=arr[i];
	message+="\n Average: "+to_string(sum/getClassSize());
}


void GradeBook::displayMessage()
{
	message+="Following is class details: ";
	message+="\nClass instructor: "+getInstructor();
	message+="\nCourse Name: "+getCourseName();
	findMinimum();
	findMaximum();
	findAverage();
	processBarChart();
	cout<<message<<endl;
}
#endif