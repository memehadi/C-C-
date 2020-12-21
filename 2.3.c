#include <stdio.h>
int main(){
	int week,days, hrs,total;
	printf("enter the number of weeks\n");
	scanf("%d",&week);
	printf("enter the number of days\n");
	scanf("%d",&days);
		printf("enter the number of hours\n");
	scanf("%d",&hrs);
	total=(week*7*24)+(days*24)+(hrs);
	printf(" the total  number of hours is %d\n",total);
return 0;
}
