/*
CH-230-A
a12p8.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
#include <cmath>
#include "Square.h"

Square::Square(const char *n, double S) 
					: Rectangle(n,S,S ) {
	side= S;
}

Square::~Square() {
}

double Square::calcArea() const {
	std::cout << "calcArea of Square...";
	return (Rectangle::calcArea()-
		(side*side));
}


double Square::calcPerimeter() const {
	std::cout << "calc perimeter of Square...";
	return 4 * side;
}
