#include<stdio.h>
void triangle(char c,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=n-i;j>0;j--)
		{
			printf("%c ",c);
		}
		printf("\n");
	}
}
int main()
{
	char d;
	int x;
		scanf("%d",&x);
	getchar();
	scanf("%c",&d);
	
triangle(d,x);
}
