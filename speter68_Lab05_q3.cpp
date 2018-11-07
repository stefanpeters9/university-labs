#include<iostream>
#include<string>
#include<ctime>
using namespace std;
int number1, number2, number3, lottery1, lottery2, lottery3;
void myHeader(string name, int lab, string date, int question)
{
	cout<<"************************************************************\n	"<<name<<"\n	Lab #"<<lab<<"  "<<date<<"  Question #"<<question<<"\n************************************************************\n";
}
void getUserNum()
{
	int counter(0);
	do
	{
	cout<<endl<<"Please Enter Three Lottery Numbers  (1-9): ";
	cin>>number1>>number2>>number3;
	if(number1>=1&&number1<=9&&number2>=1&&number2<=9&&number3>=1&&number3<=9)
		counter++;
	}while(counter==0);
		
}
int calcWinnings()
{
	int winnings(0), counter(0);
	if(number1==lottery1)
	{
		winnings += 1000;
		counter++;
	}
	if(number1==lottery2)
	{
		winnings += 100;
		counter++;
	}
	if(number1==lottery3)
	{
		winnings += 100;
		counter++;
	}
	if(number2==lottery1)
	{
		winnings += 100;
		counter++;
	}
	if(number2==lottery2)
	{
		winnings += 1000;
		counter++;
	}
	if(number2==lottery3)
	{
		winnings += 100;
		counter++;
	}
	if(number3==lottery1)
	{
		winnings += 100;
		counter++;
	}
	if(number3==lottery2)
	{
		winnings += 100;
		counter++;
	}
	if(number3==lottery3)
	{
		winnings += 1000;
		counter++;
	}
	if(winnings==3000)
		winnings=10000;
	if(counter==3 && winnings<3000)
		winnings=3000;

	return winnings;
}
int main()
{
	myHeader("Stefan Peters", 05, "March 9th",3 );
	int counter(0);

	do
	{
	char response('y');
	counter=0;
	getUserNum();
	
	srand((unsigned int)time(NULL));

	lottery1=(1+rand()%9);
	lottery2=(1+rand()%9);
	lottery3=(1+rand()%9);
	cout<<lottery1<<endl;
	cout<<lottery2<<endl;
	cout<<lottery3<<endl;

	cout<<"\tYour Prize is $"<<calcWinnings()<<endl<<endl;

	cout<<"\tWould you like to play again? (Y/y): ";
	cin>>response;
	if(response=='Y'||response=='y')
		counter++;
}
while(counter==1);
	return 0;
}
