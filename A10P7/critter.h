/*
CH-230-A
a10p7.cpp
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <string> // defines standard C++ string class
using namespace std;
/* First C++ class */
class Critter
{
private:  // data members are private
	string name;
	int hunger;
	int boredom;
	double thirst;
	double height;

public: // business logic methods are public
	// setter methods
	Critter();
	Critter(string);
	Critter(string,double,int,int);
	Critter(string,int,int);
	Critter(string,double,int,int,double);
	void setName(string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setHeight(double newheight);
	void setThirst(double newthirst);
	void print();
};

