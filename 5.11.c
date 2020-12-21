#include<stdio.h>
#include <stdbool.h>
int x=2;
bool prime(int n)
{
	//int x=2;
	if(n==1)
	return 1;
	if(n==2);
	return 1;
	if(n%x!=0)
	return 0;
	x++;
	if(x=n)
	return 1;
	if(x!=n)
	prime(n);
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
i=prime(n);
if(prime(n)==1)
printf("is not prime");
if(prime(n)==0)
printf("issa  prime");
}
