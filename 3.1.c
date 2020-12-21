#include<stdio.h>
int main()
{
float x;
int n,i;
scanf("%f",&x);
here:
scanf("%d",&n);
if(n>0)
{

for( i=0;i<n;i++)
{
	printf("%f\n",x);
}
}
else
{
	goto here;
}
return 0;
}
