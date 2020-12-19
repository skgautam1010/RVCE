#include<stdio.h>


void path(int P[50][50],int n)
{
    int i,j,k;
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(P[i][j]==0)
                {
                    if(P[i][k] && P[k][j])
                    {
                        P[i][j]=1;
                    }
                }
            }
        }
    }

}
void main()
{
    int i,j,n,P[50][50];
    printf("\nEnter the number of Nodes: ");
    scanf("%d",&n);
    printf("\n Enter the adjacency matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&P[i][j]);
        }
    }
    path(P,n);
    printf("\nPath Matrix\n");
    for(i=0;i<n;i++)
    {
        printf("%d|\t",i+1);
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",P[i][j]);
        }
        printf("\n");
    }
}
