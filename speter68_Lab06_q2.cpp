#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
const int size1(13), size2(14), size3(15), size4(16);
int thirteen_digit[size1], fourteen_digit[size2], fifteen_digit[size3], sixteen_digit[size4];
string stringNumber;

void myHeader(string name, int lab, string date, int question)
{
	cout<<setw(85)<<setfill('^');
	cout<<"\n\tName: "<<name<<"\n\tLab #: "<<lab<<"\n\t"<<date<<"\n\tQuestion: "<<question;
	cout<<endl<<setw(114)<<setfill('^');
}

int sumOfDoubleEvenPlace(string stringNumber)
{
	int sum(0);
	int length = stringNumber.length(); 

	if(length==13)
	{
		for(int i=0; i<size1; i++)
		{
			thirteen_digit[i]=stringNumber[i]-'0';
		}
		for(int i=0;i<size1;i++)
		{

			if((thirteen_digit[12-(i+1)])*2>9)
			{
				sum += (1+((thirteen_digit[12-(i+1)])*2)-10);
			}else (sum += (thirteen_digit[12-(i+1)])*2);
			++i;
		}
	}
	if(length==14)
	{
		for(int i=0; i<size2; i++)
		{
			fourteen_digit[i]=stringNumber[i]-'0';
		}
		for(int i=0;(i-1)<size2;i++)
		{

			if((fourteen_digit[13-(i+1)])*2>9)
			{
				sum += (1+((fourteen_digit[13-(i+1)])*2)-10);
			}else (sum += (fourteen_digit[13-(i+1)])*2);
			++i;
		}
	}
	if(length==15)
	{
		for(int i=0; i<size3; i++)
		{
			fifteen_digit[i]=stringNumber[i]-'0';
		}
		for(int i=0;i<size3;i++)
		{

			if((fifteen_digit[14-(i+1)])*2>9)
			{
				sum += (1+((fifteen_digit[14-(i+1)])*2)-10);
			}else (sum += (thirteen_digit[14-(i+1)])*2);
			++i;
		}
	}
	if(length==16)
	{
		for(int i=0; i<size4; i++)
		{
			sixteen_digit[i]=stringNumber[i]-'0';
		}
		for(int i=0;i<size4;i++)
		{

			if((sixteen_digit[15-(i+1)])*2>9)
			{
				sum += (1+((sixteen_digit[15-(i+1)])*2)-10);
			}else (sum += (sixteen_digit[15-(i+1)])*2);
			++i;
		}
	}	
	return sum;

}

int sumofOddPlace(string stringNumber)
{
	int sum(0);
	int length = stringNumber.length(); 

	if(length==13)
	{
		for(int i=0; i<size1; i++)
		{
			thirteen_digit[i]=stringNumber[i]-'0';
		}
		for(int i=0;i<size1;i++)
		{


		}
	}
	if(length==14)
	{
		for(int i=0; i<size2; i++)
		{
			fourteen_digit[i]=stringNumber[i]-'0';
		}
		for(int i=0;(i-1)<size2;i++)
		{

		}
	}
	if(length==15)
	{
		for(int i=0; i<size3; i++)
		{
			fifteen_digit[i]=stringNumber[i]-'0';
		}
		for(int i=0;i<size3;i++)
		{


		}
	}
	if(length==16)
	{
		for(int i=0; i<size4; i++)
		{
			sixteen_digit[i]=stringNumber[i]-'0';
		}
		for(int i=0;i<size4;i++)
		{
			sum += sixteen_digit[15-i];
			++i;
		}
	}
	return sum;
}

bool isValid(string stringNumber)
{
	int sum(0);
	sum =  sumOfDoubleEvenPlace(stringNumber)+sumofOddPlace(stringNumber);
	return (sum%10==0);
}

int main()
{
	myHeader("Stefan Peters", 06, "March 10th", 2);

	string type;
	char response;
	do
	{
		cout<<"\n\tPlease Enter a Credit Card Number: ";
		cin>>stringNumber;

		if(stringNumber[0]=='4')
			type = "VISA Card";
		if(stringNumber[0]=='5')
			type = "Master Card";
		if(stringNumber[0]=='3' && stringNumber[1]=='7')
			type = "American Express Card";
		if(stringNumber[0]=='6')
			type = "Discovery Card";

		if(isValid(stringNumber))
			cout<<"\n\tThis is a vaild "<<type<<'.';
		else cout<<"\n\tThis card is invaild";

		cout<<"\n\n\tWould you like to try another number? (y/Y) ";
		cin>>response;
	}while(response=='y'||response=='Y');

	return 0;
}
