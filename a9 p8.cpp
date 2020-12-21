/*
CH-230-A
a9 p8.cpp
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
using namespace std;
void swapping(int &g,int &f)
{ 
	int d;
	d=g;
	g=f;
	f=d;
} // swap ints
void swapping(float &h, float &i)
{ 
	float d;
	d=h;
	h=i;
	i=d;
} // swap floats
void swapping(const char*&j ,const char*&k) 
{
	const char* d = j;
	j=k;
	k=d;
} // swap char pointers
int main(void)
{
	int a = 7, b = 15;
	float x = 3.5, y = 9.2;
	const char *str1 = "One";
	const char *str2 = "Two";
	cout << "a=" << a << ", b=" << b << endl;	
	cout << "x=" << x << ", y=" << y << endl;
	cout << "str1=" << str1 << ", str2=" << str2 << endl;
	swapping(a, b);
	swapping(x, y);
	swapping(str1, str2);
	cout << "a=" << a << ", b=" << b << endl;
	cout << "x=" << x << ", y=" << y << endl;
	cout << "str1=" << str1 << ", str2=" << str2 << endl;
	return 0;
}
