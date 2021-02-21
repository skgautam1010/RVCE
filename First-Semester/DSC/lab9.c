#include<stdio.h>
int G[20][20],visited[10],n;
void dfs(int);
void main()
{
	int i,j,v;
	printf("enter the total number of vertex: ");
	scanf("%d",&n);
	printf("enter the adjacency matrix: \n");
	for(i=0;i<n;i++)
	{
		visited[i]=0;
		for(j=0;j<n;j++)
		{
			scanf("%d",&G[i][j]);
		}
	}
	printf("enter the starting vertex:  ");
	scanf("%d",&v);
	dfs(v);
}
void dfs(int v)
{
	int i;
	printf("%d\n",v);
	visited[v]=1;
	for(i=0;i<n;i++)
	{
		if(!visited[i] && G[v][i]==1)
		{
			printf("%d-->%d\t",v,i);
			dfs(i);
		}
	}
}


