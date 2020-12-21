/*CH-23 0-A
a9 p1.c
Musab Mehadi
mmehadi@jacobs-university.de
*/

#include <iostream>
#include <cstring>

using namespace std;

int mycount(int a, int b);
int mycount(char letter, char string[] );

int main()
{
	char string[80];
	char letter;
	int a,b;
	cout<<"enter a string, a letter and two intigers"<<endl;
	cin>>string;
	cin>>letter;
	cin >> a >>b;
	cout<< mycount(a,b) << endl;
	cout<< mycount(letter,string) << endl;
	return 0;	
}

int mycount(int a,int b)
{
	  int difference=(b-a);
	  return difference;
}

int mycount(char letter,char string[] )
{
	int c=0;
	unsigned int i;
	
	for(i=0;i< strlen(string);i++)
	{
		if(string[i]==letter)
		{
			c=c+1;
		}
	}
	return c;
}

