#include<iostream>
#include<city.h>
using namespace std;
void city::setname(string x)
{
	name=x;
}
string city::getname()
{
	return name;
}
void city::print()
{
	cout<<"the name is"<<name;
}
