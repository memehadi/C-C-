#include<stdio.h>
int main()
{
	char string[20];
	fgets(string,sizeof(string ),stdin);
	printf("%s",&string);
	int i;
	for(i=0;i<20;i++)
	{
		if(i%2==0)
		{
			printf("%c\n",string[i]);
		}
		else if(i%2==1)
		{
			printf(" %c\n",string[i]);	
		}
	}
	return 0;
}
