#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

void myHeader(string name, int lab, string date, int question)
{
	cout<<setw(85)<<setfill('^');
	cout<<"\n\tName: "<<name<<"\n\tLab #: "<<lab<<"\n\t"<<date<<"\n\tQuestion: "<<question;
	cout<<endl<<setw(100)<<setfill('^');
}
void getArea(double a, double b, double c, double half)
{
	double area = (half*(a+b))*c;
	cout<<"\n\tThe Area of the Trapezoid is "<<area;
}
void getArea(double a, double b, double pi)
{
	double area = pi*a*b;
	cout<<"\n\tThe Area of the Ellipse is "<<area;
}
void getArea(double height, double width)
{
	double area = height*width;
	cout<<"\n\tThe Area of the Parallelogram is "<<area;
}
void getArea(double length)
{
	double area = length*length;
	cout<<"\n\tThe Area of the Square is "<<area;
}

int main()
{
	myHeader("Stefan Peters", 07, "March 19th", 3);

	int choice(0);

	do
	{
	cout<<"\n\n1. Area of a Square"
		<<"\n2. Area of a Parallelogram"
		<<"\n3. Area of an Ellipse"
		<<"\n4. Area of a Trapezoid"
		<<"\n5. Exit"
		<<"\n\nEnter Your Choice: ";
	cin>>choice;

	switch(choice)
	{
	case 1:
		{
			double length;
			cout<<"\n\nEnter the length of the square: ";
			cin>>length;
			getArea(length);
		}break;
	case 2:
		{
			double height, width;
			cout<<"\n\nEnter the height of the Parallelogram: ";
			cin>>height;
			cout<<"\nEnter the width of the Parallelogram: ";
			cin>>width;
			getArea(height,width);
		}break;
	case 3:
		{
			double radius1, radius2;
			cout<<"\n\nEnter the radius of the Ellipse: ";
			cin>>radius1;
			cout<<"\nEnter the second radius of the Ellipse: ";
			cin>>radius2;
			getArea(radius1,radius2,3.14159265);
		}break;
	case 4:
		{
			double base1, base2, height;
			cout<<"\n\nEnter the first base of the Trapezoid: ";
			cin>>base1;
			cout<<"\nEnter the second base of the Trapezoid: ";
			cin>>base2;
			cout<<"\nEnter the height of the Trapezoid: ";
			cin>>height;
			getArea(base1,base2,height,0.5);
		}break;
	case 5:
		cout<<"\n\tGoodbye\n\n\n";
		break;
	default:
		cout<<"\nInvalid Entry";
	}

	}while(choice!=5);

	return 0;
}