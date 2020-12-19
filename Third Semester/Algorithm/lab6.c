#include<stdio.h>
#include<stdlib.h>

int max(int a,int b)
{
    return (a>b)?a:b;
}


int knapsack(int n,int wt[],int val[],int m)
{
    int i,j,k[n+1][m+1];
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
            if(i==0 || j==0)
            {
                k[i][j]=0;
            }
            else if(wt[i-1]<=j)
            {
                k[i][j]=max(val[i-1]+k[i-1][j-wt[i-1]],k[i-1][j]);
            }
            else
            {
                k[i][j]=k[i-1][j];
            }

        }
    }

    printf("\n\t\t\tPROFIT MATRIX\t\t\t\n");
    printf("\n*********************************************************************************\n");
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
            printf("%d\t",k[i][j]);
        }
        printf("\n");
    }
    printf("\n***********************************************************************************\n");
    return k[n][m];
}

int main()
{
    int n,m,wt[50],val[50],sum=0;
   do
   {
    	printf("\nEnter the total number of items: ");
    	scanf("%d",&n);
    	printf("\n Enter the size of bag: ");
    	scanf("%d",&m);
    }while(n<0);
    printf("\nEnter the values and weights of the items\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&val[i],&wt[i]);
	sum=sum+wt[i];
    }
    if(sum<m)
    {
	printf("Knapsack capacity is more than the collective weights all the items will be inserted\n");
	exit(0);
    }
    int result=knapsack(n,wt,val,m);
    printf("\nThe total profit is: %d\n",result);
    return 0;
}
