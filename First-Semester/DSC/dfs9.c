#include<stdio.h>
#include<stdlib.h>
int a[20][20],visited[20],i,j,v,size,count;
void dfs(int);
void main()
{
	printf("enter the total vertex:\n");
	scanf("%d",&size);
	printf("enter the data in form of adjacency matrix;\n");
	for(i=1;i<=size;i++)
	{
		visited[i]=0;
		for(j=1;j<=size;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the starting vertex\n");
	scanf("%d",&v);
	dfs(v);
	/*for(i=1;i<=size;i++)
		if(visited[i])
			count++;
			if(count==size)
			printf("dfs connection:\n");
			else
			printf("not a dfs connection\n");*/
}
void dfs(int v)
{
	int i;
	visited[v]=1;
	for(i=1;i<=size;i++)
	{
		if(visited[i]==0 && a[v][i]==1)
		{
			printf("dfs is: %d-->%d\n",v,i);
			dfs(i);
		}
	}
}
