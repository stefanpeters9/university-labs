#include<iostream>
#include<string>
using namespace std;

int half(int x)
{
	x=x/2;
	return x;
}
void myHeader(string name, int lab, string date, int question)
{
	cout<<"************************************************************\n	"<<name<<"\n	Lab #"<<lab<<"  "<<date<<"  Question #"<<question<<"\n************************************************************\n";
}
int main()
{
	myHeader("Stefan Peters", 05, "March 9th",1 );
	int x(0);
	char play_again;
	do
	{
	while(x<100)
	{
	x=100;
	cout<<"Please enter a number to half: ";
	cin>>x;
	if(x<100) cout<<"\nInvaild Entry\n";
	}
	
	for(x;x>1;)
	{
		x=half(x);
		cout<<x<<endl;
	}

	cout<<"Would you like to calculate another? (Y/y): ";
	cin>>play_again;
	}while (play_again=='Y'||play_again=='y');
	cout<<"\n\tGoodbye\n";
	return 0;

}