#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
int main()
{
	int n,i;
	printf("enter the size: ");
	scanf("%d",&n);
	int fib[n];
	fib[0]=0;
	fib[1]=1;
	pid_t pid=fork();
	if(pid<0)
	{
		printf("\nchild process cant be created\n");
	}
	else if(pid==0)
	{
		if(n<0)
		{
			printf("cannot generate fibbonacci\n");
		}
		else
		{
			printf("%d\n",fib[0]);
			printf("%d\n",fib[1]);
			for(i=2;i<=n;i++)
			{
				fib[i]=fib[i-1]+fib[i-2];
				printf("%d\n",fib[i]);
			}
		}
	}
	else
	{
		waitpid(pid,NULL,0);
		printf("the parent process ends: %d",pid);
	}
	return 0;
}

