 /*
CH-230-A
a11p6.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include "Shapes.h"

int main(int argc, char** argv) {

  Circle c("first circle", 3, 4, 7);
  RegularPolygon r("TRIANGLE", 1, 1, 3);
  Rectangle R("Rectangle",3,9,4,7,3);
  Square S("Square",5,2,4  ,8,8,8);
  r.printName();
  r.printEdges();
  c.printName();
  c.printRadius();
  c.printperimeter();
  c.printarea();
  R.printName();
  R.printEdges();
  R.printDimensions();
  R.printperimeter();
  R.printarea();
  S.printName();
  S.printEdges();
  S.printDimensions();
  S.printSide();
  S.printperimeter();
  S.printarea();
  
}
