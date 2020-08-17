#include<stdio.h>
#include<stdlib.h>
int n;int front=-1;
int rear=-1;
void enqueue(int a[],int e)
{
	if(rear==n-1)
	{
		printf("queue full\n");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		rear++;
		a[rear]=e;
		printf("the element %d is inserted at:%d\n",e,rear);
	}
}
void dequeue(int a[])
{
	if(rear==-1 || front>rear)
	{
		printf("queue empty\n");
	}
	else
	{
		printf("the element that is removed is:%d\n",a[front]);
		front++;
	}
}
void display(int a[])
{
	int i;
	if(rear==-1 || front>rear)
	{
		printf("queue empty\n");
	}
	else
	{
		printf("total elements in queue:\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d\n",a[i]);
		}
	}
}

void main()
{
	int ch,e;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	while(1)
	{
		printf("1-->enqueue\n2-->dequeue\n3-->display\n4-->exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the element to be enetered:\n");
				scanf("%d",&e);
				enqueue(a,e);
				break;
			case 2:
				dequeue(a);
				break;
			case 3:
				display(a);
				break;
			case 4:
				exit(0);
			default:
				printf("wrong user input\n");
		}
	}
}
