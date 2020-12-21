/* Musab Mehadi
mmehadi@jacobs-university.de
A12p1*/

#include <iostream>
#include "Shapes.h"
#include <string>
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

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}
Hexagon::Hexagon(const string& n, double nx, double ny, int nl,string S,double Y):RegularPolygon( n, nx,  ny,  nl)
{
	setcolor(S);
	setsides(Y);
}
	void Hexagon:: setcolor(string X){
         color=X;
	}
   	void Hexagon:: setsides(double Z)
	   {
	   	sides=Z;
	   }

void Hexagon::print()
{
cout<<"The color of the hexagon is "<<color<<" "<<"and with side  "<<sides<<endl;	
}
double Hexagon:: area(double A)
{
	return 2.6*A*A;
}
   double Hexagon:: perimeter(double K)
   {
   	return 6*K;
   }
/*    Hexagon:: Hexagon(const Hexagon&x,Hexagon&y)
	{
		y.color=x.color;
		y.sides=x.sides;
	}*/
	
    	
	
    
