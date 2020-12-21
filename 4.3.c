#include <stdio.h>
int main()
{
	float array[15];
	int i;
	for(i=0;i<15;i++)
	{
		scanf("%f",&array[i]);
/*	if(array[i]>=0)
	{
		printf("%f",array[i]);
	}	*/
	 if(array[i]<0)
		{	printf("u trippin");
		break;
		}
	}
	for(i=0;i<15;i++)
	{
		printf("%f",array[i]);
	}
	
return 0;	
}
