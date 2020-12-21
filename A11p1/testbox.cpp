#include<iostream>
#include"box.h"
#include <string>
using namespace std;
int main()
{
	int n;
	double length;
	cout<<"enter the number of boxes"<<endl;
	cin>>n;
	Box *b;
	b=new Box[n];
	/*Box *c;
	c=new Box[n];*/
	for(int i=0;i<n;i++)
	{
		cout<<"enter the length of boxes"<<endl;
		cin>>length;
		b[i].setlength(length);
		b[i].getlength();
      	
	/*	c[i](b[i]);*/
	}
	 Box c(b);
	for(int i=0;i<n;i++){
	
	b[i].print();
	c[i].print();
	}
	return 0;
	
}

