#include <string> // defines standard C++ string class
using namespace std;

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double weight;
	double height;

public: // business logic methods are public
	// setter methods
	void setweight();
	void setName(string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setHeight(double newheight);
	// getter method
	int getHunger();
	// service method
	int getBoredom();
	double getheight();
	double getHeight();
	void print();
};
