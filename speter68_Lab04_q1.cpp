#include<iostream>
#include<string>
using namespace std;
void myHeader(string name, int lab, string date, int question)
{
	cout<<"************************************************************\n	"<<name<<"\n	Lab #"<<lab<<"  "<<date<<"  Question #"<<question<<"\n************************************************************\n";
}
int main()
{
	myHeader("Stefan Peters", 04, "February 25th",1 );
	return 0;
}