#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node* link;
};
int main()
{
	int n;
	char a;
	struct node* A;
//	struct node* temp=(struct node*) malloc (sizeof (node));
	A=NULL;
	while(1)
	{
		scanf("%c",&a);
		if(a=='b')
		{
//	scanf("%d",&n);
			struct node* temp=(struct node*) malloc (sizeof (struct node));
			scanf("%d",&n);
//	struct node* temp=(struct node*) malloc (sizeof (node));
			temp-> data=n;
			temp-> link=A;
			A=temp;
		}
		else if (a=='e')
		{
			scanf("%d",&n);
			struct node* temp2=(struct node*) malloc (sizeof (struct node));
			temp2->data=n;
			struct node* temp1=A;
			while(temp1->link!=0)
			{
				temp1=temp1->link;
			}	
			temp1->link=temp2;
			temp2->link=NULL;
		}
		else if (a=='p')
		{
			struct node* temp1=A;
			while(temp1!=0)
			{
			printf("%d ",temp1->data);
			temp1=temp1->link;
			}	 
		}
			else if (a=='r')
		{
			A=A->link;
		}
			else if (a=='f')
		{
			free(A);
			printf("process ended");
			break;
		}
		
		else
		{
//	printf("u trippin ma G!!");
		}

	}				
}	

