/*
CH-230-A
a9 p6.c
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
using namespace std;
#include<cstdlib>
#include<ctime>
int main()
{
   int x,guess,i;
	char name[50];
	string str;
	cout<<"Enter your name"<<endl;
	cin>>name;
	musab:
	srand(time(0));
	x=1+(rand()%100);
	cout<<"Enter your guess"<<endl;
	for (i=0;i<5;i++)
	{
		cin>>guess;
		if (guess==x)
		{
			cout<<"Congratulations"<<endl;
			cout<<"Do you want to play again? Enter yes or no"<<endl;
			cin>>str;
			if (str=="yes")
				goto musab;
			else
				break;
		}
		if (guess>x)
		{
			cout<<"too high"<<endl;
			cout<<"Enter your guess again"<<endl;
		}
		if (guess<x)
		{
			cout<<"too low"<<endl;
			cout<<"Enter your guess again"<<endl;	
		}
	}
	
return 0;
	
}
