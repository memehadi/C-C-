#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	sstring c;
	while(1)
	{
		cin>>s;
		if(strcmp(s,"quit")==0)
		{
			break;
		}
		strcat(c,s);
	}
	for(int i=0;i<strlen(c);i++)
	{
			cout<<c[i];
	}
	

	return 0;
}
