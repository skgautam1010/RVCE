#include<stdio.h>
#include<stdlib.h>
#define MAX 70
int i,j,memory_size,process_memory[MAX];
void main()
{
	char ch='y';
	int block_size[10],bs,tif=0,tbs=0;
	int p=0,n,ef,mp,nob=0,lower_limit,upper_limit,temp,temp1;
	int fragment[20],lowest=9999;
	static int barray[20],parray[20];
	printf("\tenter the total memory space available: ");
	scanf("%d",&memory_size);
	temp=memory_size;
	printf("enter the number of process: ");
	scanf("%d",&n);
	for(i=0;ch=='y';i++)
	{
		printf("\tenter the block size: ");
		scanf("%d",&bs);
		if(bs<=temp)
		{
			block_size[i]=bs;
			temp=temp-block_size[i];
			nob++;
		}
		else
		{
			printf("no more block size can be created\n");
			break;
		}
		printf("to continue press y else n: ");
		scanf(" %c",&ch);
	}
	//printf("using random function to generate memory required by each process:\n");
	//printf("enter the lower limit: ");
	//scanf("%d",&lower_limit);
	//printf("enter the upper limit: ");
	//scanf("%d",&upper_limit);
	for(i=0;i<n;i++)
	{
		//process_memory[i]=(rand()%(upper_limit-lower_limit+1))+lower_limit;
		printf("enter the memory required for process %d: ",i+1);
		scanf("%d",&process_memory[i]);
	}
	printf("\tthe total number of blocks framed in memory is:%d\n",nob);
	for(i=0;i<n;i++)
	{
		for(j=0;j<nob;j++)
		{
			if(barray[j]!=1)
			{
				temp1=block_size[j]-process_memory[i];
				if(temp1>=0)
					if(lowest>temp1)
					{
						parray[i]=j;
						lowest=temp1;
					}
			}
		}
		fragment[i]=lowest;
		barray[parray[i]]=1;
		lowest=10000;
	}
	printf("Process\t\tprocess_size\t\tBlock number\t\tblock_size\t\t\tInternal_Fragmentation\n");
	for(i=0;i<n && parray[i]!=0;i++)
	{
		printf("%d\t\t%d\t\t\t%d\t\t%d\t\t\t%d",i+1,process_memory[i],parray[i],block_size[parray[i]],fragment[i]);
	}
	/*for(i=0;i<n && p<nob;i++)
	{
		printf("P[%d]\t\t%d",i+1,process_memory[i]);
		if(process_memory[i]>block_size[i])
		{
			printf("\t\t\tNO\t\t\t----\n");
		}
		else
		{
			printf("\t\t\tYES\t\t\t%d\n",block_size[i]-process_memory[i]);
			tif=tif+block_size[i]-process_memory[i];
			p++;
		}
	}*/
	/*if(i<n)
	{
		printf("\nmemory is full remaining process cant be accomodated\n");
	}
	for(i=0;i<n;i++)
	{
		tif=tif+fragment[i];
	}
	printf("total internal fragmentation: %d\n",tif);*/
	printf("\nexternal fragmentation: %d\n",temp);
}
