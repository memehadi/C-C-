
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

Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  


Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
     cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Aliens::Aliens() :blood_color ("Red")
{}  

void Aliens::print() const
{
     cout << "their blood color is  " << blood_color <<" and they can run "<<distance<< " meters!\n";
}


Humans::Humans() :average_life_span (70)
{}  

void Humans::print() const
{
     cout << "Humans have an average lifespan of   " << average_life_span <<" and they can run "<<distance<< " meters!\n";
}
