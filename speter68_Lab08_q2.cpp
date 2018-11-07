#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

void myHeader(string name, int lab, string date, int question)
{
	cout<<setw(85)<<setfill('^');
	cout<<"\n\tName: "<<name<<"\n\tLab #: "<<lab<<"\n\t"<<date<<"\n\tQuestion: "<<question;
	cout<<endl<<setw(80)<<setfill('^');
}

int main()
{
	myHeader("Stefan Peters", 8, "March 28th", 2);

	cout<<"\n\n";
	string a("Good"), b("morning."), c("How"), d("are"), e("you"), f("today?");
	string *pointer[6]={&a,&b,&c,&d,&e,&f};
	for(int i=0; i<6; i++)
		cout<<*pointer[i]<<" ";
	cout<<endl;

	return 0;
}