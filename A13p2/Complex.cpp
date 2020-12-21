/*
CH-230-A
a13 p2.cpp
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
#include <fstream>
#include "Complex.h"
using namespace std;

void Complex::getReal1()
 {
	//t real2,imag2;
	ifstream muss("in1.txt");
while(muss>>real>>imag)
{
	
	cout<<"the first complex number is  "<<real<<"+"<<imag<<"i"<<endl;
	
}
	muss.close();
}
void Complex::getReal2(){
	ifstream nusi("in2.txt");
while(nusi>>real>>imag)
{
	cout<<"the second complex number is  "<<real<<"+"<<imag<<"i"<<endl;
	
}
	nusi.close();
	
}


Complex Complex::operator +(Complex c2)
{
	Complex c3;
	c3.real=c2.real+real;
	c3.imag=c2.imag+imag;
	return c3;
}
void Complex:: print()
{
cout<<real<<"+"<<imag<<"i"<<endl;	
}

Complex Complex::operator -(Complex c2)
{
	Complex c3;
	c3.real=c2.real-real;
	c3.imag=c2.imag-imag;
	return c3;
}

Complex Complex::operator*(Complex c2)
{
	Complex c3;
	c3.real=(real*c2.real)-(imag*c2.imag);
	c3.imag=(imag*c2.real)-(real*c2.imag);
	return c3;
} 

