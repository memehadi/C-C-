/*
CH-230-A
a12p8.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/
#ifndef _SAUARE_H
#define _SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle {
	public:
		Square(const char *n, double outer, double side);
		~Square();
		double calcArea() const;
		double calcPerimeter() const;
	private:
		double side;
};

#endif
