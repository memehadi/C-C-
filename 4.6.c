#include<stdio.h>
int main()
void max(int n,int arr[])
{
	int i, x=1;
	int y=0 ;
	for(i=0;i<n;i++)
	{
		if(arr[i]>x)
		{
			x=arr[i];
			y=x;
		}
		else if(arr[i]>y)
		{
			y=arr[i];
		}
	}
	printf("%d %d",x,y);
}
{
	int i,n;
	scanf("%d",&n);
	int*p=(int*)malloc(n*sizeof (int));
	for(i=0;i<n;i++)
	{
	scanf("%d",&*(p+i));
	}
	for(i=0;i<n;i++)
	{
	printf("%d",p[i]);
	}
	max(p,n);
	}
