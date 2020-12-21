#include<stdio.h>
 unsigned char set(unsigned char c,int x,int y,int z)
{
c=c|1<<x;
c=c|1<<y;
c=c|1<<z;
return c;

}

int main()
{
unsigned char c;
int i;
scanf("%c",&c);
printf("the decimal representation is %d",c);
printf("the binary  representation is ");
for(i=7;i>0;i--)
{
	if((c>>i)&1)
	printf("%d ",1);
	else
	printf("%d ",0);
}
printf("the backward binary representation is ");
for(i=0;i<7;i++)
{
	if((c>>i)&1)
	printf("%d ",1);
	else
	printf("%d ",0);
}
printf("the turned on representation  is ");
for(i=7;i>0;i--)
{
 unsigned char m=set( c,7,6,1);
	if((m>>i)&1)
	printf("%d ",1);
	else
	printf("%d ",0);
}

}
