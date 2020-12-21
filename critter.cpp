#include <iostream>
#include "Critter.h"

using namespace std;
void critter::setweight(double newheight)
{
	weight=newweight;
}
double critter::getheight()
{
	return weight;
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
		cout <<" My weight is "<<weight<<"."<<endl;
}

int Critter::getHunger() {
	return hunger;
}

int Critter::getBoredom() {
	return boredom;
}

double Critter::getHeight() {
	 
	 
