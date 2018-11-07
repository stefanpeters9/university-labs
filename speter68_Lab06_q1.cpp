#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
const int size(10);
int my_array[size];

void myHeader(string name, int lab, string date, int question)
{
	cout<<setw(85)<<setfill('^');
	cout<<"\n\tName: "<<name<<"\n\tLab #: "<<lab<<"\n\t"<<date<<"\n\tQuestion: "<<question;
	cout<<endl<<setw(120)<<setfill('^');
}

int
()
{
	myHeader("Stefan Peters", 06, "March 10th", 1);

	int element;
	char response;

	do
	{
	cout<<"\nEnter an integer for the array multiples: ";
	cin>>element;

	int sum(0),counter(0);

	cout<<"\nElement                       Value\n";
	for(int i=0;i<size;i++)
	{
		my_array[i]= element*(i+1);
		sum += my_array[i];
		counter++;
		cout<<setw(30)<<setfill('.');
		cout.setf(ios::left);
		cout<<i+1;
		cout.unsetf(ios::left);
		cout.setf(ios::right);
		cout<<my_array[i]<<endl;
		cout.unsetf(ios::right);
	}
	cout<<"\nSum: "<<sum<<"\n\nAverage: "<<sum/counter;

	cout<<"\n\nMultiplied by 2:\n";
	cout<<"\nElement                       Value\n";
	for(int i=0;i<size;i++)
	{
		cout<<setw(30)<<setfill('.');
		cout.setf(ios::left);
		cout<<i+1;
		cout.unsetf(ios::left);
		cout.setf(ios::right);
		cout<<(my_array[i])*2<<endl;
		cout.unsetf(ios::right);
	}

	cout<<"\n\nReverse:\n";
	cout<<"\nElement                       Value\n";
	for(int i=0;i<size;i++)
	{
		cout<<setw(30)<<setfill('.');
		cout.setf(ios::left);
		cout<<i+1;
		cout.unsetf(ios::left);
		cout.setf(ios::right);
		cout<<(my_array[9-i])<<endl;
		cout.unsetf(ios::right);
	}

	cout<<"\n\tDo you want calculate another array: (Y/y)";
	cin>>response;
	}while(response=='y'||response=='Y');


	return 0;
}
