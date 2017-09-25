//Work: This will occupy the sales matrix and show the total sales of product as well as the
//sales by the sales person
//Author: raj6713631@gmail.com
#ifndef SALESPERSON_H
#define SALESPERSON_H
#include<string>
#include<iomanip>
class Sales
{
private:
	int num;
	double arr[5][6],sum;
	string message;
public:
	Sales();
	~Sales();
	string getMessage();
	void process();
	void displayMessage();
};
Sales::Sales()
{
	message="";
}


Sales::~Sales()
{
	cout<<"Destructor initiated"<<endl;
}

string Sales::getMessage(){return message;}

void Sales::process()
{
	cout<<"Enter Values"<<endl;
	register int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
			{
				cout<<"Enter Sales person["<<i<<"] Item["<<j<<"]: ";
				cin>>arr[i][j];
			}
	}
    //Total Sales of an item
	for(i=0;i<4;i++)
	{
		sum=0;
		for(j=0;j<5;j++)
			sum+=arr[i][j];
		arr[i][5]=sum;
	}
   //Total sales by a salesperson
	for(j=0;j<5;j++)
	{
		sum=0;
		for(i=0;i<4;i++)
			sum+=arr[i][j];
		arr[4][j]=sum;
	}

    arr[5-1][6-1]=0.0;
    message="Sales Matrix\n";
	for(i=0;i<5;i++)
	{
      for(j=0;j<6;j++)
      	message+=to_string(arr[i][j])+"  ";
      message+="\n";
	}
}


void Sales::displayMessage()
{
	process();
	cout<<getMessage()<<endl;
}
#endif