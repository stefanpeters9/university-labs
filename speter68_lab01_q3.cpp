#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	//introduction and statement of the program's mission
	cout<<"******************************************************************************"<<endl;
	cout<<"     ES1036: Lab 01 Q3"<<endl<<"     Name: Stefan Peters"<<endl
		<<"     Student Number: 250725466"<<endl<<"     Email: speter68@uwo.ca"<<endl<<"     Section: 001"<<endl
		<<"     Program's Mission: This program takes entered values and outputs the"<<endl
		<<"     result of cos(x1) + sqrt(x2) + sin(x3) and "<<endl
		<<"     (x1^2 + e^x2) / x3^0.5"<<endl;     
	cout<<"******************************************************************************"<<endl<<endl;
	
	//declare and initalize variables
	double x1(0), x2(0), x3(0), y1(0), y2(0);
	const double e = 2.71828182846;

	//prompt user to enter the values of x1 x2 and x3
	cout<<"Enter the value for x1: ";
	cin>>x1;
	cout<<"Enter the value for x2: ";
	cin>>x2;
	cout<<"Enter the value for x3: ";
	cin>>x3;
	cout<<endl;

	//calculate y1 and y2
	y1 = cos(x1) + sqrt(x2) + sin(x3);
	y2 = (pow(x1,2.0) + pow(e,x2)) / pow(x3,0.5);

	//display the results
	cout<<"The value for y1 is "<<y1<<endl<<"The value for y2 is "<<y2<<endl<<endl;
	return 0;
}