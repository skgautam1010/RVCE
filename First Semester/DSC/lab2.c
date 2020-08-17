//operations on string based stack
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top=-1;
int n;
void push(char a[10][20] ,char e[10] );
void pop(char a[10][20]);
void peek(char a[10][20]);
void display(char a[10][20]);
void main()
{
	char a[10][20],e[10];
	int ch;
	printf("enter the size of array\n");
	scanf("%d",&n);
	while(1)
	{
		printf("1-->push\n2-->pop\n3-->peek\n4-->display\n5-->exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the element to be pushed\n");
				scanf("%s",e);
				push(a,e);
				break;
			case 2:
				pop(a);
				break;
			case 3:
				peek(a);
				break;
			case 4:
				display(a);
				break;
			case 5:
				exit(0);
			default:
				printf("wrong input\n");
		}
	}
}
void push(char a[10][20],char e[])
{
	if(top==n-1)
	{
		printf("stack overflow\n");
	}
	else 
	{
		top++;
		strcpy(a[top],e);
		printf("the element %s is pushed at:%d\n",a[top],top);
	}
}
void pop(char a[10][20])
{
	if(top==-1)
	{
		printf("stack underflow\n");
	}
	else
	{
		printf("the element that is popped is:%s\n",a[top--]);
	}
}
void display(char a[10][20])
{
	int i;
	if(top==-1)
	{
		printf("stack underflow\n");
	}
	else
	{
		for(i=top;i>-1;i--)
		{
			printf("%s\n",a[i]);
		}
	}
}
void peek(char a[10][20])
{
	if(top==-1)
	{
		printf("stack underflow\n");
	}
	else
	{
		printf("the last element entered is:%s\n",a[top]);
	}
}

