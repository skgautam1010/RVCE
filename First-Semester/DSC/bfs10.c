#include<stdio.h>
#include<stdlib.h>
int a[20][20],visited[20],i,j,q[20],v,size;
int f=0,r=-1;
void bfs(int);
void main()
{
	printf("enter the number of vertex: \n");
	scanf("%d",&size);
	printf("enter the graph in the form of adjacency matrix\n");
	for(i=0;i<size;i++)
	{
		visited[i]=0;
		q[i]=0;
		for(j=0;j<size;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the starting vertex:\n");
	scanf("%d",&v);
	bfs(v);
	for(i=0;i<size;i++)
	{
		printf("%d-->",q[i]);
	}
}
void bfs(int v)
{
	q[++r]=v;
	visited[v]=1;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(a[q[f]][j] && !visited[j])
			{
				bfs(j);
			}
		}
		f++;
	}
}

