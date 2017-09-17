/*This class will test working of the Cipher*/
#include<iostream>
using namespace std;
#include "Cipher.h"
int main()
{
	Cipher cp1;
	string s;
	cout<<"Enter a string: ";
	cin>>s;
	cp1.setString(s);
	cp1.displayMessage();
	return 0;
}