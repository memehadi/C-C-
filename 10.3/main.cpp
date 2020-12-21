#include <iostream>
#include <city.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	 string s;
 	 cin>>s;
 	 city Milan;
 	 Milan.setname(s);
 	 Milan.getname();
 	 Milan.print();
	return 0;
}
