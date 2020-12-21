#include<iostream>
using namespace std;
double myfirst(double x[])
{
	
	for(int i=0;x[i]!='\0';i++)
{
	int y=(int)x[i];
	if((x[i]<0)&&(x[i]=y))
	{ 
		return x[i];
	}
}
	return -1;

}
double myfirst(int x[])
{
	for(int i=0;x[i]!='\0';i++)
{
	if((x[i]>0)&&(x[i]%2==0))
	{
		return x[i];
	}
}
	return -1.1;

}

char myfirst(string x)
{
	for(int i=0;x[i]!='\0';i++)
{
	if((x[i]!='a')&&(x[i]!='u')&&(x[i]!='o')&&(x[i]!='i')&&(x[i]!='e'))
	{
		return x[i];
	}
}
	return 'o';

}
int main()
{
	string s="erfdv";
	double array[6]={3,4,7.5,-8,3};
	cout<<myfirst(array);
	cout<<myfirst(s);
	return 0;
	
}
