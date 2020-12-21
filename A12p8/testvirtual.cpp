/*
CH-230-A
a12p8.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/ 
#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h" 
const int num_obj = 7;
int main() {
	Area *list[num_obj];						// (1)creating an array to implemnt the virtual method calaArea() using polymorphism
	int index = 0;								// (2)used to implement  the while loop in line 38
	double sum_area = 0.0;						 // (3)initializing the summation of areas to add on that value everytime the while loop runs
	double sum_perimeter = 0.0;
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4)using  a parametrized constructor 
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Square: ";
	Square orange_square("ORANGE",8);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	list[0] = &blue_ring;						// (5)This is valid because Ring,Circle and Rectangle are all inherited from thne same clas(Area).
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &orange_square;
	while (index < num_obj) {					// (7) using the while loop to access the elements of the array created on line 16
		(list[index])->getColor();				
		double area = list[index++]->calcArea();// (8) implementing the virtual method calcArea()
		sum_area += area;
	
		}
		cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (9) prints out the summation calculated on line 40
		
		index=0;	
			
	while (index < num_obj) {					
		(list[index])->getColor();				
		double perimeter = list[index++]->calcPerimeter();
		sum_perimeter += perimeter;
		
	}
			
	cout << "\nThe total perimeter is "<< sum_perimeter << " units " << endl;
	return 0;
}



/*
                                                   Area
                                                    *
             ***************************************************************************************
             *                                                                                     *
             Circle                                                                             Rectangle
             *                                                                                      *
             Ring                                                                                 Square
*/
