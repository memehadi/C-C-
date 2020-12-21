/*
CH-230-A
a10p5.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;
Critter::Critter()
{
	string str="default_critter";
	setName(str);
	setHeight(5);
	setHunger(0);
	setBoredom(0);
	
}
Critter::Critter(string x)
{
	setName(x);
	setHeight(5);
	setHunger(0);
	setBoredom(0);
	
}
Critter::Critter(string x,double he,int hu,int bo)
{
	setName(x);
	setHeight(he);
	setHunger(hu);
	setBoredom(bo);
	
}
Critter::Critter(string x,int hu,int bo)
{
	setName(x);
	setHeight(10);
	setHunger(hu);
	setBoredom(bo);
	
}
void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setBoredom(int newboredom) {
	boredom = newboredom;
}

void Critter::setHeight(double newheight) {
	height = newheight;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << ".";
	cout <<" My boredom level is "<<boredom<<".";
	cout <<" My height is "<<height<<"."<<endl;
	
}
