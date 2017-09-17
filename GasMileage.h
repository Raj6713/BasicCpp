/*This header file will contain the code for calculaton of gasmileage
@Raj Kumar*/
#include<iostream>
using namespace std;
#include<string>
class GasMileage
{
private:
	float miles,gallons,totalMiles,totalGallons;
public:
	GasMileage();
	float getMiles();
	float getGallons();
	void calculation();
	void displayMessage();

};

GasMileage::GasMileage()
{
	miles=0.0;
	gallons=0.0;
}

void GasMileage::calculation()
{
	do
	{
		cout<<"Enter miles(-1 to exit)";
		cin>>miles;
		if(miles==-1)break;
		else
		{
			cout<<"Enter Gallons: ";
			cin>>gallons;
			totalMiles+=miles;
			totalGallons+=gallons;
			cout<<"Avg for this trip:"<<totalMiles/totalGallons<<endl;
		}
	}while(miles!=-1);

}

float GasMileage::getMiles(){return totalMiles;}

float GasMileage::getGallons(){return totalGallons;}

void GasMileage::displayMessage()
{
	cout<<"Total Miles: "<<getMiles()<<endl;
	cout<<"Total Gallons: "<<getGallons()<<endl;
	cout<<"Avgerage for all values: "<<getMiles()/getGallons()<<endl;
}



