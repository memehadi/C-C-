/*
CH-230-A
a12 p3.c
Aabishkar Karki
aa.karki@jacobs-university.de
*/
//static property
#include<iostream>
#include<string.h>
using namespace std;
#include"TournamentMember.h"

string TournamentMember::location = "Bremen";
string TournamentMember::valuechange(const string A)
{
	location = A;
	return location;
}
inline void TournamentMember::setf_name(const char* newfname)
{
	strncpy(f_name, newfname, strlen(newfname));
	f_name[strlen(newfname)] = '\0';
}
inline void TournamentMember::setl_name(const char* newlname)
{
	strncpy(l_name, newlname, strlen(newlname));
	l_name[strlen(newlname)] = '\0';
}
inline void TournamentMember::set_DOB(const char* newdob)
{
	strncpy(DOB, newdob, strlen(newdob));
	DOB[strlen(newdob)] = '\0';
}

inline void TournamentMember::setHeight(const double H)
{
	height = H;
}
inline void TournamentMember::setWeight(const double W)
{
	weight = W;
}

inline std::string TournamentMember::getf_name() const
{
	return f_name;
}
inline std::string TournamentMember::getl_name() const
{
	return l_name;
}
inline std::string TournamentMember::getDOB() const
{
	return DOB;
}

inline double TournamentMember::getHeight() const
{
	return height;
}
inline double TournamentMember::getWeight() const
{
	return weight;
}
//all 4 constructors
TournamentMember::TournamentMember()
{
	//Default class
	cout << "Default constructor called" << endl;

}
TournamentMember::TournamentMember(const char* fname, const char* lname, const char* dob, const double h, const double w)
{
	strncpy(f_name, fname, strlen(fname));
	f_name[strlen(fname)] = '\0';
	strncpy(l_name, lname, strlen(lname));
	l_name[strlen(lname)] = '\0';
	strncpy(DOB, dob, strlen(dob));
	DOB[strlen(dob)] = '\0';
	height = h;
	weight = w;
}
TournamentMember::TournamentMember(const TournamentMember& T2)
{
	cout << "Copy constructor called" << endl;
	strncpy(f_name, T2.f_name, strlen(T2.f_name));
	f_name[strlen(T2.f_name)] = '\0';
	strncpy(l_name, T2.l_name, strlen(T2.l_name));
	l_name[strlen(T2.l_name)] = '\0';
	strncpy(DOB, T2.DOB, strlen(T2.DOB));
	DOB[strlen(T2.DOB)] = '\0';
	height = T2.height;
	weight = T2.weight;
}
TournamentMember::~TournamentMember()
{
	cout << "Destructor is called" << endl;
}

void TournamentMember::display()
{
	cout << "First name = " << f_name << endl
		<< "Last name = " << l_name << endl
		<< "DOB = " << DOB << endl
		<< "Location = " << location << endl
		<< "Height = " << height << endl
		<< "Weight = " << weight << endl;
}



//methods and constructor for player class
inline void Player::set_JerseryNumber(const int j)
{
	jersery_number = j;
}
inline void Player::set_Position(const std::string pos)
{
	position = pos;
}
void Player::set_Goals(const int gol)
{
	goals_scored = gol;
}
inline void Player::set_Mainfoot(const std::string foot)
{
	main_foot = foot;
}

inline int Player::get_JerseryNumber()const
{
	return jersery_number;
}
inline std::string Player::get_Position()const
{
	return position;
}
inline int Player::get_Goals()const
{
	return goals_scored;
}
inline std::string Player::get_Mainfoot()const
{
	return main_foot;
}

Player::Player():TournamentMember()
{
	cout << "Default constructor for Player object called" << endl;
}
Player::Player(const char*fname, const char*lname, const char*dob, const double h, 
	const double w, const int jersey, const std::string positions, const int goals, const std::string foot)
	:TournamentMember(fname,lname,dob,h,w)
{
	cout << "Parametric constructor for Player object called" << endl;
	jersery_number=jersey;
	position=positions;
	goals_scored=goals;
	main_foot=foot;
}
Player::Player(const Player&P2):TournamentMember(P2)
{
	cout << "Copy constructor for Player object called" << endl;
	jersery_number = P2.jersery_number;
	position = P2.position;
	goals_scored = P2.goals_scored;
	main_foot = P2.main_foot;
}
Player::~Player()
{
	cout << "Destructor for Player object called" << endl;
}
//method to increase number of goals scored
void Player::increase_goals()
{
	this->set_Goals(goals_scored+1);
}
void Player::display_player()
{
	cout << "Jersery Number = "<<jersery_number << endl
		 << "Position = "<<position << endl
		 << "Goals Scored = "<<goals_scored << endl
		 << "Main foot = "<<main_foot << endl;
}

