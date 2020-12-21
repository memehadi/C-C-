/*
CH-230-A
a11p4.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
#include <string>
using namespace std;
/*
CH-230-A
a11p4.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/
class Creature {
	public:
		Creature();  
		void run() const;
 
	private:
		int distance;
};



class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;

	private:
		int distFactor;
};


class Aliens: public Creature {
	public:
		Aliens();
		void print() const;

	private:
		string blood_color;
};


class Humans: public Creature {
	public:
		Humans();
		void print() const;

	private:
		int average_life_span;
};
