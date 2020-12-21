/*
CH-230-A
a13 p2.cpp
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Complex.h"
using namespace std;
int main(int argc, char** argv)
{
	Complex c1,c2,c3;

	c1.getReal1();

	c2.getReal2();
	
	c3=c1+c2;
	cout<<"The sum is:\n"<<endl;
	c3.print();
	c3=c2-c1;
	cout<<"The difference is:\n"<<endl;
	c3.print();
	c3=c2*c1;
	cout<<"The product is:\n"<<endl;
	c3.print();
   /* ofstream main("ruki.txt");
	main<<c3;
	cout<<"file succesfully copied"<<endl;
	main.close();*/
	
		return 0;
}
