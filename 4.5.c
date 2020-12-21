#include <stdio.h>
#include <string.h>
int count_consonants(char str[]);
int main()
{
	char str [100];
	here:
	fgets (str, sizeof (str),stdin); //gets string of length of str
	if (strcmp(str,"\n")!=0) //exits when the entered string is empty (Enter key only)
	{
		printf("Number of consonants=%d\n",count_consonants(str));	
		goto here;	
	}
	return 0;
}

int count_consonants(char str[])
{
 int i,counter=0;
 for(i=0;i<strlen(str);i++)
 {
 	if(*(str+i)!='a'&&*(str+i)!='e'&&*(str+i)!='i'&&*(str+i)!='o'&&*(str+i)!='u')
 	counter++;
	 }	
return counter;
}
