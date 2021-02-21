#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	int *a=(int*) malloc(n*sizeof(int));
	printf("enter the elements in the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the elements entered are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d:%d\n",a[i],a+i);
	}
	int *b=(int*) realloc(a,2*n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("%d:%d\n",b[i],b+i);
	}
	free(a);
	free(b);
	//a=NULL;
	printf("array after freeing memory\n");
	for(i=0;i<n;i++)
	{
		printf("%d:%d\n",a[i],a+i);
	}
}

