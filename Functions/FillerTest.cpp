//Work: Check working of the FillCharacter.h
//Author raj6713631@gmail.com
#include<iostream>
using namespace std;
#include "FillCharacter.h"
int main()
{
	
	char choice,character;
	int size;

	do
	{
		cout<<"Enter size: ";
		cin>>size;
		cout<<"Enter character: ";
		cin>>character;
		Filler fp;
		fp.setSize(size);
		fp.setCharacter(character);
		fp.displayMessage();
		
		cout<<"Want to repeat: Press Y or y:   ";
		cin>>choice;
	}while(choice=='Y' || choice=='y');
	return 0;
}