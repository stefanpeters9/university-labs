#include<iostream>
#include<string>
using namespace std;
void myHeader(string name, int lab, string date, int question)
{
	cout<<"************************************************************\n	"<<name<<"\n	Lab #"<<lab<<"  "<<date<<"  Question #"<<question<<"\n************************************************************\n";
}
int main()
{
	myHeader("Stefan Peters", 05, "March 9th",2 );
	int counter(0);
	for(int d=0;d<=9;d++)
	{
		for(int d0=0;d0<=9;d0++)
		{
			for(int d1=0;d1<=9;d1++)
			{
				for(int d2=0;d2<=9;d2++)
				{
					for(int d3=0;d3<=9;d3++)
					{
						if(d==0)
						{
							if(d0==0)
							{
								if(d1==0)
								{
									if(d2==0)
									{
										counter=0;
										for(int n=2;n<=d3;n++)
										{

											if(d3%n==0)
												counter++;

										}
										if(counter==1)
											cout<<d3<<"\t";
									}
									if(d2==d3)
									{
										counter=0;
										int number= d2*10+d3;
										for(int n=2;n<=number;n++)
										{
											if(number%n==0)
												counter++;
										}
										if(counter==1)
											cout<<number<<"\t";
									}
								}
								if(d1==d3)
								{
									counter=0;
									int number=d1*100+d2*10+d3;
									for(int n=2;n<=number;n++)
									{
										if(number%n==0)
											counter++;
									}
									if(counter==1)
										cout<<number<<"\t";
								}

							}
							counter=0;
							if(d0==d3 && d1==d2)
							{
								int number=d0*1000+d1*100+d2*10+d3;
								for(int n=2;n<=number;n++)
								{
									if(number%n==0)
										counter++;
								}
								if(counter==1)
									cout<<number<<"\t";
							}
						}
						counter=0;
						if(d==d3 && d0==d2)
						{
							int number=d*10000+d0*1000+d1*100+d2*10+d3;
							for(int n=2;n<=number;n++)
							{
								if(number%n==0)
									counter++;
							}
							if(counter==1)
								cout<<number<<"\t";
						}
					}
				}
			}
		}
	}
	return 0;
}