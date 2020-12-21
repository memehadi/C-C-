/*
CH-230-A
a9 p7.cpp
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
using namespace std;
int myfirst(int intigers[]);
double myfirst(double intigers[]);
char myfirst(char  intigers[]);
int main()
{
	int intigers[]={-3,8,9,7};
	double doubles[]={4.2,5.6,8,87,-12};
	char characters[]="doife";
	cout<<myfirst(intigers)<<endl;
	cout<<myfirst(doubles)<<endl;
	cout<<myfirst(characters)<<endl;
	return 0;
}
int myfirst(int intigers[])
{
	for(int i=0;i<5;i++)
	{
		if (intigers[i]>0 && intigers[i]%2==0)
		{
			return intigers[i];
		}
	}
	return -1;
}

double myfirst(double doubles[])
{
	for(int i=0;i<5;i++)
	{
 		if (doubles[i]<0 && (int)doubles[i]==doubles[i])
		{
			return doubles[i];
		}
	}
	return -1.1;
}

char myfirst( char characters[])
{
	for(int i=0;i<5;i++)
	{
		if (characters[i]!=('a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U'))
		{
				return characters[i];
		}
	}
	return '0';
}	


