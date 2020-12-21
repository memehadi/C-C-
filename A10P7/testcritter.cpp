/*
CH-230-A
a10p7.cpp
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;
	Critter d("Musab");
	Critter e("Musab",174,17,165);
	Critter f("Musab",15,165);
	Critter g("Musab",12,13,190,3.2);
	c.print();
	d.print();
	e.print();
	f.print();
	g.print();
        return 0;
}

