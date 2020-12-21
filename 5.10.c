#include<stdio.h>
void recursive(int n)
{
	printf("%d",n);
	n=n-1;
	if(n!=0)
	 recursive( n);
}
int main()
{
	int n,i;
	here:
	scanf("%d",&n);
	if(n<=0)
	goto here;
	/*for(i=0;i<n;i++)
	{
		printf("%d",n-i);
	}*/
	recursive( n);
}
