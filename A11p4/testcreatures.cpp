/*
CH-230-A
a11p4.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
#include <string>
#include "Creature.h"
using namespace std;
int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();
 
  cout << "\nCreating an Alien.\n";
    Aliens a;
    a.run();
    a.print();
    
    cout << "\nCreating a Human.\n";
    Humans h;
    h.run();
    h.print();

    return 0;
}

