 #include<stdio.h>
 int main()
 {
 double sum=0;
 char c;
 	int n,i;
    scanf("%c",&c);
 	scanf("%d",&n);
 	double array[100];
 	for(i=0;i<n;i++)
	 {
	 scanf("%lf",&array[i]);
	 }
	 	for(i=0;i<n;i++)
	 	{
	 		printf("%lf",array[i]);
		 }
 
 if(c=='s')
 {
 	//int i;
 	
 	for(i=0;i<n;i++)
	 {
	 	sum=sum +array[i];
    }
    printf("sum is %lf",sum);
	}	
 else if (c=='p')
 {
 for(i=0;i<n;i++)
	 	{
	 		printf("%lf",array[i]);
		 }
 }
 else if (c=='t')
  {
  		for(i=0;i<n;i++)
  		{
  			array[i]=array[i]*(9/5)+32;
  			printf("%lf",array[i]);
  		}
  	 }
  	 else
	   
	   {
	   		for(i=0;i<n;i++)
	 {
	 	sum=sum +array[i];
    }
	
	   	printf("the average temp is %lf",sum/n);
	   }
  }
 
