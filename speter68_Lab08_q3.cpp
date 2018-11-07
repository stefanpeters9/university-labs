#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

void myHeader(string name, int lab, string date, int question)
{
	cout<<setw(85)<<setfill('^');
	cout<<"\n\tName: "<<name<<"\n\tLab #: "<<lab<<"\n\t"<<date<<"\n\tQuestion: "<<question;
	cout<<endl<<setw(125)<<setfill('^');
}
struct Employee
{
	string firstname;
	string lastname;
	int id;
	int salary;
};
void dataEntry(Employee pointer[], int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<"\n\nEnter the first name for employee "<<i+1<<": ";
		cin>>pointer[i].firstname;
		cout<<"Enter the last name for employee "<<i+1<<": ";
		cin>>pointer[i].lastname;
		while(1)
		{
		cout<<"Enter the ID for employee "<<i+1<<": ";
		cin>>pointer[i].id;
		if(!((pointer[i].id)>=10000 && (pointer[i].id)<100000)) cout<<"Invaild ID\n";
		else break;
		}
		while(1)
		{
		cout<<"Enter the salary for employee "<<i+1<<": ";
		cin>>pointer[i].salary;
		if(pointer[i].salary<0)cout<<"Invalid Salary\n";
		else break;
		}
	}
	cout<<"\nDatabase has been created";
}
void Bysalary(Employee pointer[], int size)
{
	Employee temp;
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			if(pointer[j].salary<pointer[i].salary)
				{
					temp=pointer[i];
					pointer[i]=pointer[j];
					pointer[j]=temp;
				}
		}
	}
}
void Bylastname(Employee pointer[], int size)
{
	Employee temp;
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			if((pointer[j].lastname)[0]>(pointer[i].lastname)[0])
				{
					temp=pointer[i];
					pointer[i]=pointer[j];
					pointer[j]=temp;
				}
		}
	}
}
double averageSalary(Employee pointer[], int size)
{
	double total(0);
	for(int i=0; i<size; i++)
	{
		total += pointer[i].salary;
	}
	return (total/size);
}
void searchID(Employee pointer[], int size, int ID)
{
	int counter(0);
	for(int i=0; i<size; i++)
	{
		if(ID==pointer[i].id)
		{
			counter++;
			cout<<"\nEmployee List:\n\nFirst Name\tLast Name\tID\tSalary"
				<<"\n------------------------------------------------------\n"
				<<pointer[i].firstname<<"\t\t"
				<<pointer[i].lastname<<"\t\t"
				<<pointer[i].id<<"\t"
				<<pointer[i].salary<<"\n\n";
		}
	}
	if(counter==0)cout<<"\nNot found\n";
}
void searchFirstname(Employee pointer[], int size, string firstname)
{
	int counter(0);
	for(int i=0; i<size; i++)
	{
		if(firstname==pointer[i].firstname)
		{
			counter++;
			cout<<"\nEmployee List:\n\nFirst Name\tLast Name\tID\tSalary"
				<<"\n------------------------------------------------------\n"
				<<pointer[i].firstname<<"\t\t"
				<<pointer[i].lastname<<"\t\t"
				<<pointer[i].id<<"\t"
				<<pointer[i].salary<<"\n\n";
		}
	}
	if(counter==0)cout<<"\nNot found\n";
}
void betweenSalary(Employee &pointer, int size, int salary_low, int salary_high)
{
	int counter(0);
	Employee *ptr=&pointer;
	for(int i=0; i<size; i++)
	{
		if(ptr[i].salary<=salary_high && ptr[i].salary>=salary_low)
			counter++;
	}
	if(counter)
	{
	cout<<"\nEmployee List:\n\nFirst Name\tLast Name\tID\tSalary";
	cout<<"\n------------------------------------------------------\n";
	for(int i=0; i<size; i++)
	{
		if(ptr[i].salary<=salary_high && ptr[i].salary>=salary_low)
		{
			cout<<ptr[i].firstname<<"\t\t"
			<<ptr[i].lastname<<"\t\t"
			<<ptr[i].id<<"\t"
			<<ptr[i].salary<<"\n\n";
		}
	}
	}
	else cout<<"\nNot found\n";
}
void print(Employee *pointer, int size)
{
	cout<<"\nEmployee List:\n\nFirst Name\tLast Name\tID\tSalary";
	cout<<"\n------------------------------------------------------\n";
	for(int i=0; i<size; i++)
	{
		cout<<pointer[i].firstname<<"\t\t"
			<<pointer[i].lastname<<"\t\t"
			<<pointer[i].id<<"\t"
			<<pointer[i].salary<<"\n\n";
	}
}
int main()
{
	myHeader("Stefan Peters", 8, "March 28th", 3);

	string first;
	int size(0),exit(0),id(0), salary_low, salary_high;
	cout<<"\n\nEnter the number of employees in the database: ";
	cin>>size;
	cout<<"\n\nCreating the database...";
	
	Employee *pointer= new Employee[size];
	dataEntry(pointer, size);

	char choice(0);

	while(1)
	{
		cout<<"\n\n-----------------------------------------------------\n"
			<<"a. Sort by salary\n"
			<<"b. Sort by last name\n"
			<<"c. Find the average salary\n"
			<<"d. Search by ID\n"
			<<"e. Search by first name\n"
			<<"f. Search by salary range\n"
			<<"g. Print database\n"
			<<"h. Exit\n"
			<<"\n\tEnter Choice: ";
		cin>>choice;
		choice = tolower(choice);

		switch(choice)
		{
		case 'a':
			Bysalary(pointer,size);
			cout<<"The database has been sorted\n";
			break;
		case 'b':
			{
			Bylastname(pointer,size);
			cout<<"The database has been sorted\n";
			break;
			}
		case 'c':
			cout<<"The average salary is: "<<averageSalary(pointer,size);
			break;
		case 'd':
			cout<<"Enter the ID you are searching: ";
			cin>>id;
			searchID(pointer,size,id);
			break;
		case 'e':
			cout<<"Enter the person you are searching: ";
			cin>>first;
			searchFirstname(pointer,size,first);
			break;
		case 'f':
			cout<<"Enter lowest salary: ";
			cin>>salary_low;
			cout<<"Enter highest salary: ";
			cin>>salary_high;
			betweenSalary(pointer[0],size,salary_low,salary_high);
			break;
		case 'g':
			print(pointer,size);
			break;
		case 'h':
			exit++;
			break;
		default:
			cout<<"\nInvalid Entry";
		}
		if(exit)break;
	}
	delete [] pointer; 
	cout<<"\n\n\tDynamic array has been released. Goodbye.\n\n\n\n";
	return 0;
}

