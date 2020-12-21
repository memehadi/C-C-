#include <stdio.h>
float product(float a, float b);
void productbyref(float a, float b, float *p);
void modifybyref(float *a, float *b);

int main ()
{
	float x,y,pro;
	scanf("%f",&x);
	scanf("%f",&y);
	printf("the product is %f\n",product(x,y));
	//printf("the product is %f\n",productbyref(x,y,&pro));
	//printf("the product is %f\n",product(a,));
	return 0;
}
float product(float a, float b)
{
	float product;
	product=a*b;
	return product;
}
void productbyref(float a, float b, float *p)
{
	*p=a*b;
	return *p;
}
/*void modifybyref(float *a, float *b);
{
	product=(*a)*(*b);
	return product;
}*/
