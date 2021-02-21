#include<stdio.h>
#include<stdlib.h>
void insert(int);
int del();
void display();
int size,f1=0,f2=0,f3=0;
int r1=-1,r2=-1,r3=-1;
int q1[50],q2[50],q3[50],p,v;
int main()
{
	int ch;
	printf("enter the size\n");
	scanf("%d",&size);
	while(1)
	{
		printf("1-->for insertion\n2-->for deletion\n3-->display\n4-->exit\n");
		printf("enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the priority:\n 1->first queue\n2->second queue\n3-->third queue\n");
				scanf("%d",&p);
				insert(p);
				break;
			case 2:
				del();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("wrong input\n");
		}
	}
return 0;
}
void insert(int p)
{
	if(p==1)
	{
		if(r1==size-1)
		{
			printf("queue is full\n");
		}
		else
		{
			printf("enter the values\n");
			scanf("%d",&v);
			r1++;
			q1[r1]=v;
		}
	}
	else if(p==2)
		{
			if(r2==size-1)
			{
				printf("queue full\n");
			}
			else
			{
			printf("enter the values:\n");
			scanf("%d",&v);
			r2++;
			q2[r2]=v;
			}
		}
	else if(p==3)
	{
		if(r3==size-1)
		{
			printf("queue full\n");
		}
		else
		{
			printf("enter the values\n");
			scanf("%d",&v);
			r3++;
			q3[r3]=v;
		}
	}
	else
	{
		printf("wrong input\n");
	}
}
int del()
{
	if(r1==-1||f1>r1)
	{
		printf("queue empty\n");
		f1=0;r1=-1;
	}
	else
	{
		printf("the element deleted is :%d\n",q1[f1]);
		f1++;
		return 1;
	}
	if(r2==-1||f2>r2)
	{
		printf("queue empty\n");
	}
	else
	{
		printf("the element deleted is:%d\n",q2[f2]);
		f2++;
		return 1;
	}
	if(r3==-1||f3>r3)
	{
		printf("queue empty\n");
	}
	else
	{
		printf("the element deleted is:%d\n",q3[f3]);
		f3++;
		return 1;
	}
}
void display()
{
	int i;
	if(r1==-1||f1>r1)
	{
		printf("queue empty\n");
	}
	else
	{
		for(i=f1;i<=r1;i++)
		{
			printf("%d\n",q1[i]);
		}
	}
	  if(r2==-1||f2>r2)
        {
                printf("queue empty\n");
        }
        else
        {
                for(i=f2;i<=r2;i++)
                {
                        printf("%d\n",q2[i]);
                }
        }
	  if(r3==-1||f3>r3)
        {
                printf("queue empty\n");
        }
        else
        {
                for(i=f3;i<=r3;i++)
                {
                        printf("%d\n",q3[i]);
                }
        }
}



