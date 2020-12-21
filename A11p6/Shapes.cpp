
/*
CH-230-A
a11p6.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"

using namespace std; 

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}
/*void CenteredShape:: move(double, double);*/
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}
void RegularPolygon:: printEdges(){
	cout<<"the number of edges are "<<EdgesNumber<<endl;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
} 

	

void Circle:: printRadius(){
cout<<"the radius is " <<Radius<<endl;	
}
double Circle::perimeter()
{
	return Radius*2*3.14;
}
double Circle::area()
{
	return Radius*Radius*3.14;
}
void Circle:: printperimeter() 
	{
		cout<<"the perimeter is "<<perimeter()<<endl;
		
	}
void Circle:: printarea()
{
	cout<<"the area is "<<area()<<endl;
	
}

Rectangle::Rectangle(const string& n, double nx, double ny, int nl,double n2,double n4) :
	RegularPolygon(n,nx,ny,nl) 
{
	length = n2;
	width=n4;
}
	
	
void Rectangle::printDimensions() {
	cout<<"the length is "<<length<<" and the width is "<<width<<endl;
}
double Rectangle::perimeter()
{
	return 2*(length+width);
}
double Rectangle::area()
{
	return length*width;
}
void Rectangle:: printperimeter() 
	{
		cout<<"the perimeter is "<<perimeter()<<endl;
		
	}
void Rectangle:: printarea()
{
	cout<<"the area is "<<area()<<endl;
	
}

Square::Square(const string& n, double nx, double ny, int nl,double n2,double n4,double n3) :
	Rectangle(n,nx,ny,nl,n2,n4) 
{
	side=n3;
}
void Square::printSide() {
	cout<<"each side of the square has a size of   "<<side<<endl;
}
double Square::perimeter()
{
	return 4*(side);
}
double Square::area()
{
	return side*side;
}
void Square:: printperimeter() 
	{
		cout<<"the perimeter is "<<perimeter()<<endl;
		
	}
void Square:: printarea()
{
	cout<<"the area is "<<area()<<endl;
	
}
