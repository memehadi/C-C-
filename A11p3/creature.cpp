/*
CH-230-A
a11p3.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
using namespace std;
#include <string>
class Creature {
	public:
		Creature();  
		void run() const;

	protected:
		int distance;
};

Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
     cout << "hovering " << (distFactor * distance) << " meters!\n";
}
class Aliens: public Creature {
	public:
		Aliens();
		void print() const;

	private:
		string blood_color;
};

Aliens::Aliens() :blood_color ("Red")
{}  

void Aliens::print() const
{
     cout << "their blood color is  " << blood_color <<" and they can run "<<distance<< " meters!\n";
}
class Humans: public Creature {
	public:
		Humans();
		void print() const;

	private:
		int average_life_span;
};

Humans::Humans() :average_life_span (70)
{}  

void Humans::print() const
{
     cout << "Humans have an average lifespan of   " << average_life_span <<" and they can run "<<distance<< " meters!\n";
}

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
