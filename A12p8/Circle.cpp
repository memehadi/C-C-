/*
CH-230-A
a12p8.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
#include <cmath>
#include "Circle.h"
using namespace std;

Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
}

Circle::~Circle() {
}

double Circle::calcArea() const {
	std::cout << "calcArea of Circle..."<<endl;;
	return radius * radius * M_PI;
}

double Circle::calcPerimeter() const {
	std::cout << "calc Perimeter of Circle..."<<endl;
	return radius * 2 * M_PI;
}

