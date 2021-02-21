#include<stdio.h>

int max(int a,int b)
{
	return (a>b)?a:b;
}
int knapsack(int n,int m,int wt[],int val[])
{
	int i,j;
	int k[n+1][m+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(i==0 || j==0)
			{
				k[i][j]=0;
			}
			else if(wt[i-1]<=j)
			{
				k[i][j]=max(k[i-1][j],val[i-1]+k[i-1][j-wt[i-1]]);
			}
			else
			{
				k[i][j]=k[i-1][j];
			}
		}
	}
	printf("Path matrix\n");
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			printf("%d\t",k[i][j]);
		}
		printf("\n");
	}
	return k[n][m];
}
void main()
{
	int n,m,wt[50],val[50];
	printf("Enter the number of items\n");
	scanf("%d",&n);
	printf("\n Enter the size of bag: ");
    	scanf("%d",&m);
	printf("enter the val and weight\n");
	for(int i=0;i<n;i++)
    	{
        	scanf("%d %d",&val[i],&wt[i]);
    	}
	int result=knapsack(n,m,wt,val);
	printf("result=%d\n",result);
}
