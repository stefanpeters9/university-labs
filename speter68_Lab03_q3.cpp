#include<iostream>
#include<string>
using namespace std; 
int main()
{
	//introduction and statement of the program's mission
	cout<<"******************************************************************************"<<endl;
	cout<<"     ES1036: Lab 03 Q3"<<endl<<"     Name: Stefan Peters"<<endl
		<<"     Student Number: 250725466"<<endl<<"     Email: speter68@uwo.ca"<<endl<<"     Section: 001"<<endl
		<<"     Program's Mission: This program will convert different units. "<<endl;     
	cout<<"******************************************************************************"<<endl<<endl;
	
	//initialize variables
	const char A='A', B='B', C='C', D='D', E='E', F='F', G='G';
	string repeat;
	char choice;
	double x(0), y(0),exit(0);

	do
	{
		//starting menu 
	cout<<"\n\n~~~~~~~~~~~~CONVERSION MENU~~~~~~~~~~~~~~~\n\n	A. Celsius to Fahrenheit\n	B. Fahrenheit to Celsius\n	C. Inches to Centimeters\n	D. Centimeters to Inches\n	E. Meters to Feet\n	F. Feet to Meters\n	G. Exit\n\n";
	cout<<"	Please enter a menu choice: ";
	cin>>choice;
	choice=toupper(choice);
		// switch statement
	switch(choice)
	{
		case A:
			cout<<"\n\n	**You've entered Celsius to Fahrenheit**";
			cout<<"\n\n		Enter a value in Celsius: ";
			cin>>x;
			y=(9.0/5.0)*x+32;
			cout<<"\n		"<<x<<" degrees Celsius is equal to "<<y<<" degrees Fahrenheit.";
			break;
		case B:
			cout<<"\n\n	**You've entered Fahrenheit to Celsius**";
			cout<<"\n\n		Enter a value in Fahrenheit: ";
			cin>>x;
			y=(5.0/9.0)*(x-32);
			cout<<"\n		"<<x<<" degrees Fahrenheit is equal to "<<y<<" degrees Celsius.";
			break;
		case C:
			cout<<"\n\n	**You've entered Inches to Centimeters**";
			cout<<"\n\n		Enter a value in Inches: ";
			cin>>x;
			y=2.54*x;
			cout<<"\n		"<<x<<" Inches is equal to "<<y<<" Centimeters.";
			break;
		case D:
			cout<<"\n\n	**You've entered Centimeters to Inches**";
			cout<<"\n\n		Enter a value in Centimeters: ";
			cin>>x;
			y=0.39*x;
			cout<<"\n		"<<x<<" Centimeters is equal to "<<y<<" Inches.";
			break;
		case E:
			cout<<"\n\n	**You've entered Meters to Feet**";
			cout<<"\n\n		Enter a value in Meters: ";
			cin>>x;
			y=3.28*x;
			cout<<"\n		"<<x<<" Meters is equal to "<<y<<" Feet.";
			break;
		case F:
			cout<<"\n\n	**You've entered Feet to Meters**";
			cout<<"\n\n		Enter a value in Feet: ";
			cin>>x;
			y=0.3*x;
			cout<<"\n		"<<x<<" Feet is equal to "<<y<<" Meters.";
			break;
		case G:
			cout<<"\n\n	**Goodbye**\n\n";
			exit++;
			break;
		default:
			cout<<"\n\n	Invalid Entry.";
	}
	}
	while(exit<1);
	return 0;
}