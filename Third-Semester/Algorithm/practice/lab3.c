#include<stdio.h>
void main()
{
	int n,ar[10][10],indeg[10],flag[10];
	int i,j,count=0;
	printf("Enter the total number of vertices\n");
	scanf("%d",&n);
	printf("ENter the adjacency matrix\n");
	for(i=0;i<n;i++)
	{
		indeg[i]=0;
		flag[i]=0;
		for(j=0;j<n;j++)
		{
			scanf("%d",&ar[i][j]);
			if(i==j)
			{
				if(ar[i][j]!=0)
				{
					printf("Matrix has loop\n");
					exit(0);
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			indeg[i]=indeg[i]+ar[j][i];
		}
	}
	while(count<n)
	{
		for(i=0;i<n;i++)
		{
			if(indeg[i]==0 && flag[i]==0)
			{
				printf("%d->",i);
				flag[i]=1;
				for(j=0;j<n;j++)
				{
					if(ar[i][j]==1)
						indeg[j]--;
				}
			}
		}
		count++;
	}
	printf("\n");
}
