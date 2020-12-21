/*
CH-230-A
a10p4.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
#include<string>
#include "Person.h"
using namespace std;

int main() 
{
	string choice;
	cout<<"choose the  person you want (Sara,Rob,Nusra)"<<endl;
	cin>>choice;
if (choice=="Sara")	
	{
		person Sara;
		Sara.setage(19);
		Sara.setname("Sara");
		Sara.setweight(65);
		Sara.setmajor("Psychology");
		cout<<"Her name is "<<Sara.getname()<<endl;
		cout<<"She is "<<Sara.getage()<<" years old"<<endl;
		cout<<"Sara weights "<<Sara.getweight()<<"kg and majors in "<<Sara.getmajor()<<endl;	cin>>choice;

	}
	
	else if (choice=="Rob")	
	{
		person Rob;
		Rob.setage(34);
		Rob.setname("Rob");
		Rob.setweight(85);
		Rob.setmajor("Physics");
		cout<<"His name is "<<Rob.getname()<<endl;
		cout<<"He is "<<Rob.getage()<<" years old"<<endl;
		cout<<"Rob weights "<<Rob.getweight()<<"kg and majors in "<<Rob.getmajor()<<endl;
	}
else if (choice=="Nusra")	
	{
		person Nusra;
		Nusra.setage(22);
		Nusra.setname("Nusra");
		Nusra.setweight(75);
		Nusra.setmajor("IBA");
		cout<<"Her name is "<<Nusra.getname()<<endl;
		cout<<"She is "<<Nusra.getage()<<" years old"<<endl;
		cout<<"Nusra weights "<<Nusra.getweight()<<"kg and majors in "<<Nusra.getmajor()<<endl;	
	}
else{
	
		cout<<"Please read the instructions again"<<endl;
	 }

	return 0;
}
