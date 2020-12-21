#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i;
char a[100];
char b[100];
char*c=(char*) malloc(sizeof(char)*200);
// c=strcat(a,b);
fgets(a,100,stdin);
fgets(b,100,stdin);

printf("%d\n",strlen(a));
printf("%d\n",strlen(b));
for(i=0;i<strlen(a);i++)
{
	if(a[i]=='\n')
	a[i]='\0';
}
for(i=0;i<strlen(b);i++)
{
	if(b[i]=='\n')
	b[i]='\0';
}
c=strcat(a,b);

printf("result of concatenation %s",c);
	free(c);
}
