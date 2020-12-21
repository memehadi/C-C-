#include <stdio.h> 
float to_pounds(int x,int y)
{
	float pounds;
	pounds=(x*2.2)+(y*2.2/1000);
	return pounds;
}
int main()
{
	int kg,g;
	scanf("%d",&kg);
	scanf("%d",&g);
	
printf("the mass in pounds is %f",to_pounds(kg,g));
	return 0;
}
