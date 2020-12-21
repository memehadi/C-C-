/*
CH-230-A
a11 p7.cpp
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
#include <string>
#include<cmath>
using namespace std;
class Vector
{
	private:
		int size;
		double *ptr;
	public:
		Vector();
		Vector(int);
		Vector(const Vector &);
		void setsize (int);
		int getsize();
		
		double getvectors(); 
		void print();
		double norm();
	  Vector add(const Vector) const;
	Vector sub(const Vector) const;	
	Vector mul(const Vector) const;
};
