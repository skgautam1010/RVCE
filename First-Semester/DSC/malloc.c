#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	int *a=(int*) malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		a[i]=i+1;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	free(a);
	printf("array after freeing memory\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

