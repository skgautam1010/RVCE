#include<stdio.h>
#define INF 9999
int D[50][50];
void floyd_warshall(int n)
{
	int k,j,i;
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(D[i][k]+D[k][j]<=D[i][j])
				{
					D[i][j]=D[i][k]+D[k][j];
				}
			}
		}
	}
}
void main()
{
    int i,j,n;
    printf("\nEnter the number of vertices: ");
    scanf("%d",&n);
    printf("\nEnter the adjacency matrix\n");
    for(i=0;i<n;i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&D[i][j]);
            if (D[i][j]==0)
            {
                if(i==j)
                {
                    D[i][j]=0;
                }
                else
                {
                    D[i][j]=INF;
                }
            }
        }
    }
    printf("The Adjacency Matrix is\n");
    for(i=0;i<n;i++)
    {
        for ( j = 0; j < n; j++)
        {
            if(D[i][j]==INF)
            {
                printf("INF\t");
            }
            else
            {
                printf("%d\t",D[i][j]);
            }
            
        }
        printf("\n");
        
    }
    floyd_warshall(n);
    printf("\nShortest Distance Matrix\n");
    for(i=0;i<n;i++)
    {
        printf("%d|\t",i+1);
        for(j=0;j<n;j++)
        {
            if(D[i][j]==INF)
            {
                printf("INF\t");
            }
            else
            {
                printf("%d\t",D[i][j]);
            }
            
        }
        printf("\n");
    }
}
