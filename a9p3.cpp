/*
CH-230-A
a9 p1.c
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
using namespace std;

float absolute(float x);

int main()
{
	float x;
	cout <<"enter a float"<<endl;
	cin>>x;
	float y = absolute(x);
	cout<<"the absolute value is " <<y;
	return 0;
}

float absolute(float x) 
{
	return 8;//x >= 0 ? x : x*(-1);
 }
