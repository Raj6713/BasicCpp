/*Grader class is responsile for take student marks for a class and
allocating grades and accounting them*/
#include<iostream>
using namespace std;
#include<iomanip>
#include<string>
class Grader
{
private:
	string courseName,instructor,message;

	int exCount,aCount,bCount,cCount,dCount,pCount,fCount,marks;
public:
	Grader();
	~Grader();
	void setCourseName(string);
	void setInstructor(string);
	string getCourse();
	string getInstructor();
	void calculation();
	void GradeCounter(int);
	void displayMessage();

};


Grader::Grader()
{
	exCount=aCount=bCount=cCount=dCount=pCount=fCount=0;
	message="";
}
Grader::~Grader(){}

void Grader::setCourseName(string s)
{
	courseName=s;
}

void Grader::setInstructor(string s)
{
	instructor=s;
}

string Grader::getCourse(){return courseName;}

string Grader::getInstructor(){return instructor;}

void Grader::calculation()
{
	message+="Instructor Name: "+getInstructor()+"\n"+
	         "Course Name: "+getCourse()+"\n";
	do
	{
		cout<<"Enter grade: ";
		cin>>marks;
		if(marks==-1)break;
		else
          GradeCounter(marks);
	}while(marks!=-1);
}

void Grader::GradeCounter(int p)
{
   p=(p)%10;
   switch(p)
   {
   	case 10: ++exCount; break;
   	case 9:  ++aCount; break;
   	case 8: ++bCount; break;
   	case 7: ++cCount; break;
   	case 6: ++dCount; break;
   	case 5: ++pCount; break;
   	case 4: ++pCount; break;
   	case 3: ++fCount; break;
   	case 2: ++fCount; break;
   	case 1: ++fCount; break;
   	case 0: ++fCount; break;
   }
    
 
}

void Grader::displayMessage()
{
	calculation();
	 message+="Ex grades: "+to_string(exCount)+"\n"+
           "A grades: "+to_string(aCount)+"\n"+
           "B grades: "+to_string(bCount)+"\n"+
           "C grades: "+to_string(cCount)+"\n"+
           "D grades: "+to_string(dCount)+"\n"+
           "P grades: "+to_string(pCount)+"\n"+
           "F grades: "+to_string(fCount)+"\n";
	cout<<message<<endl;
}