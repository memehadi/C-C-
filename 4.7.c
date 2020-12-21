#include<stdio.h>
void diagonals(int i,int j,int matrix[][],int n)
{
	
for(i=1;i<n;i++)
{
	for(j=0;j<(n-2);j++)
	{
		printf("%d ", matrix[i][j]);
	}	
	
}
int main()
{
	int n,i,j;
	int matrix[30][30];
  
	//int c[30];
scanf("%d",&n);
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",& matrix[i][j]);
	}
}

for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		printf("%d ", matrix[i][j]);
	}
printf("\n"	);
}
  
diagonals( i, j, matrix,n);

}
