#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char*p;
	p=new char[6];
	p="sfdd";
		char*r;
	r=new char[6];
	r="muss";
	cout<<strcat(p,r);
return 0;
}
