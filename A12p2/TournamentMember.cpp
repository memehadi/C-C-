/*
CH-230-A
a12p3.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
#include"TournamentMember.h"
#include<string>
using namespace std;

string TournamentMember::location = "Ethiopia";
TournamentMember::TournamentMember()
{
	cout<<"you used a default constructor."<<endl;
}

TournamentMember::TournamentMember(char f[],char l[],char d[],int a,double w){
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
