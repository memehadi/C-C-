#include <iostream>
using namespace std;
float abs (float n)
{
	if (n<0)
		{
		n=-1*n;	
		}
else
	{
		n=n;
	}
	return n;
}
int main()
{
	float n;
	cin>>n;
	cout<<"the absolutr value is "<<abs(n);
	return 0;
	
	
}
