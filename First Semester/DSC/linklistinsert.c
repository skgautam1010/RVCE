#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*new=NULL,*head=NULL;
void begin(int e)
{
	new=(struct node*)malloc(sizeof(struct node));
	new->data=e;
	new->next=NULL;
	if(head==NULL)
	{
		head=new;
	}
	else
	{
		new->next=head;
		head=new;
	}
}
void end(int e)
{
	struct node *temp;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=e;
	new->next=NULL;
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=new;
}
int length()
{
	struct node *temp;
        int count=0;
	temp=head;
                while(temp!=NULL)
                {
                        count++;
                        temp=temp->next;
                }
                return count;
}

void midile(int e)
{
	struct node  *p;

	int pos,len,i=1;
	len=length();
	if(len==0)
	{
		printf("the list is empty\n");
	}
	else
	{
		printf("enter the position to insert\n");
		scanf("%d",&pos);
		new=(struct node*)malloc(sizeof(struct node));
		new->data=e;
		new->next=NULL;
		if(pos>len)
		{
			printf("invalid position\n");
		}
		else
		{
			p=head;
			while(i<pos)
			{
				p=p->next;
				i++;
			}
			new->next=p->next;
			p->next=new;
		}
	}
}

void display()
{
	int len;
	struct node *temp;
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
		len=length();
		printf("\nthe total number of elements in linked list is:%d\n",len);
	}
}
void main()
{
	int e,ch;
	while(1)
	{
		printf("1-->beginning insertion\n2-->end insertion\n3-->middile insertion\n4-->display\n5-->exit\n");
		printf("enter the choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the element to be inserted at the beginning\n");
				scanf("%d",&e);
				begin(e);
				break;
			case 2:
				printf("enter the element to be inserted at the end\n");
                                scanf("%d",&e);
                                end(e);
                                break;
			case 3:
				printf("enter the element to be inserted at the middile\n");
                                scanf("%d",&e);
                                midile(e);
                                break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
			default:
				printf("wrong input\n");
		}
	}
}


