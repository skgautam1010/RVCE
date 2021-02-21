#include<stdio.h>
int G[20][20],top=-1,visited[10],n,st[40];
void dfs(int);
void print(int n)
{
	int i;
	if(top==-1)
	{
		printf("Stack Underflow\n");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			printf("%d\n",st[top--]);
		}
	}
}
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
	print(n);
}
void dfs(int v)
{
	int i;
	//printf("%d\n",v);
	visited[v]=1;
	for(i=0;i<n;i++)
	{
		if(!visited[i] && G[v][i]==1)
		{
			//printf("%d-->%d\t",v,i);
			if(top==n-1)
			{
				printf("Stack Overflow\n");
			}
			else
			{
				top++;
				st[top]=i;
				dfs(i);
			}
		}
	}
}


