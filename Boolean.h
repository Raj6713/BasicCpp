/*This class will evaluate the result of boolean values.*/
//@Raj Kumar
#include<iostream>
using namespace std;
#include<string>
#include<iomanip>
class Boolean
{
	private:
		string message;
	public:
		Boolean();
		~Boolean();
		void calculation();
		void displayMessage();
};

Boolean::Boolean()
{
	message="";
}
Boolean::~Boolean(){}

void Boolean::calculation()
{
	message+="This shows the working of the Binary operators\n";
	message+="Operator ||\n";
	message+="True || True "+to_string(true || false)+"\n"+
	         "True || False "+to_string(true ||false)+"\n"+
	         "False || True "+to_string(false || true)+"\n"+
	         "False || False "+to_string(false || false)+"\n"+
	         "Operator &&\n"+
	         "True && True "+to_string(true && false)+"\n"+
	         "True && False "+to_string(true &&false)+"\n"+
	         "False && True "+to_string(false && true)+"\n"+
	         "False && False "+to_string(false && false)+"\n";
}

void Boolean::displayMessage()
{
	cout<<boolalpha<<message<<endl;
}