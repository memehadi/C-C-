#include <iostream>
using namespace std;
int main()
{
/*	int n;
	cin>>n;*/
	char*p=new char[4];
/*	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}*/
	p="rtyu";
	
	for(int i=0;p[i]!='\0';i++)
	{
		cout<<p[i];
	}
		delete [] p;
}
