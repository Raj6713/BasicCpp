/*This class will create a different parameters function definition and will show
the ouput related to that.*/
#include<iostream>
using namespace std;
#include<stdio.h>
#include<math.h>
class Volume
{
private:
	int vol;
public:
	Volume();
	~Volume();
	void boxVolume(int length=1,int breadth=1,int height=1);
    int getVolume();
    void displayMessage();
};

Volume::Volume()
{
	vol=1;
}

Volume::~Volume(){}

int Volume::getVolume(){return vol;}

void Volume::boxVolume(int length,int breadth,int height)
{
  vol=length*breadth*height;
}

void Volume::displayMessage()
{
	cout<<"Volume is: "<<getVolume()<<endl;
}