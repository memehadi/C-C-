#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	printf("%d\n",a);
	int*ptr_a;
	ptr_a=&a;
	printf("the adress contained is %p\n",&ptr_a);
	a=(*ptr_a)+5;
		printf("the new value is%d\n",a);
	printf("the adress contained is %p\n",ptr_a);	
	return 0;
}
