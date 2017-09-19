//This class will show the working of the rounding class
#include<iostream>
using namespace std;
#include "Rounding.h"
int main()
{
	Rounding rp;
	float num;
	int choice;
	char ch;
	do
	{
     cout<<"Enter number: ";
     cin>>num;
     rp.setNumber(num);
     cout<<"1>To Integer"<<endl;
     cout<<"2>To tenth"<<endl;
     cout<<"3>To hundredth"<<endl;
     cout<<"4>To thousandth"<<endl;
     cin>>choice;
     switch(choice)
     {
     	case 1:
     	rp.RoundToInteger();
     	rp.displayMessage();
     	break;

     	case 2:
     	rp.RoundToTen();
     	rp.displayMessage();
     	break;

     	case 3:
     	rp.RoundToHundred();
     	rp.displayMessage();
     	break;

     	case 4:
     	rp.RoundToThousand();
     	rp.displayMessage();
     	break;

     	default:
     	cerr<<"Wrong choice entered"<<endl;
     }


    cout<<"Enter Y or y for repeat: ";
    cin>>ch;
	}while(ch=='Y' || ch=='y');
}
