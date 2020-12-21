/*CH-23 0-A
a9 p1.c
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>

using namespace std;

int main()
{
	string final;
	string str;
	bool b=true;
	while(b!=false)
	{
		cout<<"enter a string"<<endl;
		cin>>str;
		if (str=="quit")
		{
			 b=false;
		}
		else{
			final = final + str;
		}
		
	}
	cout<<final;
	return 0;
}
