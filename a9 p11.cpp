/*
CH-230-A
a9 p11.c
Musab Mehadi
mmehadi@jacobs-university.de
*/
#include <iostream>
using namespace std;
bool isPalindrome(string str)
{
	int count=0;
	int n=str.size();
	int m=n-1;
	for (unsigned int i=0;i<n;i++)
		if (str[i]==str[m-i])
				count++;
	if (count==n)
		return 1;
	else
		return 0;
}
int main()
{
	string str;
	musab:
	cin>>str;
	if (str!="exit")
		if (!isPalindrome(str))
			cout<<"Not a Palindrome"<<endl;
		else
			cout<<"Palindrome"<<endl;
	else
		goto musab2;
	goto musab;
	musab2:
	return 0;
}


