#include<stdio.h>
#include<stdlib.h>
int a[10][10],q[10],i,j,visited[10],v,size;
int f=0,r=-1;
void bfs(int);
void main()
{
	printf("enter the size of matrix:\n");
	scanf("%d",&size);
	printf("enter the adjacency matrix\n");
	for(i=1;i<=size;i++)
	{
		q[i]=0;
		visited[i]=0;
		for(j=1;j<=size;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the starting vertex: \n");
	scanf("%d",&v);
	bfs(v);
	printf("the nodes which are reachable ar:%d\n",v);
	for(i=1;i<=size;i++)
	{
		printf("%d-->",q[i]);
	}
}
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
				//q[++r]=j;
				//visited[j]=1;
				bfs(j);
			}
		}
		f++;
	}
}

