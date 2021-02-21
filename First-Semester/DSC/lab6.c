#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*new=NULL,*head=NULL,*temp=NULL;
void create(int a)
{
	new=(struct node*)malloc(sizeof(struct node));
	new->data=a;
	new->next=NULL;
	if(head==NULL)
	{
		head=new;
		temp=new;
		printf("created first node\n");
	}
	else
	{
		temp->next=new;
		temp=new;
		printf("successfully created a node\n");
	}
}
void display()
{
	if(head==NULL)
	{
		printf("list empty\n");
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
void ibegin(int a)
{
	new=(struct node*)malloc(sizeof(struct node));
	new->data=a;
	new->next=NULL;
	if(head==NULL)
	{
		head=new;
		printf("successfully created first node\n");
	}
	else
	{
		new->next=head;
		head=new;
		printf("node created at beggining\n");
	}
}
void iend(int a)
{
	new=(struct node*)malloc(sizeof(struct node));
	new->data=a;
	new->next=NULL;
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=new;
	temp=new;
	printf("node created at end\n");
}
void imid(int a)
{
	int i=1,pos;
	printf("enter the position to insert\n");
	scanf("%d",&pos);
	new=(struct node*)malloc(sizeof(struct node));
        new->data=a;
        new->next=NULL;
	temp=head;
	while(i<pos)
	{
		i++;
		temp=temp->next;
	}
	new->next=temp->next;
	temp->next=new;
	printf("created node at middile\n");
}
void dend()
{
	temp=head;
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=NULL;
	printf("deleted node at end\n");
}
void dbegin()
{
	if(head==NULL)
	{
		printf("list empty\n");
	}
	else
	{
		temp=head;
		head=head->next;
		temp->next=NULL;
		printf("successfully deleted node from beginning\n"); 
	}
}
void dmid()
{
	int i=1,pos;
	printf("enter the position to delete\n");
	scanf("%d",&pos);
	temp=head;
	while(i<pos)
	{
		i++;
		temp=temp->next;
	}
	temp->next=temp->next->next;
	printf("deletion at midile succesfull\n");
}
void main()
{
	int ch,a;
	while(1)
	{
		printf("1-->create\n2-->display\n3-->insert at begining\n4-->insert at middile\n5-->insert at end\n6-->delete at begin\n");
		printf("7-->delete at middile\n8-->delete at end\n9-->exit\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the elements to be inserted\n");
				scanf("%d",&a);
				create(a);
				break;
			case 2:
				display();
				break;
			case 3:
				printf("enter the element to be inserted\n");
				scanf("%d",&a);
				ibegin(a);
				break;
			case 4:
				printf("enter the element to be inserted\n");
				scanf("%d",&a);
				imid(a);
				break;
			case 5:
				printf("enter the element to be inserted\n");
				scanf("%d",&a);
				iend(a);
				break;
			case 6:
				dbegin();
				break;
			case 7:
				dmid();
				break;
			case 8:
				dend();
				break;
			case 9:
				exit(0);
			default:
				printf("wrong input\n");
		}
	}
}
