#include<stdio.h>
#include<stdlib.h>
#define MAX 70
int i,memory_size,process_memory[MAX];
void mft()
{
	int block_size,tif=0;
	int p=0,n,ef,nob,lower_limit,upper_limit;
	printf("\tenter the total memory space available: ");
	scanf("%d",&memory_size);
	printf("\tenter the block size: ");
	scanf("%d",&block_size);
	printf("\t enter the number of process: ");
	scanf("%d",&n);
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
	nob=memory_size/block_size;
	ef=memory_size-(block_size*nob);
	printf("\tthe total number of blocks framed in memory is:%d\n",nob);
	printf("Process\t\tMemory_Required\t\tAllocated\t\tInternal_Fragmentation\n");
	for(i=0;i<n && p<nob;i++)
	{
		printf("P[%d]\t\t%d",i+1,process_memory[i]);
		if(process_memory[i]>block_size)
		{
			printf("\t\t\tNO\t\t\t----\n");
		}
		else
		{
			printf("\t\t\tYES\t\t\t%d\n",block_size-process_memory[i]);
			tif=tif+block_size-process_memory[i];
			p++;
		}
	}
	if(i<n)
	{
		printf("\nmemory is full remaining process cant be accomodated\n");
	}
	printf("total internal fragmentation: %d\n",tif);
	printf("external fragmentation: %d\n",ef);
}
void mvt()
{
	int temp,n;
	char ch='y';
	printf("enter the total memory space: ");
	scanf("%d",&memory_size);
	temp=memory_size;
	printf("enter the number of process: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the memory required for process %d: ",i+1);
		scanf("%d",&process_memory[i]);
	}
	for(i=0;i<n;i++)
	{
		if(process_memory[i]<=temp)
		{
			printf("memory is allocated for the process %d\n",i+1);
			temp=temp-process_memory[i];
		}
		else
		{
			printf("process %d cant be allocated because of insufficient memory\n",i+1);
		}
	}
	printf("the total memory allocated to process:%d\n",memory_size-temp);
	printf("external fragmentation:%d\n",temp);
}
void main()
{
	int ch;
	while(1)
	{
		printf("1-->MFT\n2-->MVT\n3-->EXIT\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				mft();
				break;
			case 2:
				mvt();
				break;
			case 3:
				exit(0);
		}
	}
}
