//Searching Technique Using Arrays -BINARY/LINNEAR
#include<stdio.h>
#include<stdlib.h>
int n,i,j,mid,l,h,b,c,f=0,found=0,key,e;
int linsearch(int a[],int key)
{
	for(i=0;i<=n;i++)
	{
		if(a[i]==key)
		{
			found=1;
			printf("the element found is:%d\n",a[i]);
			return found;
		}
	}
return 0;
}
int binsearch(int a[],int e)
{
	l=0;h=n-1;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(a[mid]==e)
		{
			f=1;
			return f;
		}
		else if(a[mid]<e)
		{
			l=mid+1;
		}
		else
		{
			h=mid-1;
		}
	}
return 0;
}
void main()
{
	int ch;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements in the array\n");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the values entered are:\n");
	for(i=0;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
	while(1)
	{
		printf("1-->linnear\n2-->binary\n3-->exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the element to be searched\n");
          			scanf("%d",&key);
         			b=linsearch(a,key);
         			if(b==1)
       				{
        				printf("the element is found at:%d\n",i+1);
        			}
        			else
      				{
             				printf("the element could not be found\n");
       				}
				break;
			case 2:
				printf("enter the element to be searched\n");
				scanf("%d",&e);
				c=binsearch(a,e);
				if(c==1)
				{
					printf("the element is found at :%d\n",mid+1);
				}
				else
				{
					printf("not found\n");
				}
				break;
			case 3:
				exit(0);
			default:
				printf("wrong input\n");
		}
	}
}
