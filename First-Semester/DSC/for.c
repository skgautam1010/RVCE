#include<stdio.h>
void main()
{
	int  i,j;
	printf("looping\n");
	for(i=1;i<=5;i++)
	{
		for(j=1;j<i+1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}

}
