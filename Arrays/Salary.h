//Work: This header will take salaries of random people and will show bar
//chart of their corresponding earning fall using bins
//Author: raj6713631@gmail.com
#ifndef SALARY_H
#define SALARY_H
#include<string>
#include<iomanip>
#include<cstdlib>
#define MAX_SIZE 50
class Salary
{
private:
	int size;
	double sales[MAX_SIZE],salary[MAX_SIZE];
	int freq[11];
	string message;
public:
	Salary();
	~Salary();
	void setSize(int);
	int getSize();
	string getMessage();
	void setSales();
	void processSales();
	void allocator(float);
	void displayMessage();
};

Salary::Salary()
{
  cout<<"Constructor initiated"<<endl;
  message="";
  for(int i=0;i<MAX_SIZE;i++)
  salary[i]=200.00;
  freq[11]={};
}

Salary::~Salary()
{
	cout<<"Destructor initiated"<<endl;
}

void Salary::setSize(int a)
{
	if(a>0)
		size=a;
	else
		size=MAX_SIZE;
}
int Salary::getSize(){return size;}

string Salary::getMessage(){return message;}

void Salary::setSales()
{
	register int i;
	for(i=0;i<getSize();i++)
		sales[i]=rand()%3000+2000.00;
	for(i=0;i<getSize();i++)
		salary[i]+=0.09*sales[i];
}


void Salary::processSales()
{
	for(int i=0;i<getSize();i++)
	allocator(salary[i]);

   message="Bar chart for the employees\n";
   for(int i=0;i<10;i++)
   {
   	message+=to_string(i*100)+" : "+to_string((i+1)*(100)-1)+" : ";
   	       for(int j=0;j<freq[i];j++)
   	       	message+="*";
   	       message+="\n";
   }
}

void Salary::allocator(float p)
{
	if(p>=200.00 && p<300.00)
		++freq[2];
	else if(p>=300.00 && p<400.00)
		++freq[3];
	else if(p>=400.00 && p<500.00)
		++freq[4];
	else if(p>=500.00 && p<600.00)
		++freq[5];
	else if(p>=600.00 && p<700.00)
		++freq[6];
	else if(p>=700.00 && p<800.00)
		++freq[7];
	else if(p>=800.00 && p<900.00)
		++freq[8];
	else if(p>=900.00 && p<1000.00)
		++freq[9];
	else
		++freq[10];

}

void Salary::displayMessage()
{
	setSales();
	processSales();
	cout<<getMessage()<<endl;
}
#endif
