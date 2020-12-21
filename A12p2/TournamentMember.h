/*
CH-230-A
a12p3.c++
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
		void setlocation(string l){
			location = l;
		}
	  	void printWeight();
	  	inline string getLocation ( ){
		  
	  		return location;
		  }
};
