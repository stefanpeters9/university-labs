#include<iostream>
#include<cmath>
using namespace std; 
int main()
{
	//introduction and statement of the program's mission
	cout<<"******************************************************************************"<<endl;
	cout<<"     ES1036: Lab 02 Q4"<<endl<<"     Name: Stefan Peters"<<endl
		<<"     Student Number: 250725466"<<endl<<"     Email: speter68@uwo.ca"<<endl<<"     Section: 001"<<endl
		<<"     Program's Mission: This program is calculates roots given a, b, and c. "<<endl;     
	cout<<"******************************************************************************"<<endl<<endl;
	
	//initialize a, b, and c.
	double a, b, c, discriminant, x1, x2;

	//ask the user to input values of a, b, and c.
	do
	{
	cout<<"   Please enter the value to a: ";
	cin>>a;cout<<"\n";
	cout<<"   Please enter the value to b: ";
	cin>>b;cout<<"\n";
	cout<<"   Please enter the value to c: ";
	cin>>c;cout<<"\n\n";

	discriminant = (b*b-4*a*c);
	if (discriminant<=0)cout<<"  Ivalid entry please try again.\n\n";
	}

	//validate the numbers
	while(discriminant<=0);

	//calculate the roots
	x1 = ((-b+sqrt(discriminant))/(2*a));  
	x2 = ((-b-sqrt(discriminant))/(2*a));

	//output the results
	cout<<"   The roots of the function are x= "<<x1<<" and x= "<<x2<<"\n\n";
	
	cout<<endl<<sqrt(-2)<<endl;
	return 0;
}