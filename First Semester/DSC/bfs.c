#include<stdio.h>
int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1;
int bfs(int v)
{
	for(i=1;i<=n;i++)
	{
		if(a[v][i]==1 && !visited[i])
		{
			q[++r]=i;
		}
	}
	if(f<=r)
	{
		visited[q[f]]=1;
		bfs(q[f++]);
	}
return 0;
}
void main()
{
	int v;
	printf("enter the number of vertex:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		q[i]=0;
		visited[i]=0;
	}
	printf("enter graph data in matrix form:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the adjacency matrix entered is:\n");
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
	bfs(v);
	printf("the nodes which are reacheable are:\n");
	for(i=1;i<=n;i++)
	{
		if(visited[i])
		{
			printf("%d->\n",i);
		}
		else
		{
			printf("bfs not possible\n");
		}
	}
}

