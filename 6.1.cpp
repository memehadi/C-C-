#include<stdio.h>
#define swap(a,b,type) {type c;c=a;a=b;b=c; }

int main()
{
	int x,y;
	float m,n;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%f",&m);
	scanf("%f",&n);
	swap(x,y,int)
	swap(m,n,float)
	printf("%d %d",x,y);
	printf("%.6f %.6f",m,n);

}
