#include<stdio.h>
#include<stdlib.h>
int n,f1=0,f2=0,f3=0;
int r1=-1,r2=-1,r3=-1;
int q1[50],q2[50],q3[50],p,v;
void insert(int p)
{
	if(p==1)
	{

		if(r1==n-1)
		{
			printf("queue full\n");
		}
		else
		{
			r1++;
			printf("enter the value to be stored:\n");
			scanf("%d",&v);
			q1[r1]=v;
			printf("the element is inserted\n");
		}
	}
	else if(p==2)
	{
		 if(r2==n-1)
                {
                        printf("queue full\n");
                }
                else
                {
                        r2++;
                        printf("enter the value to be stored:\n");
                        scanf("%d",&v);
                        q2[r2]=v;
                        printf("the element is inserted\n");
                }
	}
	else if(p==3)
	{
		 if(r2==n-1)
                {
                        printf("queue full\n");
                }
                else
                {
                        r2++;
                        printf("enter the value to be stored:\n");
                        scanf("%d",&v);
                        q2[r2]=v;
                        printf("the element is inserted\n");
                }
        }
	else
	{
		printf("wrong input\n");
	}
}
void del(int p)
{
	if(p==1)
	{
		if(f1<0 || f1>r1)
		{
			printf("queue empty\n");
		}
		else
		{
			printf("the element to be deleted is:%d\n",q1[f1]);
			f1++;
		}
	}
	else if(p==2)
	{
		 if(f2<0 || f2>r2)
                {
                        printf("queue empty\n");
                }
                else
                {
                        printf("the element to be deleted is:%d\n",q2[f2]);
                        f2++;
                }
        }
	else if(p==3)
	{
		 if(f3<0 || f3>r3)
                {
                        printf("queue empty\n");
                }
                else
                {
                        printf("the element to be deleted is:%d\n",q3[f3]);
                        f3++;
                }
        }
}

void display(int p)
{
	int i;
	if(p==1)
	{
		if(f1<0 || f1>r1)
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
	}
	else if(p==2)
	{
		 if(f2<0 || f2>r2)
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
        }
	else if(p==3)
	{
		 if(f3<0 || f3>r3)
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
	else
	{
		printf("wrong input\n");
	}
}

void main()
{
	int ch;
	printf("enter the size of queue\n");
	scanf("%d",&n);
	while(1)
	{
		printf("1-->insert\n2-->delete\n3-->display\n4-->exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the queue in which element to be entered:\n");
				printf("1--first queue\n2--secondqueue\n3-->third queue\n");
				scanf("%d",&p);
				insert(p);
				break;
			case 2:
				printf("enter the queue in which element to be entered:\n");
                                printf("1--first queue\n2--secondqueue\n3-->third queue\n");
				scanf("%d",&p);
				del(p);
				break;
			case 3:
				printf("enter the queue in which element to be entered:\n");
                                printf("1--first queue\n2--secondqueue\n3-->third queue\n");
                                scanf("%d",&p);
                                display(p);
				break;
			case 4:
				exit(0);
			default:
				printf("wrong input\n");
		}
	}
}
