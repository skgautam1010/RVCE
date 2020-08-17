#include<stdio.h>
#include<stdlib.h>
int i,j,n;
int selectionsort(int a[],int n)
{
	int min,temp;
	for(i=1;i<=n-1;i++)
	{
		min=i;
		for(j=i+1;j<=n;j++)
		{
		if(a[i]>a[j])
		{
			min=j;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		}
	}
return 0;
}
int bubblesort(int a[],int n)
{
	int temp;
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
return 0;
}
int insertionsort(int a[],int n)
{
	int key;
	for(i=1;i<=n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0&&a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
}
void main()
{
	int ch;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements in the array\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the elements enterd are:\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
	while(1)
	{
		printf("1-->selection sort\n2-->bubble sort\n3-->insertion sort\n4-->exit\n");
		printf("enter the choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				selectionsort(a,n);
				printf("the sorted elements are:\n");
				for(i=1;i<=n;i++)
				{
					printf("%d\n",a[i]);
				}
				break;
			case 2:
				bubblesort(a,n);
				 printf("the sorted elements are:\n");
				for(i=1;i<=n;i++)
                                {
                                        printf("%d\n",a[i]);
                                }

				break;
			case 3:
				insertionsort(a,n);
				 printf("the sorted elements are:\n");
				for(i=1;i<=n;i++)
                                {
                                        printf("%d\n",a[i]);
                                }

				break;
			case 4:
				exit(0);
			default:
				printf("wrong input\n");
		}
	}
}

