#include <stdio.h>
int count;
double sum(double arr[],int n)
{
	double sum;
	if (count!=2)
	{
		printf("u trippin bruh");
		sum=-111;
		
	}
else
{	sum=arr[2]+arr[5];}
	return sum;
}
int main()
{
int n,i ;
double array[20];	
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%lf",&array[i]);
	if (i==2||i==4)
	count=count+1;
}
printf("the sum is %lf " ,sum( array, n));
return 0;
}
