#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

void myHeader(string name, int lab, string date, int question)
{
	cout<<setw(85)<<setfill('^');
	cout<<"\n\tName: "<<name<<"\n\tLab #: "<<lab<<"\n\t"<<date<<"\n\tQuestion: "<<question;
	cout<<endl<<setw(105)<<setfill('^');
}

void sumfunc(int pointer[],int &size,int *psum)
{
	int *psize;
	psize=&size;
	for(int i=0; i<*psize;i++)
		*psum += pointer[i];
}

void averagefunc(int pointer[],int &size, double *paverage)
{
	int *psize;
	psize=&size;
	int total(0),counter(0);
	for(int i=0; i<*psize;i++)
	{
		total += pointer[i];
		counter++;
	}
	*paverage=(double)total/counter;
}

void multiplyfunc(int pointer[],int &size,int value)
{
	int *psize;
	psize=&size;
	for(int i=0; i<*psize;i++)
		pointer[i]=pointer[i]*value;
}

void reversefunc(int pointer[],int size)
{
	for(int i=0;i<size;i++)
		pointer[i]=pointer[size-(i+1)];
}

void printfunc(int &pointer,int size)
{
	int *ptr;
	ptr=&pointer;
	cout<<endl<<'[';
	for(int i=0; i<size; i++)
		cout<<" "<<ptr[i];
	cout<<']';
}

void populatefunc(int pointer[], int size, int &multiple)
{
	for(int i=0; i<size; i++)
		pointer[i]=(i+1)*multiple;
}

int main()
{ 
	myHeader("Stefan Peters", 8, "March 25th", 1);

	int sum(0),size(0), multiple(0), value(0), exit(0);
	double average(0);

	cout<<"\n\nEnter the size of the array: ";
	cin>>size;
	cout<<"\nEnter a multiple for the array: ";
	cin>>multiple;

	int *pointer = new int [size];
	int *psum, *pmultiple;
	double *paverage;
	psum = &sum;
	paverage = &average;
	pmultiple=&multiple;

	for(int i=0; i<size;i++)
		pointer[i] = multiple*(i+1);
	cout<<"\n[" ;
	for(int i=0; i<size; i++)
		cout<<pointer[i]<<" ";
	cout<<"]\n";

	do
	{
		int choice(0);

		cout<<"\n\n1. Sum all values in the array\n"
			<<"2. Find the average of all the numbers in the array\n"
			<<"3. Multiply the array by a number\n"
			<<"4. Reverse the array\n"
			<<"5. Print the array\n"
			<<"6. Populate the array\n"
			<<"7. Exit\n\n"
			<<"\tEnter Choice:";
		cin>>choice;

		switch(choice)
		{
		case 1:
			sumfunc(pointer,size,psum);
			cout<<"\n\nThe sum of the values in the array is "<<*psum<<endl;
			break;
		case 2:
			averagefunc(pointer,size,paverage);
			cout<<"\n\nThe average of the values in the array is "<<*paverage<<endl;
			break;
		case 3:
			cout<<"\n\nEnter the number to multiply by: ";
			cin>>value;
			multiplyfunc(pointer,size,value);
			cout<<"Done.";
			break;
		case 4:
			reversefunc(pointer,size);
			cout<<"\nDone.";
			break;
		case 5:
			printfunc(pointer[0],size);
			break;
		case 6:
			cout<<"\n\nEnter the size of the array: ";
			cin>>size;
			cout<<"\nEnter a multiple for the array: ";
			cin>>multiple;
			populatefunc(pointer,size,pmultiple[0]);
			break;
		case 7:
			exit++;
			break;
		default:
			cout<<"\nInvalid Entry";
		}

	}while(exit==0);

	delete [] pointer;
	cout<<"\n\nDynamic array released!\ngoodbye\n\n";

	return 0;
}
