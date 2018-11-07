#include<iostream>
using namespace std;
int main()
{
	//introduction and statement of the program's mission
	cout<<"******************************************************************************"<<endl;
	cout<<"     ES1036: Lab 01 Q1"<<endl<<"     Name: Stefan Peters"<<endl
		<<"     Student Number: 250725466"<<endl<<"     Email: speter68@uwo.ca"<<endl<<"     Section: 001"<<endl
		<<"     Program's Mission: This program convert any miles per hour entry into"<<endl<<"     kilometres per hour."<<endl;
	cout<<"******************************************************************************"<<endl<<endl;
	
	//declare and initalize variables
	double mph(0), kph(0);

	//prompt user to enter the speed in miles per hour
	cout<<"Enter the speed in miles per hour:";
	cin>>mph;
	cout<<endl;
	//convert mph to kph
	kph = mph*(1/0.6213712);

	//display speed in kph
	cout<<"The speed in kilometres per hour is "<<kph<<" km/h."<<endl<<endl;
	return 0;
}