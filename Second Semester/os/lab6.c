#include<stdio.h>
#include<stdlib.h>
#define MAX 70
typedef int semaphore;
semaphore s=1;
int x=1;
int full=0,empty,n,r=-1,f=-1;
int buffer[MAX];
int down(int s)
{
	return (--s);
}
int up(int s)
{
	return (++s);
}
void producer()
{
	s=down(s);
	empty=down(empty);
	if(f==-1 && r==-1)
	{
		f=0;
		r=0;
		buffer[r]=x;
		printf("the producer produced item: %d\n",x);
		x++;
	}
	else
	{
		r=(r+1)%n;
		buffer[r]=x;
		printf("the producer produces item: %d\n",x);
		x++;
	}
	s=up(s);
	full=up(full);
}
void consumer()
{
	s=down(s);
	full=down(full);
	if(f==r)
	{
		printf("the consumer consumes the item: %d\n",buffer[f]);
		f=-1;
		r=-1;
	}
	else
	{
		printf("the consumer consumes the item:%d\n",buffer[f]);
		f=(f+1)%n;
	}
	s=up(s);
	empty=up(empty);
}
void display()
{
	int i;
	if(f==-1 && r==-1)
	{
		printf("buffer empty\n");
	}
	else
	{
		i=f;
		printf("the items in the  buffer are: \n");
		while(i!=r)
		{
			printf("%d\n",buffer[i]);
			i=(i+1)%n;
		}
		printf("%d\n",buffer[r]);
	}
}
void main()
{
	int ch;
	printf("enter the total size of buffer:");
	scanf("%d",&n);
	while(n<0)
	{
		char k;
		printf("size of buffer cant be negative press (y for yes) to change the value:");
		scanf(" %c",&k);
		if(k=='y')
		{
			printf("enter total size of buffer: ");
			scanf("%d",&n);
		}
		else
		{
			exit(0);
		}
	}
	empty=n;
	while(1)
	{
		printf("\n1-->producer\n2-->consumer\n3-->display the buffer\n4-->exit\nenter your choice:");
		scanf("%d",&ch);
		printf("\n");
		switch(ch)
		{
			case 1:
				if((s==1) && (empty!=0))
				{
					producer();
				}
				else
				{
					printf("buffer is full\n");
				}
				break;
			case 2:
				if((s==1) && (full!=0))
				{
					consumer();
				}
				else
				{
					printf("buffer empty\n");
				}
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
		}
	}
}

