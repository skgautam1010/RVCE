#include<stdio.h>
void main()
{
	int i,n1,n2,m,ar1[10],ar2[10],ar3[20];
	printf("number of elements in first array\n");
	scanf("%d",&n1);
	printf("enter the elements in first array\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&ar1[i]);
	}
	printf("enter the number of elements in array\n");
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	{
		scanf("%d",&ar2[i]);
	}
	printf("printing the elements of both the array\n");
	for(i=0;i<n1;i++)
	{
		printf("%d\n",ar1[i]);

	}
	for(i=0;i<n2;i++)
	{
		printf("%d\n",ar2[i]);
	}
	m=n1+n2;
	for(i=0;i<n1;i++)
	{
		ar3[i]=ar1[i];
	}
	for(i=0;i<n2;i++)
	{
		ar3[i]=ar2[i];
	}
	for(i=0;i<m;i++)
	{
		printf("%d\n",ar3[i]);

	}
}

