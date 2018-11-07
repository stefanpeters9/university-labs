#include<iostream>
#include<string>
using namespace std; 
int main()
{
	//introduction and statement of the program's mission
	cout<<"******************************************************************************"<<endl;
	cout<<"     ES1036: Lab 03 Q2"<<endl<<"     Name: Stefan Peters"<<endl
		<<"     Student Number: 250725466"<<endl<<"     Email: speter68@uwo.ca"<<endl<<"     Section: 001"<<endl
		<<"     Program's Mission: This program will calculate compound interest. "<<endl;     
	cout<<"******************************************************************************"<<endl<<endl;
	
	//initialize variables
	double amount(0), principle(0), rate(0), years(1.0);
	string again;

	do
	{
	years=1.000;

	cout<<"  Enter the amount of the initial investment. ";
	cin>>principle;
	cout<<"\n  Enter the annual interest rate. (%) ";
	cin>>rate;

	rate/= 100.00;
	
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

	cout<<"\n\n Would you like to make another calculation? ";
	cin>>again;
	cout<<"\n\n ";
	}
	while(again=="yes"||again=="Yes"||again=="y"||again=="Y");
	
	cout<<"\n\n    Goodbye            ";

	return 0;
}