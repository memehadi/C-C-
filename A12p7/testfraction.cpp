/*
CH-230-x
a12p7.z++
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
	Fraction x , y , z;
	cout<<"enter the first fraction "<<endl;
	cin>>x;
	cout<<"enter the second fraction "<<endl;
	cin>>y;
	z = x+y;
	cout<<z<<endl;
  z = x-y;
  cout<<z<<endl;
  z = x*y;
  cout<<z<<endl;
  z = x/y;
  cout<<z<<endl;
  cout<<(x>y)<<endl;
}
