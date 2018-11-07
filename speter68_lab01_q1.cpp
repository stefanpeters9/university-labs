#include<iostream> 
using namespace std;
int main()
{
	//declare and initialize the variables
	double volume(0), radius(0), height(0), surface_area(0);
	const double PI(3.1416);

	//introduction and statement of the program's purpose
	cout<<"******************************************************************************"<<endl;
	cout<<"     ES1036: Lab 01 Q1"<<endl<<"     Name: Stefan Peters"<<endl<<"     Student Number: 250725466"<<endl<<"     Email: speter68@uwo.ca"<<endl<<"     Section: 001"<<endl<<"     Program's Mission: This program will calculate and display the volume and"<<endl<<"     surface area of a cylinder given the radius and the height."<<endl;
	cout<<"******************************************************************************"<<endl<<endl;
	
	//prompt user to input the information and record it as a variable  
	cout<<"Enter the radius of the cylinder in cm: ";
	cin>>radius;
	cout<<"Enter the height of the cylinder in cm: ";
	cin>>height;
	cout<<endl; 

	//calculate the volume and surface area
	volume = (PI*radius*radius*height);
	surface_area = (2*PI*radius*radius + 2*PI*radius*height);

	//display the volume and surface area
	cout<<"The cylinder has a volume of "<<volume<<" cm^3 and a surface"<<endl;
	cout<<"area of "<<surface_area<<" cm^2."<<endl<<endl;
	
}
	return 0;

