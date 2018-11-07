#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int salesArray[4][6]= {{1},{2},{3},{4}};

void salesInfo()
{
	int IDnumber;
	cout<<"\n\tEnter Sales ID Number: ";
	cin>>IDnumber;

	cout<<"\n\nEnter Sales data for Monday: ";
	cin>>salesArray[IDnumber-1][1];
	cout<<"\nEnter Sales data for Tuesday: ";
	cin>>salesArray[IDnumber-1][2];
	cout<<"\nEnter Sales data for Wednesday: ";
	cin>>salesArray[IDnumber-1][3];
	cout<<"\nEnter Sales data for Thursday: ";
	cin>>salesArray[IDnumber-1][4];
	cout<<"\nEnter Sales data for Friday ";
	cin>>salesArray[IDnumber-1][5];
}
void displaySales()
{
	cout<<"\n\nSalesID\tMon\tTues\tWed\tThurs\tFri\n";
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<6;j++)
		{
			cout<<salesArray[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
}
void salesForDay()
{ 
	int sum(0);
	string day;
	cout<<"\n\tEnter Day: ";
	cin>>day;
	for(int i=0;day[i]!='\0';i++)
	{
		day[i]=tolower(day[i]); 
	}

	switch(day[1])
	{
	case 'o':
		{
			for(int i=0; i<4; i++)
			{
				sum += salesArray[i][1];
			}
			break;
		}
	case 'u':
		{
			for(int i=0; i<4; i++)
			{
				sum += salesArray[i][2];
			}
			break;
		}
	case 'e':
		{
			for(int i=0; i<4; i++)
			{
				sum += salesArray[i][3];
			}
			break;
		}
	case 'h':
		{
			for(int i=0; i<4; i++)
			{
				sum += salesArray[i][4];
			}
			break;
		}
	case 'r':
		{
			for(int i=0; i<4; i++)
			{
				sum += salesArray[i][5];
			}
			break;
		}
	default:
		;
	}
	cout<<"\n\nSales = "<<sum<<endl;
}
void salesForPerson()
{
	int id(0), sum(0);
	cout<<"\n\n\tEnter Sales ID: ";
	cin>>id;
	id -= 1;

	switch(id)
	{
	case 0:
		{
			for(int i=1; i<6; i++)
			{
				sum += salesArray[0][i];
			}
			break;
		}
	case 1:
		{
			for(int i=1; i<6; i++)
			{
				sum += salesArray[1][i];
			}
			break;
		}
	case 2:
		{
			for(int i=1; i<6; i++)
			{
				sum += salesArray[2][i];
			}
			break;
		}
	case 3:
		{
			for(int i=1; i<6; i++)
			{
				sum += salesArray[3][i];
			}
			break;
		}
	default:
		cout<<"\nInvaild Entry\n";
	}
	cout<<"\nSales = "<<sum;
}
void maxSales()
{
	int max(0);
	for(int i=0;i<4;i++)
	{
		for(int j=1;j<6;j++)
		{
			if(salesArray[i][j]>max)
				max = salesArray[i][j];
		}
	}
	cout<<"\n\nMax Sales = "<<max;
}
void minSales()
{
	int min(100);
	for(int i=0;i<4;i++)
	{
		for(int j=1;j<6;j++)
		{
			if(salesArray[i][j]<min)
				min = salesArray[i][j];
		}
	}
	cout<<"\n\nMin Sales = "<<min;
}
void totalSales()
{
	int sum(0);
	for(int i=0;i<4;i++)
	{
		for(int j=1;j<6;j++)
		{
			sum += salesArray[i][j];
		}
	}
	cout<<"\n\nTotal Sales = "<<sum;
}
void myHeader(string name, int lab, string date, int question)
{
	cout<<setw(85)<<setfill('^');
	cout<<"\n\tName: "<<name<<"\n\tLab #: "<<lab<<"\n\t"<<date<<"\n\tQuestion: "<<question;
	cout<<endl<<setw(106)<<setfill('^');
}

int main()
{
	myHeader("Stefan Peters", 07, "March 19th", 1);
	int choice, exit(0);

	do
	{
		cout<<"\n\n1. Input sales information\n"
			<<"2. Display table of sales information\n"
			<<"3. Print the total number of sales for a given day for all salespeople\n"
			<<"4. Print the total number of sales for a given person within a week\n"
			<<"5. Print the max number of sales recorded\n"
			<<"6. Print the min number of sales recorded\n"
			<<"7. Print the overall number of sales for the entire week\n"
			<<"8. Exit\n\n"
			<<"\tEnter Choice:";
		cin>>choice;

		switch(choice)
		{
		case 1:
			salesInfo();
			break;
		case 2:
			displaySales();
			break;
		case 3:
			salesForDay();
			break;
		case 4:
			salesForPerson();
			break;
		case 5:
			maxSales();
			break;
		case 6:
			minSales();
			break;
		case 7:
			totalSales();
			break;
		case 8:
			exit++;
			break;
		default:
			cout<<"\nInvalid Entry";
		}

	}while(exit==0);

	return 0;
}