#include <stdio.h>
int main()
{
//	char c;
	int n,i,cint;
	double celsius [100], fahrenheit;
	double sum;
//	scanf ("%c",&c);
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	scanf ("%lf",&celsius [i]);
		for(i=0;i<n;i++)
	 	{
	 		printf("%lf",celsius[i]);
		 }
	return 0;
}
