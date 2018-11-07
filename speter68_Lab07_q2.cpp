#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

void myHeader(string name, int lab, string date, int question)
{
	cout<<setw(85)<<setfill('^');
	cout<<"\n\tName: "<<name<<"\n\tLab #: "<<lab<<"\n\t"<<date<<"\n\tQuestion: "<<question;
	cout<<endl<<setw(106)<<setfill('^');
}

int main()
{
	myHeader("Stefan Peters", 07, "March 19th", 2);

	int x(10), *PtrB, **PtrA;
	PtrA=&PtrB;
	PtrB=&x;
	cout<<"\n\nVariable    Address    Value\n";
	cout<<"PtrA        "<<&PtrA<<"   "<<PtrA<<endl;
	cout<<"PtrB        "<<&PtrB<<"   "<<PtrB<<endl;
	cout<<"x           "<<&x<<"   "<<x<<endl;

	cout<<"\nPlease enter a number to assign to x using PtrA: ";
	cin>>**PtrA;
	cout<<"\nVariable    Address    Value\n";
	cout<<"PtrA        "<<&PtrA<<"   "<<PtrA<<endl;
	cout<<"PtrB        "<<&PtrB<<"   "<<PtrB<<endl;
	cout<<"x           "<<&x<<"   "<<x<<endl;
	return 0;
}


