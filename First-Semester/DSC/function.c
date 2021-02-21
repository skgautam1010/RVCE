#include<stdio.h>
int fact(int a)
{
	if(a==0||a==1)
	{
		return 1;
	}
	else
	{
		return(a*fact(a-1));
	}
}
void main()
{
	int n,r;
	printf("enter the number\n");
	scanf("%d\n",&n);
	r=fact(n);
	printf("%d\n",r);
}


