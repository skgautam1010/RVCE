#include<stdio.h>
int b,key,n,i,j,mid,found=0;
int binary(int a[],int key)
{
	int l=0,h=n-1;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(a[mid]==key)
		{

			found=1;
			return found;
		}
		else if(a[mid]<key)
		{
			l=mid+1;
		}
		else
		{
			h=mid-1;
		}
	}
	return -1;
}
int main()
{
	int temp;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the  elements in the array\n");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("see the sorted  elements\n");
	for(i=0;i<=n-1;i++)
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
	for(i=0;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("enter the element to be searched\n");
	scanf("%d",&key);
	b=binary(a,key);
	if(b==1)
	{
		printf("the element is found at:%d\n",mid+1);
	}
	else
	{
		printf("the element is not found\n");
	}
	return -1;
}

