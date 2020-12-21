#include<stdio.h>
int main()

{
double x,y;
double* ptr1;
double* ptr2;
double* ptr3;
scanf("%lf",&x);
scanf("%lf",&y);	
ptr1=&x;
ptr2=&x;
ptr3=&y;
printf("%p",ptr1);
printf("%p",ptr2);
printf("%p",ptr3);
return 0;
}
