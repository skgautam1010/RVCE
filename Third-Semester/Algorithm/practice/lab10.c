#include<stdio.h>
#include<stdlib.h>

int a[50],count=0;
int place(int pos)
{
	for(int i=1;i<pos;i++)
	{
		if((a[i]==a[pos])||(abs(a[i]-a[pos]))==(abs(i-pos)))
		{
			return 0;
		}
	}
	return 1;
}
void print(int n)
{
	count++;
	printf("Total Solution: %d\n",count);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i]==j)
			{
				printf("Q\t");
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}
void queen(int n)
{
	int k=1;
	a[k]=0;
	while(k!=0)
	{
		a[k]=a[k]+1;
		while(a[k]<=n && !place(k))
		{
			a[k]++;
		}
		if(a[k]<=n)
		{
			if(k==n)
			{
				print(n);
			}
			else
			{
				k++;
				a[k]=0;
			}
		}
		else
		{
			k--;
		}
	}
}

void main()
{
	int n;
	printf("Enter the number of queens: ");
	scanf("%d",&n);
	queen(n);
	printf("Total Solution: %d\n",count);
}
