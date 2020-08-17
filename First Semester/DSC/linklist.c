#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*new,*head,*temp;
void create(int a)
{
	new=(struct node*)malloc(sizeof(struct node));
	new->data=a;
	new->next=NULL;
	printf("%d\n",new->data);
	printf("%d\n",new->next);
	if(head==NULL)
	{
		head=new;
		temp=new;
		printf("succesfully created the head node\n");
	}
	else
	{
		temp->next=new;
		temp=new;
		printf("successfuly created new node\n");
	}
}
void display()
{
	struct node *top;
	top=head;
	if(head==NULL)
	{
		printf("the linked list is empty\n");
	}
	else
	{
		while(top!=NULL)
		{
			printf("%d-->",top->data);
			printf("%d-->",top->next);
			top=top->next;
		}
		printf("\n");
	}
}
void main()
{
	int a,ch;
	while(1)
	{
		printf("1-->create\n2-->display\n3-->exit\n");
		printf("enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the element to be inserted\n");
				scanf("%d",&a);
				create(a);
				break;
			case 2:
				display();
				break;
			case 3:
				exit(0);
			default:
				printf("wrong input\n");
		}
	}
}
