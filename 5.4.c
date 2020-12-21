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
	int i,n;
	scanf("%d",&n);
	float*p=(float*)malloc(sizeof(float)*n);
for(i=0;i<n;i++)
{
	scanf("%f",&p[i]);
}
	for(i=0;i<n;i++)
	{
		printf("%f \n",p[i]);
	}
	divby5( p, n);
}
