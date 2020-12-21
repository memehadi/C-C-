/* 
CH-230-A
a11p2.c++
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
		person Sara;/*empty constructor is used*/
		
         Sara.print();
	} 
	
	else if (choice=="Rob")	
	{
		person Rob("Rob",34,85,"Physics");/*parametric constructor being employed*/
		 Rob.print();
	}
else if (choice=="Nusra")	/*using copy constructors*/
	{person Sara;
		person Nusra(Sara);	
	Nusra.print();
	}
else{
	
		cout<<"Please read the instructions again"<<endl;
	 }

	return 0;
}
 
