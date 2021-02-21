#include<stdio.h>

int a,b,u,v,i,j,k=1;
int cost[10][10],visited[10]={0};
int min,mincost=0;

void main()
{
	int n;
	printf("enter the number of vertices\n");
	scanf("%d",&n);
	printf("Enter the adjacency matrix\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
			{
				cost[i][j]=999;
			}
		}
	}
	visited[1]=1;
	while(k<n)
	{
		for(i=1,min=999;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(cost[i][j]<min)
				{
					if(visited[i]!=0)
					{
						min=cost[i][j];
						a=u=i;
						b=v=j;
					}
				}
			}
		}
		if(visited[u]==0 || visited[v]==0)
		{
			printf("%d:(%d %d) cost is %d\n",k++,a,b,min);
			mincost +=min;
			visited[b]=1;
		}
		cost[a][b]=cost[b][a]=999;
	}
	printf("Min cost is:%d\n",mincost);
}
