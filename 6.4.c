#include<stdio.h>
#include<stdlib.h>
#define INTERMEDIATE 
int main()
{
int n,i,sum=0;
int v1[n];
int v2[n];
scanf("%d",&n);

for(i=0;i<n;i++)
{
	scanf("%d",&v1[i]);
}
for(i=0;i<n;i++)
{
	scanf("%d",&v2[i]);
}
#ifdef INTERMEDIATE
printf("the intermediate values are  ");
for(i=0;i<n;i++)
{
	sum=sum+(v1[i]*v2[i]);
	printf("%d",v1[i]*v2[i]);
}
printf("%d",sum);
#else
for(i=0;i<n;i++)
{
	sum=sum+(v1[i]*v2[i]);
	//printf("%d",vi[i]*v2[i]);
}
printf("%d",sum);
#endif
return 0;
}

