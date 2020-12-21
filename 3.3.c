#include<stdio.h>
float convert(int);
int main()
{
	int cm;
	scanf("%d",&cm);
	printf("%f",convert(cm));
	return 0;
}
float convert(int n)
{
	float x;
	x=n/100000.00;
	return x;
	
}
