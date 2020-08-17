#include<stdio.h>
int i,n,b,found=0,key;
int seq(int a[],int key)
{
        for(i=0;i<=n;i++)
        {
                if(a[i]==key)
                {
                        found=1;
                        return found;
                }
        }
        return 0;
}

void main()
{
	printf("enter the size of the array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the value in array\n");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("print the value of the array\n");
	for(i=0;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("enter the element to be searched\n");
	scanf("%d",&key);
	b=seq(a,key);
	if(b==1)
	{
		printf("element found at position:%d\n",i+1);
	}
	else
	{
		printf("element not found\n");
	}
}

