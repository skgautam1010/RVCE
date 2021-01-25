#include<stdio.h>
#include<stdlib.h>
int a[20][20],q[20],visited[20],size,stack[50];
void dfs(int);
int main()
{
	int i,j,vertex,count=0;
	printf("enter the no of nodes in the graph\n");
	scanf("%d",&size);
	printf("enter the adjacency matrix:\n");
	for(i=1;i<=size;i++)
	{
		visited[i]=0;
		for(j=1;j<=size;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the adjacency matrix given is\n");
	for(i=1;i<=size;i++)
	{
		for(j=1;j<=size;j++)
		{
			printf("%d",a[i][j]);
		}
	printf("\n");
	}
	printf("enter the starting node for depth first search:\n");
	scanf("%d",&vertex);
	dfs(vertex);
	for(i=1;i<=size;i++)
		if(visited[i])
			count++;
			if(count==size)
			printf("Dfs \n");
			else
			printf("no dfs connection\n");
return 0;
}
void dfs(int v)
{
	int i;
	visited[v]=1;
	for(i=1;i<=size;i++)
	{
		if(a[v][i]==1&&visited[i]==0)
		{
			printf("dfs is:%d->%d\n",v,i);
			dfs(i);
		}
	}
}
