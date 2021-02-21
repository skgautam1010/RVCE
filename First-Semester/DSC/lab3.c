#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int stack[20],top=-1;
void push(int x)
{
	stack[++top]=x;
	printf("the operand %d is pushed into stack:\n",x);
}
int pop()
{
	int x;
	x=stack[top];
	printf("the operand %d is popped out:\n",x);
	top--;
	return x;
}
void main()
{
	char expr[20];
	char *e;
	int num,n1,n2,n3;
	printf("enter the postfix expression\n");
	scanf("%s",expr);
	e=expr;
	printf("the entered expression is:%s\n",e);
	while(*e!='\0')
	{
		if(isdigit(*e))
		{
			num=(*e)-48;
			push(num);
		}
		else
		{
			switch(*e)
			{
				//n1=pop();
				//n2=pop();
				case '+':
					n1=pop();
                                	n2=pop();
					n3=n2+n1;
					break;
				case '-':
					n1=pop();
                             		n2=pop();
					n3=n2-n1;
					break;
				case '*':
					n1=pop();
                                	n2=pop();
					n3=n2*n1;
					break;
				case '/':
					n1=pop();
                                	n2=pop();
					n3=n2/n1;
					break;
			}
			push(n3);
		}
		e++;
	}
	if(top>0)
	{
		printf("the expression is not valid\n");
	}
	else
	{
		printf("the result is :%d\n",n3);
	}
}
