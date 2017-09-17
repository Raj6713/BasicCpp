/*Write a program which will take option of the student toward the
instructor to check whatever he is getting promoted to next level 
or not.*/
#include<iostream>
using namespace std;
#include<iomanip>
#include<string>
class Promotion
{
private:
	int choice,counter1,counter3;
	string instructor,result;
public:
	Promotion();
	void setInstructor(string);
	string getInstructor();
	void calculation();
	string getResult();
	void displayMessage();
};

Promotion::Promotion()
{
	counter1=counter3=0;
}

void Promotion::setInstructor(string s)
{
	instructor=s;
}

void Promotion::calculation()
{
    cout<<"Enter choice"<<endl;
    cout<<"1> For Pass"<<endl;
    cout<<"2> For fail"<<endl;
    cout<<"-1> for exit"<<endl;
    do
    {
     cout<<"Enter result:";
     cin>>choice;
     if(choice==1)
     	counter1++;
      counter3++;
    }while(choice!=-1);


    if(counter1>(int)0.8*counter3)
    	result="Applied";
    else
    	result="Denied";
}

string Promotion::getResult(){return result;}

string Promotion::getInstructor(){return instructor;}

void Promotion::displayMessage()
{
	cout<<"Instructor Name: "<<getInstructor()<<endl;
	cout<<"Promotion: "<<getResult()<<endl;
}