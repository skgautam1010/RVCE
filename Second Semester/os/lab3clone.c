#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<unistd.h>
int fib(int);
int main()
{
	int n,i,f;
	printf("enter the size: ");
	scanf("%d",&n);
	//int fib[n];
	//fib[0]=0;
	//fib[1]=1;
	pid_t pid=fork();
	if(pid<0)
	{
		printf("\nchild process cant be created\n");
	}
	else if(pid==0)
	{
		if(n<0)
		{
			printf("cannot generate fibonnaci in child process\n");
		}
		else
		{
			/*printf("%d\n",fib[0]);
			printf("%d\n",fib[1]);
			for(i=2;i<=n;i++)
			{
				fib[i]=fib[i-1]+fib[i-2];
				printf("%d\n",fib[i]);
			}*/
			for(i=0;i<n;i++)
			{
				printf("the fibbonacci series are: %d\n",fib(i));
			}
		}
	}
	else
	{
		waitpid(pid,NULL,0);
		printf("the parent process ends:%d\n",pid);
	}
	return 0;
}
int fib(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return (fib(n-1)+fib(n-2));
	}
}
