#include <stdio.h>
float product(float a, float b);
void productbyref(float a, float b, float *p);
void modifybyref(float * a, float *b);
int main()
{
	float a,b,multiple;
	scanf ("%f",&a);
	scanf ("%f",&b);
	printf("%lf\n",product (a,b));//prints the multiple of a and b
	productbyref(a,b,&multiple);
	printf ("%f\n",multiple);//also prints the multiple of a and b
	modifybyref(&a,&b);// passes the address of a and b to a function that adds 3 and 11 respectively
	printf ("%f\n",a);
	printf ("%f\n",b);	
}

float product(float a, float b)
{
	return a*b;	
}

void productbyref(float a, float b, float *p)
{
	*p= a*b;	
}

void modifybyref(float *a, float *b)
{
	*a=*a+3;
	*b=*b+11;
}
