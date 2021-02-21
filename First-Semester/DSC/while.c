#include<stdio.h>
void main()
{
	int i=1,n,t;
	printf("enter any number\n");
	scanf("%d",&n);
	while(i<=10)
	{
		t=n*i;
		i++;
		printf("%d",n);
		printf("*");
		printf("%d",i-1);
		printf("=");
		printf("%d\n",t);
	}
}

