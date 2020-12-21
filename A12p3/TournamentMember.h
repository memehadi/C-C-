/*
CH-230-A
a12p4 .c++
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
#include<string>
using namespace std;
class TournamentMember
{
	private:
		char firstName[36];
		char lastName[36];
		char dateOfBirth[11];
	static string location;
		int age;
		double weight;
	public:
		TournamentMember();
		TournamentMember( char[], char[],char[],int,double);
	    TournamentMember( TournamentMember &);
	    /*`TournamentMember();*/
	    void setlocation(string newlocation);
	    inline string getlocation();
	  	inline void setFirstName( char[]);
	  	inline char getFirstName();
	  	void printFirstName();
		inline void setLastName(char[]);
	  	void printLastName();
	  	inline void setDateOfBirth(char[]);
	    void printDateOfBirth();
	    inline void setAge(int);
	  	void printAge();
		inline void setWeight(double);
	  	void printWeight();
};
class Player:public TournamentMember
{
	private:
		int number;
		string position;
		int goals;
		string foot;
	public:
		Player();
		Player(int,string,int,string,char[], char[],char[],int,double);
		Player(Player&);
		void setNumber(int);
		void printNumber();
		void setPosition(string);
		void printPosition();
		void setGoals(int);
		void printGoals();
	    void setFoot(string);
		void printFoot();
};
 class Referee: public TournamentMember
{ private:
	int yellowCardCount;
	Player *yellowCardList[40];
	int redCardCount;
	Player *redCardList[40];
	public:
	Referee(char[],char[],char[],int,double,int,int);	
	bool addToYellowCardList(Player *p);
    bool addToRedCardList(Player *p);
};

