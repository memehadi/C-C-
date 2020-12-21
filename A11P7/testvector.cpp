/*
CH-230-A
a11 p7.cpp
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
#include "Vector.h"
#include <string>
#include<cmath>
using namespace std;

int main() 
{
	
Vector v1(5);
Vector v2(5);
v1.add(v2);
v1.sub(v2);
v1.norm();
v1.mul(v2);
	
	return 0;
}
