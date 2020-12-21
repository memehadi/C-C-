#include<stdio.h>
#include<string.h>
void capital(char c[])
{
	int i;
	for (i=0;i<strlen(c);i++)
		{
			if (c[i]>='a'&& c[i]<='z')
				{
					c[i]=c[i]-32;
				}
		}
		printf(" the upper is %s",c);
}
void small(char c[])
{
	int i;
	for (i=0;i<strlen(c);i++)
		{
			if (c[i]>='A'&& c[i]<='Z')
				{
					c[i]=c[i]+32;
				}
		}
		printf(" the lower is %s",c);
}
void mixed(char c[])
{
	int i;
	for (i=0;i<strlen(c);i++)
		{
			if (c[i]>='a'&& c[i]<='z')
				{
					c[i]=c[i]-32;
				}
			else if (c[i]>='A'&& c[i]<='Z')
				{
					c[i]=c[i]+32;
				}
		}
		printf(" the mixed is %s",c);
}
void end(char c[])
{
	exit(1);
}

//function pointer array declaration
//void (*func[4])(char str[]) = { capital };
int main()
{
	void ((*func)[4])(char str[]) = { capital,small,mixed,end };
	 char c[100];
	 fgets(c,sizeof(c),stdin);
	 int i, n;
//	 scanf("%d",&n);
	 for(i=0;i<strlen(c);i++)
		{
			if(c[i]=='\n')
				{
				c[i]='\0';
				}
		}
while (1)
		{
			 scanf("%d",&n);
			 n=n-1;
			(*func[n])(c);
		}
}
