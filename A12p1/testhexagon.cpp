/* Musab Mehadi
mmehadi@jacobs-university.de
A12p1*/
#include <iostream>
#include <iostream>
#include "Shapes.h"
#include <string>
using namespace std; 

int main()
 {
 Hexagon H("hexagon",5,3,6,"Blue",9);
 H.print();
 Hexagon G("hexagon",8,0,6,"Green",15);
 G.print();
 cout<<"the area of the Blue hexagon  is "<< H.area(9)<<endl;
 cout<<"the perimeter of the Blue hexagon  is "<< H.perimeter(9)<<endl;
 cout<<"the area of the Green hexagon  is "<< G.area(15)<<endl;
 cout<<"the perimeter of the Green hexagon  is "<< G.perimeter(15)<<endl;
	return 0;
}
