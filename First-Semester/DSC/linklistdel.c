#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head=NULL,*temp=NULL,*tail=NULL;
void create(int a)
{
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=a;
	new->next=NULL;
	if(head==NULL)
	{
		head=new;
		tail=head;
	}
	else
	{
		tail->next=new;
		tail=new;
	}
}
void display()
{
	if(head==NULL)
	{
		printf("the list is empty\n");
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			printf("%d-->",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
}
void dbegin()
{
	temp=head;
	head=head->next;
	temp->next=NULL;
}
void dend()
{
	temp=head;
	while(temp->next!=tail)
	{
		temp=temp->next;
	}
	temp->next=NULL;
	tail=temp;
}
void dmiddile()
{
	int pos,i;
	printf("enter the position to be deleted\n");
	scanf("%d",&pos);
	temp=head;
	for(i=1;i<pos;i++)
	{
		temp=temp->next;
	}
	temp->next=temp->next->next;
}



void main()
{
	int a,ch;
	while(1)
	{
		printf("1-->create\n2-->display\n3-->deletion beginning\n4-->delete middile\n5-->delete end\n6-->exit\n");
		printf("enter your choice\n");
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
				dbegin();
				break;
			case 4:
				dmiddile();
				break;
			case 5:
				dend();
				break;
			case 6:
				exit(0);
			default:
				printf("wrong user input\n");
		}
	}
}

