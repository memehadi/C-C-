#include <stdio.h>

double product(double v[],double w[],int n)
{
	int i;
	double sum=0.00;
	for(i=0;i<n;i++)
	{
		sum=sum+(v[i]*w[i]);
	}
	return sum;
}
int main()
{
	int i,n;
double v[n];
double	w[n];
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%lf",&v[i]);
}
for(i=0;i<n;i++)
{
	scanf("%lf",&w[i]);
}
printf("%lf",product(v,w,n));
return 0;
}
