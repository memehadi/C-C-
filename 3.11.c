 #include<stdio.h>
#include<string.h>
int main()
{
int i;
char c;
char one[20],two[20];
fgets(one,sizeof(one),stdin);	
fgets(two,sizeof(two),stdin);	
printf("%d",strlen(one));
printf("%s",two);
scanf("%c",&c);
for (i=0;i<20;i++)
{
	if (two[i]==c)
{
		printf("the position  is %d",i);
		break;
	}
else if(i==19)
{
		printf("the letter does not exist");
	}	
	
 }
	//printf("the position  is %d",i);

return 0;
}

