/*
CH-230-A
a10p5.c++
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
	Critter e("Musab",174,15,165);
	Critter f("Musab",15,165);
	c.print();
	d.print();
	e.print();
	f.print();
        return 0;
}
