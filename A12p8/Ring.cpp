/*
CH-230-A
a12p8.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
#include <cmath>
#include "Ring.h"
using namespace std;

Ring::Ring(const char *n, double outer, double inner) 
					: Circle(n, outer) {
	innerradius = inner;
}

Ring::~Ring() {
}

double Ring::calcArea() const {
	std::cout << "calcArea of Ring..."<<endl;
	return (Circle::calcArea()-
		(innerradius * innerradius * M_PI));
}


double Ring::calcPerimeter() const {
	std::cout << "calc perimeter of Ring..."<<endl;
	return (Circle::calcPerimeter()-
		(innerradius * 2 * M_PI));
}
