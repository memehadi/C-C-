#include<stdio.h>
int i,j;
float Sum;
float sum(float element[])
{
	 Sum=0;
	for (j=0;j<i;j++){
		Sum=Sum+element[j];
	}                              //eski correct the avg value bruh!!!!!!!!!!!
	return Sum;
}
float average(float element[])
{
Sum=0;
	float avg;
	for (j=0;j<i;j++){
		Sum=Sum+element[j];
	}
	avg=Sum/i;
	return avg;
}
int main()
{

float array[10];
for (i=0;i<10;i++)
{
	scanf("%f",&array[i]);
	if(array[i]==-98)
{
		break;}
}
printf("the sum is%lf ",sum(array));
printf(" the average is %f",average(array));
return 0; 	
}
