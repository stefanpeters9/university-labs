#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	//introduction and statement of the program's mission
	cout<<"******************************************************************************"<<endl;
	cout<<"     ES1036: Lab 02 Q3"<<endl<<"     Name: Stefan Peters"<<endl
		<<"     Student Number: 250725466"<<endl<<"     Email: speter68@uwo.ca"<<endl<<"     Section: 001"<<endl
		<<"     Program's Mission: This program tests if the year inputed is a leap year. "<<endl;     
	cout<<"******************************************************************************"<<endl<<endl;

	//initialize variables
	int year, remainder, remainder2;

	//prompt user to enter the year
	cout<<"Enter a year between 1582 and 2014: ";
	cin>>year;
	cout<<"\n\n";

	//calculate if entry is within range
	while(!(year>=1582 && year<=2014)) 
	{
		cout<<"Entry is invalid\n\nPlease enter another year: ";
		cin>>year;
	}
	cout<<"\n";
	//calculate if entry is a leap year
	remainder = year%4;
	remainder2 = year%100;
	if (remainder == 0 && remainder2 != 0) cout<<year<<" was a leap year!\n\n";
	else cout<<year<<" was not a leap year.Sorry.\n\n";

	return 0;
}