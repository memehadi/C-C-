#include <iostream>
#include <string>
using namespace std;
class Box
{
	public:
		double length;
	public:
		Box();
		Box(&old);
		Box( double );
		void setlength(double);
	    double getlength();
		void print();	
			
};
