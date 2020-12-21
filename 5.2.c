#include<stdio.h>
void divby5(float arr[], int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		arr[i]=arr[i]/5;
		printf("%f\n",arr[i]);
	}
}
int main()
{
	int i;
	float*p=(float*)malloc(sizeof(float)*6);
	p[0]=5.5;
	p[1]=6.5;
	p[02]=7.75;
	p[03]=8;
	p[04]=9.6;
	p[05]=10.36;
	for(i=0;i<6;i++)
	{
		printf("%f \n",p[i]);
	}
	divby5( p, 6);
}
