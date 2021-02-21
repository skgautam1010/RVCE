#include<stdio.h>
#include<string.h>
int m,n,top=-1,i;
void push(char a[5][10],char e[10])
{
	if(top==n-1)
	{
		printf("stack overflow\n");
	}
	else
	{
		top++;
		//strcpy(a[top],e);
		for(i=top;i<=n-1;i++)
		{
			a[i]=e;
			printf("the element %s is pushed at:%d\n",e,top);
		}

	}
}
void pop(char a[5][10])
{
	 if(top==-1)
	{
		printf("stack underflow\n");
	}
	else
	{
		printf("the element that will be poped is:%s\n",a[top]);
		top--;
		printf("the element is poped\n");
	}
}
void peek(char a[5][10])
{
	if(top==-1)
	{
		printf("stack underflow\n");
	}
	else
	{
	printf("it will show the last entered element\n");
	printf("the last entered element is:%s\n",a[top]);
	}
}
void display(char a[5][10])
{
	if(top==-1)
	{
		printf("stack underflow no strings inside\n");
	}
	else{
		for(i=top;i>-1;i--)
		{
			printf("%s",a[i]);
			printf("\n");
		}
	}
}

void main()
{
	int ch,e[10];
	//printf("enter the size of the rows of the array\n");
	//scanf("%d",&m);
	printf("enter the size of the coloumns of the array\n");
	scanf("%d",&n);
	char a[5][10];
	while(1)
	{
		printf("1-->push\t2-->pop\n3-->peek\t4-->display\n5-->exit\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the string to be pushed\n");
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
				printf("wrong user input\n");
		}
	}
}


