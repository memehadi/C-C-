#include<stdio.h>
int main()
{
unsigned char c;
int i;
scanf("%c",&c);
printf("the decimal representation is %d",c);
for(i=7;i>0;i--)
{
	if((c>>i)&1)
	printf("%d ",1);
	else
	printf("%d ",0);
}

}

