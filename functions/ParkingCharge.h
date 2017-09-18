//Write a program which will show the working of the parking charge which is sentnel
//based
#ifndef PARKINGCHARGE_H
#define PARKINGCHARGE_H

class Parking 
{
private:
	int hours;
	float charge;
	string carNo;
	string message;
public:
	Parking();
	~Parking();
	int getHours();
	string getCarNo();
	void calculate();
	float charged(int);
	void displayMessage();
};

Parking::Parking()
{
	message="";
	hours=0;
	charge=0;
}

Parking::~Parking(){}

int Parking::getHours(){return hours;}

string Parking::getCarNo(){return carNo;}

float Parking::charged(int h)
{
	float p;
     if(h>0)
     {

     if(h>24)
        p=10.00;
    else
    	p=(h-3)*0.5+2;
    return p;
     }  
     else
     cerr<<"Hours cannot be negatice"<<endl;
     return 0; 	
}

void Parking::calculate()
{
	int i=0,customer=3;
	while(i<customer)
	{
		cout<<"Enter hours:";
		cin>>hours;
		cout<<"Enter car number:";
		cin>>carNo;
        charge=charged(hours);
		i++;
	message+="\nCar No:"+getCarNo()+"  Hours: "+to_string(getHours())+" Charge: "+to_string(charge);
	}
}

void Parking::displayMessage()
{
	calculate();
	cout<<message<<endl;
}
#endif