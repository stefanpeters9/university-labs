#include<iostream>
#include<string>
using namespace std;

void myHeader(string name, int lab, string date, int question)
{
	cout<<"************************************************************\n	"<<name<<"\n	Lab #"<<lab<<"  "<<date<<"  Question #"<<question<<"\n************************************************************\n";
}
char myChoiceFunction()
{
	char choice;
	int counter(0);
	const char a='a', b='b', c='c', d='d', e='e';
	do
	{
		if(counter>0) cout<<"		Invalid!";
		{
		cout<<"\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ MENU /////////////////////////\n"
		<<"	A. Calculate Power\n	B. Calculate factorial\n	C. Compute Sine function\n"
		<<"	D. Calculate Exponential function\n	E. Exit\n___________________________________________________________\n"
		<<"	Please Enter Your Choice: ";
		cin>>choice;
		choice=tolower(choice);
		counter++;
		}
	}
	while(!(choice==a||choice==b||choice==c||choice==d||choice==e));	
	return choice;
}
double myPowerFunction(double base, int exp)
{
	double answer(1);
	for(int i=1; i<=exp;i++)
	{
		answer *= base;
	}
	return answer;
}
double myFactFunction(int number)
{
	double answer(1);
	for(int i=1; i<=number;i++ )
	{
		answer *=i;
	}
	return answer;
}
double mySinFunction(double angle)
{
	if(angle<=3.1415926536 && angle>=-3.1415926536)
	{
		double answer(angle);
		for(int i=1; i<=10; i++)
		{
			answer += (((myPowerFunction(-1,i))*(myPowerFunction(angle,(2*i+1))))/(myFactFunction(2*i+1)));
		}
		return answer;
	}
	else
		return 0;
}
double myExpFunction(double exponent)
{
	double answer(1);
	for(int i=1; i<=10; i++)
	{
		answer += ((myPowerFunction(exponent,i))/(myFactFunction(i)));
	}
	return answer;
}

int main()
{
	string name, date, playAgain;
	int integer;
	const char a='a', b='b', c='c', d='d', e='e';
	char choice;
	double x, y;
	myHeader("Stefan Peters", 04, "February 25th", 3);
	do
	{
	choice = myChoiceFunction();
	switch(choice)
	{
		case a:
			cout<<"\n\n	**Calculating Power**";
			cout<<"\n\n		Enter a value for the base: ";
			cin>>x;
			do
			{
			cout<<"\n		Enter an integer for the exponent: ";
			cin>>y;
			integer = y;
			}while(!(integer == y));
			cout<<"\n		"<<x<<" to the power of "<<y<<" equals: "<<myPowerFunction(x,y)<<endl<<endl;
			break;
		case b:
			cout<<"\n\n	**Calculating Factorial**";
			do
			{
			cout<<"\n\n		Enter an integer: ";
			cin>>x;
			integer = x;
			}while(!(integer==x));
			cout<<"\n		"<<x<<"! = "<<myFactFunction(x)<<endl<<endl;
			break;
		case c:
			cout<<"\n\n	**Computing the Sine Function**";
			do
			{
			cout<<"\n\n		Enter an angle between -pi and pi: ";
			cin>>x;
			}while(!(x<=3.141592 && x>=-3.141592));
			cout<<"\n		sin("<<x<<") = "<<mySinFunction(x)<<endl<<endl;
			break;
		case d:
			cout<<"\n\n	**Calculating the Exponential Function**";
			cout<<"\n\n		Enter the value of x: ";
			cin>>x;
			cout<<"\n		e to the power of "<<x<<" equals: "<<myExpFunction(x)<<endl<<endl;
			break;
		case e:
			cout<<"\n\n	**Goodbye**\n\n";
			break;
	}
	cout<<"	Would you like to make another calculation :";
	cin>>playAgain;
	}
	while(playAgain=="yes"||playAgain=="y"||playAgain=="Yes"||playAgain=="Y");

	return 0;
}