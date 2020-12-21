#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int countlower(char* str)
{
int i,counter=0;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			counter++;
		}
	}
return counter;
}
int main()
{
	char*p=(char*) malloc(sizeof(char)*50);
	while(1)
	{
		fgets(p,50,stdin);
		if(strcmp(p,"\n")==0)
		{
			printf("we done");
			break;
		}
		else {
			printf("%d", countlower(p));
		printf("%s", p);
		}
	}
}

