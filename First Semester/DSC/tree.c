#include<stdio.h>
void create_tree((int arr[],int n,int root)
{
	int m,n;
	if(arr[i]==root)
	{
		m=arr[i];
void main()
{
	int i,j,n,root;
	printf("enter the total number of nodes");
	scanf("%d",&n);
	int arr[n];
	printf("enter all the values: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	/*for(i=0;i<n;i++)
	{
		printf("%d-->",i);
		//printf("%d-->>",arr[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
        {
                //printf("%d-->",i);
                printf("%d-->>",arr[i]);
        }
	printf("\n");*/
	for(i=0;i<n;i++)
	{
		if(arr[i]==-1)
		{
			root=i;
		}
	}
	create_tree(arr,n,root);

}
