/*
CH-230-A
a12p4.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
#include"TournamentMember.h"
#include<string>
using namespace std;

int main(int argc, char** argv) 
{   TournamentMember Plrs;
	TournamentMember Members("Paul","Jacob","1998.06.04",43,78);
	Members.printFirstName();
	Members.printLastName(); 
	Members.printDateOfBirth();
	Members.printAge();
	Members.printWeight();
	TournamentMember h(Members);
	h.printFirstName(); 
	h.printLastName();
	h.printDateOfBirth(); 
	h.printAge();
	h.printWeight();
	Player Again;
	Player Musab(10,"Striker",9,"left","Mehadi","Musab","1956.08.19",27,81);

	Musab.printNumber();
	Musab.printPosition();
	Musab.printGoals();
	Musab.printFoot();
	Musab.printFirstName(); 
	Musab.printLastName();
	Musab.printDateOfBirth(); 
	Musab.printAge();
	Musab.printWeight();
	Musab.setlocation("Hamburg");
	
	Player Ozli(17,"Midfielder",4,"left","Mesut","Ozli","1966.18.1",24,71);
	Ozli.printNumber();
	Ozli.printPosition();
	Ozli.printGoals();
	Ozli.printFoot();
	Ozli.printFirstName(); 
	Ozli.printLastName();
	Ozli.printDateOfBirth(); 
	Ozli.printAge();
	Ozli.printWeight();
	Ozli.setlocation("Hamburg");
	
	
	Player Sane(19,"Winger",11,"Right","Leroy","Sane","1986.11.28",21,70);
	Sane.printNumber();
	Sane.printPosition();
	Sane.printGoals();
	Sane.printFoot();
	Sane.printFirstName(); 
	Sane.printLastName();
	Sane.printDateOfBirth(); 
	Sane.printAge();
	Sane.printWeight();
	Sane.setlocation("Hamburg");
	Referee Raja("Mike","Hamilton","02.08.1960",54,70,0,0);
	Raja.printFirstName(); 
	Raja.printLastName();
	Raja.printDateOfBirth(); 
	Raja.printAge();
	Raja.printWeight();
	cout<<Raja.addToYellowCardList(&Ozli)<<endl;
	cout<<Raja.addToRedCardList(&Sane)<<endl;
	
	return 0;
	
}
