/*
CH-230-A
a12p8.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
	std::cout << "calcArea of Rectangle..."<<endl;
	return length*width;
}

double Rectangle::calcPerimeter() const {
	std::cout << "calc perimeter of Rectangle..."<<endl;
	return (length+width)*2;
}
