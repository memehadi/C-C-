/*
CH-230-A
a12 p3.c
Aabishkar Karki
aa.karki@jacobs-university.de
*/
#include<iostream>
#include"TournamentMember.h"
using namespace std;

int main()
{

	Player P1("Aabishkar", "Karki", "2000-12-13", 5.6, 78, 7, "Striker", 56, "Right");
	P1.display();
	P1.display_player();
	cout << endl;
	Player P2("Christiano", "Ronaldo", "1990-7-30", 6.4, 80, 7, "Right Winger", 45, "Right");
	P2.display();
	P2.display_player();
	cout << endl;
	Player P3("Lionel", "Messi", "1900-1-17", 5.3, 65, 10, "Center Forward", 31, "Left");
	P3.display();
	P3.display_player();
	cout << endl;
	Player P4 = P3;
	P4.display();
	P4.display_player();
	cout << endl;
	cout << "After moving all players to Hamburg" << endl;
	TournamentMember::valuechange("Hamburg");//calling static function
	P1.display();
	P1.display_player();
	cout << endl;
	P2.display();
	P2.display_player();
	cout << endl;
	P3.display();
	P3.display_player();
	cout << endl;
	P4.display();
	P4.display_player();
	cout << endl;
	cout << "Increasing goal count of Player 4 by 1" << endl;
	P4.increase_goals();
	P4.display();
	P4.display_player();
	cout << endl;
}
