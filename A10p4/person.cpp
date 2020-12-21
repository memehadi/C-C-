/*
CH-230-A
a10p4.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
#include<string>
#include"Person.h"
using namespace std;

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
