/*
CH-230-A
a11p6.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/
/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
using namespace std;
class Shape {			// base class
	private:   				// private access modifier: could also be protected
		string name;   // every shape will have a name
	public:
		Shape(const string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
		void printEdges();  
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const string&, double, double, double);
		Circle();
		Circle(const Circle&);
		double perimeter();
		double area();
		void printRadius();
		void printperimeter();
		void printarea();
};
class Rectangle: public RegularPolygon{
	private:
		double length;
		double width;
		
	public:
		Rectangle(const string&, double, double, int,double,double);
		Rectangle();
		Rectangle(const Rectangle&);
		double perimeter();
		double area();
		void printDimensions();
		void printperimeter();
		void printarea();
};	

class Square: public Rectangle{
	private:
		double side;
		
	public:
		Square(const string&, double, double, int,double,double,double);
		Square();
		Square(const Square&);
		double perimeter();
		double area();
		void printSide();
		void printperimeter();
		void printarea();
		
}; 

    
#endif
