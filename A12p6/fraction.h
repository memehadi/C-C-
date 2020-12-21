/*
CH-230-A
a12p6.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/// simple class for fractions
#include <iostream>
#ifndef FRACTION_H_
#define FRACTION_H_
using namespace std;

class Fraction {
    
private:                        // internal implementation is hidden
    int num;                    // numerator
    int den;                    // denominator
    
    int gcd(int a, int b);        // calculates the gcd of a and b
    int lcm(int a, int b);
    
public:
    Fraction();                    // empty constructor
    Fraction(int, int = 1);     // constructor taking values for fractions and
    // integers. Denominator by default is 1
    void print(); // prints it to the screen
    friend istream& operator >> (istream& fracin,  Fraction &obj);
   
    friend ostream& operator<<(ostream& fracout, const Fraction& obj);
 
    friend Fraction operator * (Fraction const & obj,Fraction const & obj2);
    friend Fraction operator / (Fraction const & obj1,Fraction const & obj2);
};

      

#endif /* FRACTION_H_ */
