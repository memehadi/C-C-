/*
CH-230-x
a12p6.z++
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
  Fraction x , y , z;
	cout<<"enter the first fraction : ";
	cin>>x;
	cout<<endl;
	cout<<"enter the second fraction : ";
	cin>>y;
	cout<<endl;
	 z = x*y;
  cout<<"fraction1*fraction2 = "<<z<<endl;
  z = x/y;
  cout<<"fraction1/fraction2 = "<<z<<endl;
}
