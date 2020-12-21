#include<stdio.h>
int count_consonants(char str[]) 
{
	int j, count=0;
	for(j=0;str[j]!='\0';j++)
	{
	if(str[j]!='a'&&str[j]!='e'&&str[j]!='i'&&str[j]!='o'&&str[j]!='u'){
	
	count++;}
	 } 
	 return count-1;
}
int main()
{
	char array[100];
	int i;
	for(i=0;array!=;i++)
	{
		fgets(array,sizeof(array),stdin);
		printf("%s",array);
	printf("%d",count_consonants(array));	
	}
	return 0;
}
