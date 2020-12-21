#include<stdio.h>
void proddivpowinv(float a, float b, float *prod, float *div,float *pwr, float *invb)
{
	float i;
	*prod=(a*b);
	*div=(a/b);
	for(i=1;i<=b;i++)
	{
		*pwr=(a*a*b);
	}
	*invb=1/b;
	//printf("%f %f %f %f ",*prod,*div,*pwr,*invb);
}
int main()
{
	float a,b,prod,div,pwr,invb;
	scanf("%f",&a);
	scanf("%f",&b);
	proddivpowinv( a, b,  &prod, &div, &pwr,  &invb);
		printf("%f %f %f %f ",prod,div,pwr,invb);
	return 0;
}
