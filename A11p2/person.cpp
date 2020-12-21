/*
CH-230-A
a11P2.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
#include<string>
#include"Person.h"
using namespace std;
#include <string>
person::person()
{ setage(19);
  setname("Sara");
  setweight(65);
  setmajor("psychology");
	
}
person::person(string n,int a,float w,string m)
{
	name=n;
	age=a; 
	weight=w;
	major=m;
}
person ::person(person &x)
{
	name=x.name;
	age=x.age;
	weight=x.weight;
	major=x.major;
	
}
   void person:: setage(int x)
   	{
		age=x;
	}
  int person::getage()
	{
		return age;	
	}
	void person:: setname(string x)
   	{
		name=x;
	}
  string person::getname()
	{
		return name;	
	}
	 void person:: setweight(float x)
   	{
		weight=x;
	}
  float person::getweight()
	{
		return weight;	
	}
	
	void person:: setmajor(string x)
   	{
		major=x;
	}
  string person::getmajor()
	{
		return major;
	}
	void person::print()
	{
		cout<<"the name is "<<name<<endl<<"age= "<<age<<endl<<"weight= "<<weight<<endl<<"major "<<major<<endl;
	}
