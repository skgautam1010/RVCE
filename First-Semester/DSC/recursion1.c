#include<stdio.h>
int hello(int a)
{
	if (a==0)
	{
	return 0;
	}
	else
	{
printf("the value of a:%d\n",a);
	hello(a-1);
	}
}
int main()
{
	int a=10;
	printf("hello world\n");
hello(a);
}

