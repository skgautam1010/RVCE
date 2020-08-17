#include<stdio.h>
#include<string.h>
void main()
{
	int i,n,e,pos,number=0,ar[20],duplicate=0,j;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("entering the values of array\n");
	for(i=0;i<n;i++)
	{
		printf("the number is entered at:%d\n",i+1);
		scanf("%d",&ar[i]);
	}
	printf("printing array elements\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",ar[i]);
	}
	printf("enter the element to be inserted\n");
	scanf("%d",&e);
	printf("enter the position where to enter\n");
	scanf("%d",&pos);
	for(i=n-1;i>=pos;i--)
	{
		ar[i+1]=ar[i];
	}
	ar[pos]=e;
	n=n+1;
	for(i=0;i<n;i++)
	{
		printf("the element after entering is:%d\n",ar[i]);
	}

	/*for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(ar[i]==ar[j]&&i!=j)
			{
				duplicate=1;
			}
		}
	}
	/*if(duplicate==1)
	{
		printf("duplicate number found\n");
	}
	else
	{
		printf("no duplicate number\n");
	}

	/*for(i=0;i<n;i++)
	{
		if(ar[i]!=large)
		{
			if(ar[i]>second_large)
			{
				second_large=ar[i];
			}
		}
	}
	printf("the largest value is:%d\n",large);
	printf("the second largest value is:%d\n",second_large);*/
}

