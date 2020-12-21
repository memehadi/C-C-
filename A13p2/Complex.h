/*
CH-230-A
a13 p2.cpp
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <string>
#include <fstream>
using namespace std;
class Complex
{
	//real and imaginary part
private:
	int real;
	int imag;
public: 

	void getReal1();
	void getReal2();
	void  getImag();
	//adding
	Complex operator+(Complex);
	Complex operator -(Complex);
	Complex operator*(Complex);
	void print();
};

