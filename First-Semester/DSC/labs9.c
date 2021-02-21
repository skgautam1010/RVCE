#include<stdio.h>
#include<stdlib.h>
int a[20][20],i,j,visited[10],v,n;
void dfs(int v)
{
	int i;
	visited[v]=1;
	//printf("%d-->",v);
	for(i=1;i<=n;i++)
	{
		if(visited[i]==0 && a[v][i]==1)
		{
			printf("dfs is : %d-->%d\n",v,i);
			dfs(i);
		}
	}
}
void main()
{
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the adjacency matrix\n");
	for(i=1;i<=n;i++)
	{
		visited[i]=0;
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("entered matrix is\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("enter the starting vertex\n");
	scanf("%d",&v);
	dfs(v);
}

