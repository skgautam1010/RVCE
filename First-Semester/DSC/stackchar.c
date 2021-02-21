#include<stdio.h>
int ch,n,i,e,top=-1;
void push(char a[],char e)
{
	if(top==n-1)
	{
		printf("stack full\n");
	}
	else
	{
		top++;
		a[top]=e;
		printf("the element %c is pushed at:%d\n",e,top);
	}
}
void pop(char a[])
{
	if(top==-1)
	{
		printf("stack empty\n");
	}
	else{
		top--;
		printf("the element is poped\n");
		printf("the top position is:%d\n",top);
		}
}
void display(char a[])
{
	 if(top==-1)
        {
                printf("stack empty\n");
        }
        else{

	for(i=top;i>=0;i--)
	{
		printf(" %c\n",a[i]);
	}
	}
}
void peek(char a[])
{
	 if(top==-1)
        {
                printf("stack empty\n");
        }
        else{

	printf("the topmost element is  %c\n",a[top]);
}
}

void main()
{
	printf("enter the size of the array\n");
	scanf("%d",&n);
	char a[n];
	while(1)
	{

		printf("1-->push\t2-->pop\n3-->peek\t4-->dispay\n5-->exit\n");
		printf("enter the choice\n");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
				printf("enter the element to pushed\n");
				scanf(" %c",&e);
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

