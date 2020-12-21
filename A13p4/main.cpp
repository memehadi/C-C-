/*
CH-230-A
a13p4.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/

#include<iostream>


using namespace std;
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B:  public virtual A
{
public:
  B()  { setX(10); }
};
 
class C:  public virtual A  
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    d.print();  /*the error is due to the inheritance of
	 the print() method more than once.
	  This is not allowed during inheritance. 
	  we can avoid is by adding the word "virtual" after "public"in lines 13 and 19.*/
    return 0;
}
