/*
CH-230-A
a12p7.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"
using namespace std;

Fraction::Fraction()
{
    num = 1;
    den = 1;
}

Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);
    
    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
   // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    
    // base case
    if (a == b)
        return a;
    
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
    
    
}

int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b);
    
}




 Fraction operator * (Fraction const & obj,Fraction const & obj2)
{
    Fraction res;
    res.num = obj.num * obj2.num;
    res.den = obj.den * obj2.den;
    return res;
}


Fraction operator +(Fraction const & obj,Fraction const & obj2)
{ Fraction res;
   res.den = Fraction::lcm(obj.den,obj2.den);
    res.num = ((obj.num*res.den)/obj.den) + ((obj2.num*res.den)/obj2.den);
   
    return res;
}

Fraction operator -(Fraction const & obj,Fraction const & obj2)
{
    Fraction res;
    res.den = Fraction::lcm(obj.den,obj2.den);
    res.num = ((obj.num*res.den)/obj.den) - ((obj2.num*res.den)/obj2.den);
    
    return res;
}
 Fraction operator / (Fraction const & obj,Fraction const & obj2)
{
    Fraction res;
    res.num = obj.num * obj2.den;
    res.den = obj.den* obj2.num ;
    return res;
}

istream& operator >> (istream& fracin, Fraction &obj)
{
    fracin>>obj.num;
    cout<<"/";
    fracin>>obj.den;
    cout<<endl;
    return fracin;
}
ostream& operator<<(ostream& fracout, const Fraction& obj)
{
    fracout<<obj.num<<"/"<<obj.den<<endl;
    return fracout;
    
    }

Fraction operator < (Fraction const & obj,Fraction const & obj2)
{
    
    Fraction res;
if((obj.num*obj2.den)<(obj2.num*obj.den))
{
    res.num = obj.num;
    res.den  = obj.den;
}
    return res;
}


Fraction operator > (Fraction const & obj,Fraction const & obj2)
{
    Fraction res;
    if((obj.num*obj2.den)>(obj2.num*obj.den))
    {
        res.num = obj.num;
        res.den  = obj.den;
    }
    return res;
}
