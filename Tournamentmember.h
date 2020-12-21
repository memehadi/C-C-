/*
CH-230-A
a12 p3.c
Aabishkar Karki
aa.karki@jacobs-university.de
*/
#include<iostream>
class TournamentMember
{
private:
	char f_name[36];
	char l_name[36];
	char DOB[36];
	static std::string location;//static property which is constant for all players of the team 
	//two more propertiess for generic members
	double height;
	double weight;
public:
	//inline methods for setter and getter
	void setf_name(const char*);
	void setl_name(const char*);
	void set_DOB(const char*);
	//void set_location();
	void setHeight(const double);
	void setWeight(const double);

	std::string getf_name()const;
	std::string getl_name()const;
	std::string getDOB()const;
	//std::string getLocation();
	double getHeight()const;
	double getWeight()const;
	//all 4 constructors
	TournamentMember();
	TournamentMember(const char*, const char*, const char*, const double, const double);
	TournamentMember(const TournamentMember&);
	~TournamentMember();
	static std::string valuechange(const std::string);
	void display();
};

class Player :public TournamentMember
{
private:
	int jersery_number;
	std::string position;
	int goals_scored;
	std::string main_foot;
public:
	//setter and getter methods
	void set_JerseryNumber(const int);
	void set_Position(const std::string);
	void set_Goals(const int);
	void set_Mainfoot(const std::string);
	
	int get_JerseryNumber()const;
	std::string get_Position()const;
	int get_Goals()const;
	std::string get_Mainfoot()const;
	//all 4 constructors
	Player();
	Player(const char*, const char*, const char*, const double, const double, const int, const std::string, const int, const std::string);
	Player(const Player&);
	~Player();
	//display method
	void display_player();
	//method to increase number of goals scored
	void increase_goals();
};
