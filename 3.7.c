#include<stdio.h>
void print_form(int n,int m,char c)
{
int i,g;
	for(i=0;i<n;i++)
	{
	for(g=0;g<i+m;g++ ){
		printf("%c ",c);
	}
	printf("\n");	
	}
	
	
}
int main()
{
	int n,m;
	char c;
	scanf("%d",&n);
	scanf("%d",&m);
	getchar();
	scanf("%c",&c);
	print_form( n, m, c);	

return 0;
}
