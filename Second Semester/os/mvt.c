#include<stdio.h>
#include<stdlib.h>
#define MAX 70
int i,memory_size,process_memory[MAX];
void main()
{
	int temp,n=0;
	char ch='y';
	printf("enter the total memory space: ");
	scanf("%d",&memory_size);
	temp=memory_size;
	for(i=0;ch=='y';i++,n++)
	{
		printf("enter the memory required for process %d:",i+1);
		scanf("%d",&process_memory[i]);
		if(process_memory[i]<temp)
		{
			printf("memory is allocated for the process %d\n",i+1);
			temp=temp-process_memory[i];
		}
		else
		{
			printf("either the memory requried by the process is large or memory full\n");
			break;
		}
		printf("do you want to continue press(y/n): ");
		scanf(" %c",&ch);
	}
	printf("\ntotal memory available: %d",memory_size);
	printf("\ntotal number of process getting the memory:%d\n",n);
	printf("process\t\tmemory_allocated\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t\t%d\n",i+1,process_memory[i]);
	}
	printf("the total memory allocated to process:%d\n",memory_size-temp);
	printf("external fragmentation:%d\n",temp);
}
