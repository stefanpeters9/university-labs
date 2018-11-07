#include<iostream>
#include<string>
using namespace std; 
int main()
{
	//introduction and statement of the program's mission
	cout<<"******************************************************************************"<<endl;
	cout<<"     ES1036: Lab 02 Q2"<<endl<<"     Name: Stefan Peters"<<endl
		<<"     Student Number: 250725466"<<endl<<"     Email: speter68@uwo.ca"<<endl<<"     Section: 001"<<endl
		<<"     Program's Mission: This program is a quiz for the user. Enjoy. "<<endl;     
	cout<<"******************************************************************************"<<endl<<endl;
	
	//initialize variables 
	int score(0), guess(0);
	string answer, name;
	cout<<"   Input your first name: ";
	cin>>name;
	system("cls");

	//first question
	cout<<"\nWhich number is prime?\n\n   a) 9\n   b) 15\n   c) 17\n   d) 21\n\n   answer: ";
	cin>>answer;
	if(answer=="c"|| answer=="C"||answer=="17")
	{
		cout<<"		Correct!\n\n";
		score = score++;
	}
	else cout<<"		Nope! The correct answer is 17.\n\n";
	
	//second question 
	cout<<"\nHow many weeks are in a year?\n\n   a) 7\n   b) 69\n   c) 52\n   d) 104\n\n   answer: ";
	cin>>answer;
	if(answer=="c"||answer=="C"||answer=="52")
	{
		cout<<"		Correct!\n\n";
		score = score++;
	}
	else cout<<"		Nope! The correct answer is 52.\n\n";

	//third question
	cout<<"\nWhat planet is closest to earth?\n\n   a) mars\n   b) moon\n   c) venus\n   d) the sun\n\n   answer: ";
	cin>>answer;
	if(answer=="c"||answer=="C"||answer=="venus")
	{
		cout<<"		Correct!\n\n";
		score = score++;
	}
	else cout<<"		Nope! The correct answer is venus.\n\n";

	//fourth question
	cout<<"\nHow tall is the tallest tree?(in meters)\n\n   a) 117\n   b) 206\n   c) 1002\n   d) 37\n\n   answer: ";
	cin>>answer;
	if(answer=="a"||answer=="A"||answer=="117")
	{
		cout<<"		Correct!\n\n";
		score = score++;
	}
	else cout<<"		Nope! The correct answer is 117.\n\n";

	//fifth question
	cout<<"\nHow many words are in the bible?\n\n   a) 703\n   b) 789650\n   c) 10000000\n   d) 672431\n\n   answer: ";
	cin>>answer;
	if(answer=="b"||answer=="B"||answer=="789650")
	{
		cout<<"		Correct!\n\n";
		score = score++;
	}
	else cout<<"		Nope! The correct answer is 789650.\n\n";

	//sixth question
	cout<<"\nWhich animal has been cloned?\n\n   a) tiger\n   b) human\n   c) unicorn\n   d) wolf\n\n   answer: ";
	cin>>answer;
	if(answer=="d"||answer=="D"||answer=="wolf")
	{
		cout<<"		Correct!\n\n";
		score = score++;
	}
	else cout<<"		Nope! The correct answer is wolf.\n\n";

	//seventh question
	cout<<"\nWhich is the slowest?\n\n   a) turtle\n   b) snail\n   c) sloth\n   d) 7\n\n   answer: ";
	cin>>answer;
	if(answer=="b"||answer=="B"||answer=="snail")
	{
		cout<<"		Correct!\n\n";
		score = score++;
	}
	else cout<<"		Nope! The correct answer is snail.\n\n";

	//eighth question
	cout<<"\nWho invented computers?\n\n   a) Quazi\n   b) superman\n   c) engineer\n   d) garfield\n\n   answer: ";
	cin>>answer;
	if(answer=="c"||answer=="C"||answer=="engineer")
	{
		cout<<"		Correct!\n\n";
		score = score++;
	}
	else cout<<"		Nope! The correct answer is an engineer.\n\n";
	//ninth question
	cout<<"\nHow fast can Usain Bolt run?(km/h)\n\n   a) 50\n   b) cheetah\n   c) 37\n   d) 20\n\n   answer: ";
	cin>>answer;
	if(answer=="c"||answer=="C"||answer=="cheetah")
	{
		cout<<"		Correct!\n\n";
		score = score++;
	}
	else cout<<"		Nope! The correct answer is cheetah.\n\n";
	//tenth question
	cout<<"\nWhat is your score on this quiz?";
	cin>>guess;
	if(guess==score)
	{
		cout<<"		Correct!\n\n";
		score = score++;
	}
	else cout<<"		Nope!\n\n";
	//output score
	cout<<name<<" your final score is "<<score<<"/10.";
	if(score>=0 && score<=2) cout<<"	Nice try but better luck next time!";
	else if(score>=3 && score<=5) cout<<"	Alright!";
	else if(score>=6 && score<=8) cout<<"	Could be better!";
	else if(score>=9 && score<=10) cout<<"	Excellent!";
	cout<<"\n\n";

	return 0;
}
