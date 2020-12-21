/*
CH-230-A
a12p8.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/
#ifndef _SQUARE_H
#define _SQUARER_H
#include "Rectangle.h"

class Square : public Rectangle {
	public:
		Square(const char *n, double side);
		~Square();
		double calcArea() const;
		double calcPerimeter() const;
	private:
		double side;
};

#endif
