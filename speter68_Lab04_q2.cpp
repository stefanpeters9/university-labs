#include<iostream>
#include<string>
using namespace std; 
void myHeader(string name, int lab, string date, int question)
{
	cout<<"************************************************************\n	"<<name<<"\n	Lab #"<<lab<<"  "<<date<<"  Question #"<<question<<"\n************************************************************\n";
}
void compound(double principle, double rate, int years)
{
	double amount(0);

	amount = principle*pow((1+rate),years);
	cout<<"\n\n  Year 1: $"<<amount;
	years++;
	amount = principle*pow((1+rate),years);
	cout<<"\n  Year 2: $"<<amount;
	years++;
	amount = principle*pow((1+rate),years);
	cout<<"\n  Year 3: $"<<amount;
	years++;
	amount = principle*pow((1+rate),years);
	cout<<"\n  Year 4: $"<<amount;
	years++;
	amount = principle*pow((1+rate),years);
	cout<<"\n  Year 5: $"<<amount;
}
int main()
{
	//introduction and statement of the program's mission
	myHeader("Stefan Peters", 04, "February 25th", 2);

	//initialize variables
	double amount(0), principle(0), rate(0);
	int years(1);
	string again;

	do
	{
	years=1;

	cout<<"  Enter the amount of the initial investment. ";
	cin>>principle;
	cout<<"\n  Enter the annual interest rate. (%) ";
	cin>>rate;

	rate/= 100.00;
	
	compound(principle, rate, years);

	cout<<"\n\n Would you like to make another calculation? ";
	cin>>again;
	cout<<"\n\n ";
	}
	while(again=="yes"||again=="Yes"||again=="y"||again=="Y");
	
	cout<<"\n\n    Goodbye            ";

	return 0;
}