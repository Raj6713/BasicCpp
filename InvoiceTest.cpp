/*Write a program which will show the working of the invoice class*/
#include<iostream>
using namespace std;
#include<string>
#include "Invoice.h"
int main()
{
	string s1,s2;
	int p;
	float quan;
	Invoice invoice1("","",0,0.0);
	cout<<"Before Initialization: "<<endl;
	invoice1.getInvoiceAmount();
	cout<<"Enter Details for the part"<<endl;
	cout<<"Part Number: "<<endl;
	getline(cin,s1);
	cout<<"Part Description: "<<endl;
	getline(cin,s2);
	cout<<"Qunatity: "<<endl;
	cin>>p;
	cout<<"Price: "<<endl;
	cin>>quan;
	cout<<"After Initiazation:"<<endl;
	invoice1.setPartNumber(s1);
	invoice1.setPartDescription(s2);
	invoice1.setQuantity(p);
	invoice1.setPrice(quan);
	invoice1.getInvoiceAmount();
	return 0;
}