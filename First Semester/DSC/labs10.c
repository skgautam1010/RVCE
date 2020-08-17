#include<stdio.h>
#include<stdlib.h>
int a[20][20],q[10],visited[20],i,j,size,v;
int f=0,r=-1;
void bfs(int v)
{
	q[++r]=v;
	visited[v]=1;
	for(i=1;i<=size;i++)
	{
		for(j=1;j<=size;j++)
		{
			if(a[q[f]][j] && !visited[j])
			{
				bfs(j);
			}
		}
		f++;
	}
}
void main()
{
	printf("enter the total number of nodes\n");
	scanf("%d",&size);
	printf("enter adjacency matrix:\n");
	for(i=1;i<=size;i++)
	{
		q[i]=0;
		visited[i]=0;
		for(j=1;j<=size;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the eneterd matrix is:\n");
	for(i=1;i<size;i++)
	{
		for(j=1;j<=size;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("enter the starting node\n");
	scanf("%d",&v);
	bfs(v);
	printf("reachable nodes are: %d\n",v);
	for(i=1;i<size;i++)
	{
		printf("%d-->",q[i]);
	}
}


