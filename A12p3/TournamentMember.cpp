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
string TournamentMember::location = "Ethiopia";
void TournamentMember::setlocation(string newlocation){  location = newlocation ;}
string TournamentMember::getlocation(){return location; }
TournamentMember::TournamentMember(){
	cout<<"you used a default constructor."<<endl;
}

TournamentMember::TournamentMember(char f[],char l[],char d[],int a,double w ){
		cout<<"you are using a parametrized constructor"<<endl;
		setFirstName(f);
		setLastName(l);
		setDateOfBirth(d);
		setAge(a);
		setWeight(w);
		
	/*	string TournamentMember:: location="Ethiopia";*/
	}
TournamentMember::TournamentMember( TournamentMember &old){
	cout<<"Implementing copy constructor"<<endl;
	 int i;
	 for(i=0;i<36;i++)
	{
		firstName[i]=old.firstName[i]; 		
	}
	for(i=0;i<36;i++)
	{
		lastName[i]=old.lastName[i]; 		
	}
	for(i=0;i<11;i++)
	{
			dateOfBirth[i]=old.dateOfBirth[i];		
	}
	age=old.age;
	weight=old.weight;
}
//Destructor
/* TournamentMember:: `TournamentMember(){
 	cout<<"destructor implemented"<<endl;
 }*/
	  	//setting first name
void TournamentMember::setFirstName(char z[]){
	  		for(int i=0;i<36;i++)
			   {
			   	firstName[i]=z[i];
			   }
 }
 /*getting first name
 	 char[] TournamentMember::getFirstName(){
 	 	return firstName;
	  }*/
		  
void TournamentMember:: printFirstName(){
cout<<"The first name is  "<<firstName<<endl;	
 }
 
 //setting last name
 void TournamentMember::setLastName(char z[]){
	  		for(int i=0;i<36;i++)
			   {
			   	lastName[i]=z[i];
			   }
 }
void TournamentMember:: printLastName(){
cout<<"The last name is  "<<lastName<<endl;	
 }
 
 
 	void TournamentMember:: setDateOfBirth(char x[]){
 			for(int i=0;i<11;i++)
			   {
			  dateOfBirth[i]=x[i];
			   }
	 }
	void TournamentMember::printDateOfBirth(){
	  		cout<<"born in "<<dateOfBirth<<endl;
	  }
 
  /*string TournamentMember:: location="Ethiopia";*/
    void TournamentMember::setAge(int x){
    	age=x;
	}
	void TournamentMember:: printAge(){
	  		cout<<"the subject  is "<<age<< " years old."<<endl;
		  }
	void TournamentMember::setWeight(double x){
			weight=x;
		}
	void TournamentMember::printWeight(){
		cout<<"the weight is "<<weight<<endl;
	}
		
		//Player class
	Player::Player():TournamentMember(){
		cout<<"you are using default constructor AGAIN!!(since this is inherited from the TournamentMember class the out put is twice.)"<<endl;
	}
	
	Player::Player(int n,string p,int g,string F,char f[],char l[],char d[],int a,double w):TournamentMember(f,l,d,a,w)	{
		cout<<"you are using Parametrized constructor AGAIN!!"<<endl;
		setNumber(n);
		setPosition(p);
		setGoals(g);
		setFoot(F);
	}
		void Player::setNumber(int x){
			number=x;
		}
   
    void Player::printNumber(){
    	cout<<"The palyer's number is "<<number<<endl;
	}
	void Player::setPosition(string x){
			position=x;
		}
   
    void Player::printPosition(){
    	cout<<"The palyer's position is "<<position<<endl;
	}	
	void Player::setGoals(int x){
			goals=x;
		}
   
    void Player::printGoals(){
    	cout<<"The  number of goals is "<<goals<<endl;
		
	}
	void Player::setFoot(string x){
			foot=x;
		}
   
    void Player::printFoot(){
    	cout<<"The palyer's prefered foot  is "<<foot<<endl;
	}	
	Referee::Referee(char f[],char l[],char d[],int a,double w,int y,int r):TournamentMember(f,l,d,a,w)	{

	}
	bool Referee::addToYellowCardList(Player *p)
	{
		for(int i=0;i<=yellowCardCount;i++)
		{
			if(p!=yellowCardList[i])
			{
				yellowCardList[yellowCardCount]=p;
				yellowCardCount+=1;
				return 1;
			}
			else if (p==yellowCardList[i])
			{
				yellowCardList[i]=0;

				redCardList[redCardCount]=p;
				cout<<"the player has been removed from the yellow card list and added to the red card list"<<endl;
				return 0;
			}
		}
		
	}
	
	
		bool Referee::addToRedCardList(Player *p)
	{
		for(int i=0;i<=redCardCount;i++)
		{
			if(p!=redCardList[i])
			{
				redCardList[redCardCount]=p;
				redCardCount+=1;
				return 1;
			}
			else 
			{
				return 0;
			}
		}
		
	}
