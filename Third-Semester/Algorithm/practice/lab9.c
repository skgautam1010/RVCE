#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
int w[50],n,inc[50],total=0,sum;

int promising(int i,int wt,int total)
{
	return (((wt+total)>=sum)&&((wt==sum)||((wt+w[i+1])<=sum)));
}
int sumset(int i,int wt,int total)
{
	int j;
	if(promising(i,wt,total))
	{
		if(wt==sum)
		{
			for(j=0;j<=i;j++)
			{
				if(inc[j])
				{
					printf("%d\t",w[j]);
				}
			}
			printf("\n");
		}
		else
		{
			inc[i+1]=TRUE;
			sumset(i+1,wt+w[i+1],total-w[i+1]);
			inc[i+1]=FALSE;
			sumset(i+1,wt,total-w[i+1]);
		}
	}
}
void main()
{
	printf("enter the total numbers: ");
	scanf("%d",&n);
	printf("Enter the numbers\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&w[i]);
		total=total+w[i];
	}
	printf("\nEnter the sum to be formed: ");
	scanf("%d",&sum);
	if(total<sum)
	{
		printf("Subset sum is not possible");
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			inc[i]=0;
		}
		printf("\nThe solution using backtracking is\n");
		sumset(-1,0,total);
	}
}


