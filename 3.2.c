#include <stdio.h>
int main()
{
	char c;
	int n,i;
	scanf("%c",&c);
	scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("%c\n",c-i);
}	
	return 0;
}
