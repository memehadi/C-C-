/*
CH-230-A
a12p2.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
#include"TournamentMember.h"
#include<string>
using namespace std;

int main() 
{   TournamentMember Plrs;
	TournamentMember Players("Paul","Jacob","1998.06.04",43,78,"America");
	Players.printFirstName();
	Players.printLastName(); 
	Players.printDateOfBirth();
	Players.printAge();
	Players.printWeight();
	
	TournamentMember h(Players);
	h.printFirstName();
	h.printLastName();
	h.printDateOfBirth(); 
	h.printAge();
	h.printWeight();
	
cout<<Players.getLocation()<<endl;
	Players.~TournamentMember()	;
/*	`TournamentMember();*/
	return 0;
	
}
