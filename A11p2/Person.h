/*
CH-230-A
a11p2.c++
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
		person(person &x);
		person();
		person(string,int,float,string);
		void setage(int x);
		int getage();
		void setname(string x);
		string getname();
		void setweight(float x);
		float getweight();
		void setmajor(string x);
		string getmajor();
		void print(); 
};

