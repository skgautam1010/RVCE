#include<stdio.h>
void swap(int a,int b)
{
	int temp=a;
	b=a;
	a=temp;
}
void bubblesort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
int printarray(int arr[],int size)
{
	int i;
	for(i=0;i<=size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
return 0;
}

int main()
{
	int arr[]={64,34,25,12,22,90};
	int n= sizeof(arr)/sizeof(arr[0]);
	bubblesort(arr,n);
	printf("sorted elements");
	printarray(arr,n);
return 0;
}
