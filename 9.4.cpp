#include<iostream>
using namespace std;
int mycount (int x,int y)
{
	int m=(y-x);
	return m;
}
int mycount (char c,string s)
{
int counter=0;
for(int i=0;s[i]!='\0';i++)
	{
		if (s[i]=='c')
		{
			counter++;
		}
	}
	return counter;
		
}
int main()
{
	int x,y;
	char c;
	string s;
	cin>>x>>y;
	cin>>c;
	cin>>s;
	cout<<"the difference is "<< mycount(y,x) <<"and number od occurance is "<<mycount(c,s); 
	return 0;
}

