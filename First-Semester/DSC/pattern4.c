#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("enter the no of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i+1;j++)
		{
			printf("%d",j);
		}
		for(k=n+1-i;k>0;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
}

