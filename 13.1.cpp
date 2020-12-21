#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	ifstream fin; 
//	char input[50];
//	cin>>input;
	fin.open("abc.txt");
	fin.open("new#.txt");
	while(!fin.eof())
	{
		string c;
		getline(fin,c);
		fout<<c;
	}
	cout<<"copi ed";
	fin.close();
	fout.close();
	return 0;
}
