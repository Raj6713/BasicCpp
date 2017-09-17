/*Write a program which will create Invoice and will show corresponding
function related to it part number, part desc, quantity and price*/
#include<iostream>
using namespace std;
#include<string>
class Invoice
{
private:
	string partNumber,partDescription;
	int quantity;
	float price;
public:
	Invoice(string,string,int,float);
	void setPartNumber(string s);
	void setPartDescription(string s);
	void setQuantity(int p);
	void setPrice(float p);
	string getPartNumber();
	string getPartDescription();
	int getQuantity();
	float getPrice();
    void getInvoiceAmount();
};

Invoice::Invoice(string s0,string s1,int p,float q)
{
	partNumber=s0;
	partDescription=s1;
	quantity=p;
	price=q;
}

void Invoice::setPartNumber(string s)
{
	partNumber=s;
}


void Invoice::setPartDescription(string s)
{
	partDescription=s;
}

void Invoice::setQuantity(int p)
{
	quantity=p;
}

void Invoice::setPrice(float p)
{
	price=p;
}

string Invoice::getPartNumber()
{
	return partNumber;
}

string Invoice::getPartDescription()
{
	return partDescription;
}

int Invoice::getQuantity()
{
	return quantity;
}

float Invoice::getPrice()
{
	return price;
}

void Invoice::getInvoiceAmount()
{
	cout<<"Part Number: "<<getPartNumber()<<endl;
	cout<<"Part Description: "<<getPartDescription()<<endl;
	cout<<"Part Quantity: "<<getQuantity()<<endl;
	cout<<"Part Price"<<getPrice()<<endl;
	cout<<"Total Invoice Amount: "<<getPrice()*getQuantity()<<endl;
}


















