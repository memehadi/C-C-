#include <iostream>
#include "box.h"
#include <string>
using namespace std;
	Box::Box(){
		length=0;
	}
	
	Box::Box(double x){
			setlength(x);
			getlength();
		
		}
		void Box::  setlength(double x){
		length=x;
		}
		Box::Box(&old){
			length=old.length;
		}
	    double Box ::getlength(){
	    	return length;
		}
		void Box:: print(){
			cout<<"the length is "<<length<<endl;
		}	
