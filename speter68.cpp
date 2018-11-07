/*	Stefan Peters
	250725466
	section 004
	speter68@uwo.ca
*/ 


#include<iostream>
#include<cmath> // ask TA why 

using namespace std;

int main()
{
	//declare and initialize variables
	double x1 = 1, y1(5), x2(4), y2 = 7,
		side1 = 0, side2 = 0, distance = 0;

	//compute the sides of the triangle 
	side1 = x2 - x1;
	side2 = y2 - y1;

	//calculate distance
	distance = sqrt(side1*side1 + pow(side2,2.0));

	//print the distance
	cout<<"The distance between points ("<<x1<<','<<y1
		<<") and ("<<x2<<','<<y2<<") is "<<distance<<endl;
	return 0;	//indicate that the program ended successfully

}	//end fuction main