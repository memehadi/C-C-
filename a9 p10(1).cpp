/*
CH-230-A
a9 p10.cpp
Michael Demse
mdemse@jacobs-university.de
*/
#include <iostream>
# include <cstdlib>
# include <ctime>
using namespace std;
int main()
{
	char c;
	string guess;
	string str []={"computer", "television","keyboard", "laptop", "mouse",
	"book","charger","bag","john","door",
	"cup","jacket","shirt","hoodie","table",
	"chair","car"};
	here:
	srand ( static_cast < unsigned int >( time (0)));
	int	randomNumber = rand ();
	int x = ( randomNumber % 17) + 1;
	for (unsigned int i=0; i<str[x].size(); i++)
		if (str[x][i]=='a' || str[x][i]=='e' || str[x][i]=='i' || 
		    str[x][i]=='o' || str[x][i]=='u'||
			str[x][i]=='A' || str[x][i]=='E' || str[x][i]=='I' || 
			str[x][i]=='O' || str[x][i]=='U')
			cout<<"_";
		else
			cout<<str[x][i];
	cout<<endl;
	while (1)
	{
		cin>>guess;
		if (guess=="quit")
			break;
	if (guess==str[x])
	{
		cout<<"Correct, play again? Enter y for Yes n for No"<<endl;
		cin>>c;
		if (c=='y')
			goto here; 
		else
			break;	
	}	
	else
		cout<<"Wrong answer, try again..."<<endl; 
	}
	cout<<"Bye!";
	return 0;
}
