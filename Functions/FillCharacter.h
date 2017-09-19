//Work: Will form square of character
//Input: Side and character
//Ouput: Square of filler Character
//Author: RAJ KUMAR raj6713631@gmail.com
#ifndef FILLCHARACTER_H
#define FILLCHARACTER_H
#include<cstdlib>
#include<string>
class Filler
{
private:
	char ch;
	int size;
	string message;
public:
	Filler();
	~Filler();
	void setSize(int);
	void setCharacter(char);
	int getSize();
	char getCharacter();
	string getMessage();
	void formFigure();
	void displayMessage();
};

Filler::Filler()
{
}

Filler::~Filler()
{	
}

void Filler::setSize(int p)
{
	if(p>0)
		size=p;
	else
	{
		cerr<<"size cannot be negative: Setting to 2";
		size=2;
	}
}

void Filler::setCharacter(char ch)
{
	ch=ch;
}

int Filler::getSize(){return size;}

char Filler::getCharacter(){return ch;}

string Filler::getMessage(){return message;}

void Filler::formFigure()
{
	message="";
	for(register int i=0;i<getSize();i++)
	{
		for(register int j=0;j<getSize();j++)
			message+=getCharacter();
		message+="\n";
	}
}

void Filler::displayMessage()
{
	formFigure();
	cout<<getMessage()<<endl;
}
#endif