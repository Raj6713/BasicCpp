//Work: This header will simulate rolling of two dice and show the time a value had occured
//Author: raj6713631@gmail.com
#ifndef TWODICE_H
#define TWODICE_H
#include<string>
#include<iomanip>
#include<cstdlib>
class TwoDice
{
private:
	int arr[6][6];
	int dice1,dice2,rolls;
public:
	TwoDice();
	~TwoDice();
	void setRolls(int);
	int  getRolls();
	void process();
	void allocate(int,int);
	void showMessage();
};

TwoDice::TwoDice(){
	rolls=0;
	register int i,j;
	for(i=0;i<6;i++)
		for(j=0;j<6;j++)
			arr[i][j]=0;
}
TwoDice::~TwoDice()
{
	cout<<"Destructor initiated"<<endl;
}

void TwoDice::setRolls(int a)
{
	if(a>0)
		rolls=a;
	else
		rolls=10;
}

int TwoDice::getRolls()
{
	return rolls;
}

void TwoDice::process()
{
	register int i;
   for(i=0;i<getRolls();i++)
   {
   	dice1=rand()%6;
   	dice2=rand()%6;
   	allocate(dice1,dice2);
   }
}

void TwoDice::allocate(int a,int b)
{
	++arr[a][b];
}

void TwoDice::showMessage()
{
	process();
	register int i,j;
	for(i=0;i<6;i++)
	{	for(j=0;j<6;j++)
			cout<<setw(6)<<arr[i][j];
		cout<<"\n";
	}
}
#endif













