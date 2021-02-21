#include<stdio.h>
void main()
{
	int a, b, c;
	printf("finding the largest no between three no\n");
	printf("enter the value for a , b &c\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b)
	{
		printf("a is greatest\n");
	}
	else if(b>c)
	{
		printf("b is the greatest\n");
	}
	else
	{
		printf("c is the greatest\n");
	}
}

