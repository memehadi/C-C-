#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	float* arr=(float*)malloc(sizeof(float)*n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&arr[i]);
	}
		for(i=0;i<n;i++)
	{
		if(arr[i]<=0)
{
	printf("before the first negative value %d",i-1);
	break;
}
	}
}
