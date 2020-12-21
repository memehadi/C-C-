/*
CH-230-A
a10p4.c++
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include<string>
using namespace std;
class person
{
	private:
		int age;
		string name;
		float weight;
		string major;
	public:
		void setage(int x);
		int getage();
		void setname(string x);
		string getname();
		void setweight(float x);
		float getweight();
		void setmajor(string x);
		string getmajor();
};
