#include<stdio.h>
#include<stdlib.h>
#define INFINITY 9999
#define MAX 10

void dijakstra(int ar[MAX][MAX],int n,int startnode);

void main()
{
	int n,startnode;
	int ar[MAX][MAX],i,j;
	printf("Enter the number of vertices\n");
	scanf("%d",&n);
	printf("Enter the adjacency matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&ar[i][j]);
			if(ar[i][j]==0)
			{
				ar[i][j]=INFINITY;
			}
		}
	}
	printf("Enter the source node\n");
	scanf("%d",&startnode);
	dijakstra(ar,n,startnode);
}
void dijakstra(int cost[MAX][MAX],int n,int startnode)
{
	int distance[MAX],pred[MAX],visited[MAX],i,j,mindistance,count=1,nextnode;
	for(i=0;i<n;i++)
	{
		distance[i]=cost[startnode][i];
		pred[i]=startnode;
		visited[i]=0;
	}
	visited[startnode]=1;
	distance[startnode]=1;
	while(count<n-1)
	{
		mindistance=INFINITY;
		for(i=0;i<n;i++)
		{
			if(distance[i]<mindistance && !visited[i])
			{
				mindistance=distance[i];
				nextnode=i;
			}
		}
		visited[nextnode]=1;
		for(i=0;i<n;i++)
		{
			if(!visited[i])
			{
				if(mindistance+cost[nextnode][i]<distance[i])
				{
					distance[i]=mindistance+cost[nextnode][i];
					pred[i]=nextnode;
				}
			}
		}
		count++;
	}
	for(i=0;i<n;i++)
	{
		if(i!=startnode)
		{
			printf("cost of node %d= %d\n",i,distance[i]);
			printf("Path is:%d",i);
			j=i;
			do
			{
				j=pred[j];
				printf("<-%d",j);
			}while(j!=startnode);
		}
		printf("\n");
	}
}
