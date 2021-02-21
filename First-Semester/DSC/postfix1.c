#include<stdio.h>
#include<string.h>
char stack[20]; int top=-1;
void push(char x)
{
	top++;
	stack[top]=x;
	printf("the element is pushed:%d\n",x);
}
int pop()
{
	int a= stack[top--];
	printf("the element from  stack is popped:%d\n",a);
	return a;
}
int main()
{
	char expr[20];
	char *e;
	int num,n1,n2,n3;
	printf("enter the postfix expression\n");
	scanf("%s",expr);
	e=expr;
	printf("expression-->%s\n",e);
	printf("first index--> %c\n",e[0]);
	printf("the ascii value:%d\n",e[0]);
	while(*e!='\0')
	{
		if(putchar(*e))
		{
			num = *e;
			printf("the element is:%c\n",num);
			push(num);
		}
		else
		{
			printf("the element is:%c\n",*e);
			n1=pop();
			n2=pop();
			switch(*e)
			{
				case '+':
					n3=n2+n1;
					break;
				case '-':
					n3=n2-n1;
					break;
				case '*':
					n3=n2*n1;
					break;
				case '/':
					n3=n2/n1;
					break;
				case '^':
					n3=n2^n1;
					break;
			}
			push(n3);
		}
		e++;
	}
	printf("the expression is:%s\n and the result is:%d\n",expr,n3);
return 0;
}
