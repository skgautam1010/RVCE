#include<stdio.h>
#include<stdlib.h>
int n;
int front=-1;
int rear=-1;
int a[30];
void enqueue(int x)
{
	if((rear+1)%n==front)
	{
		printf("queue overflow\n");
	}
	else if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
		a[rear]=x;
		printf("the element %d is inserted:\n",x);
	}
	else
	{
		rear=(rear+1)%n;
		a[rear]=x;
		printf("the element %d is inserted:\n",x);
	}
}
void dequeue()
{
	if(front==-1&&rear==-1)
	{
		printf("queue underflow\n");
	}
	else if(front==rear)
	{
		printf("the element %d is deleted:\n",a[front]);
		front=-1;
		rear=-1;
	}
	else
	{
		printf("the element %d is deleted:\n",a[front]);
		front=(front+1)%n;
	}
}
void display()
{
	int i;
	if(front==-1&&rear==-1)
	{
		printf("queue underflow\n");
	}
	else
	{
		i=front;
		printf("the elements are:\n");
		while(i!=rear)
		{
			printf("%d\n",a[i]);
			i=(i+1)%n;
		}
		printf("%d\n",a[rear]);
	}
}
void main()
{
	int ch,e;
	printf("enter the size of array\n");
	scanf("%d",&n);
	//int a[n];
	while(1)
	{
		printf("1-->insertion\n2-->deleteion\n3-->display\n4-->exit\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the element to be inserted into the array\n");
				scanf("%d",&e);
				enqueue(e);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("wrong user input\n");
		}
	}
}
