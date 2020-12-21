#include<stdio.h>
#define min(x,y,z) ((x<=y&&x<=z)? (x):(y<=x&&y<=z)? (y):(z))
#define max(x,y,z) ((x>=y&&x>=z)? (x):(y>=x&&y>=z)? (y):(z))
#define middle(x,y,z) ( ((float)max(x,y,z)+min(x,y,z))/2) 
int main()
{
int x,y,z;
scanf("%d %d %d",&x,&y,&z);
printf("max= %d",max(x,y,z));
printf("min= %d",min(x,y,z));
printf("middle= %.6f",middle(x,y,z));
return 0;
}
