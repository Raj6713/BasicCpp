//Work: This person will allocate value and will randomly see whatever a
//number is present in an array
//written by: raj6713631@gmail.com
#include<iostream>
using namespace std;
#include<string>
#include<iomanip>
#include<cstdlib>
void searcher(string *const,const char);
int main()
{
	string sp;
	char ch,choice;
	cout<<"Enter a string"<<endl;
	getline(cin,sp);
	do
	{
		cout<<"Enter character for checking"<<endl;
		cin>>ch;
         searcher(&sp,ch);
         cout<<"Enter choice: "<<endl;
         cin>>choice;
	}while(choice=='Y' || choice=='y');
	return 0;
}

void searcher(string *const a,const char ch)
{
	register int i;
     
	for(i=0;i<a.length();i++)
	{
		if(ch==(a[i]);
		{
			cout<<"Found at location:  "<<i<<endl;
			break;
		}

	}
	cout<<"String searching terminated"<<endl;;

}
