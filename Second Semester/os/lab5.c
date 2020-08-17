//lab 5 program of fcfs and round robin
#include<stdio.h>
#include<stdlib.h>
void fcfs()
{
	int i,j,n,temp,at[30]={0},ct[30],bt[30],tat[30],wt[30],p[30];
	float atat=0,awt=0;
	printf("enter the number of processes\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\tenter the arrival time for process p%d:",i+1);
		scanf("%d",&at[i]);
		printf("\tenter the burst time for process p%d: ",i+1);
		scanf("%d",&bt[i]);
		p[i]=i+1;
	}
	for(i=0;i<n;i++)
	{
		while(at[i]<0 || bt[i]<0)
		{
			char k;
			printf("\narrival time or burst time cant be negative for process %d to change press(y for yes|n for no)\n",i+1);
			scanf(" %c",&k);
			if(k=='y')
			{
				printf("\tenter the arrival time for process p%d:",i+1);
                		scanf("%d",&at[i]);
                		printf("\tenter the burst time for process p%d: ",i+1);
                		scanf("%d",&bt[i]);
                		p[i]=i+1;
			}
			else
			{
				exit(0);
			}
		}
	}


	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(at[i]>at[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;

				temp=at[i];
				at[i]=at[j];
				at[j]=temp;

				temp=bt[i];
				bt[i]=bt[j];
				bt[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
  		if(i==0)
		{
   			ct[i]=bt[i]+at[0];
  		}
		 else
		{
 			if(ct[i-1]<at[i])
			{
        			ct[i]=ct[i-1]+bt[i]+(at[i]-ct[i-1]);
     			}
			else
			{
        			ct[i]=ct[i-1]+bt[i];
       			}
   		}
 	}
	printf("process_no\t\tarrival_time\t\tburst_time\t\tcompletion_time\t\tturn_around_time\twaiting_time\n");
	for(i=0;i<n;i++)
	{
		tat[i]=ct[i]-at[i];
		wt[i]=tat[i]-bt[i];
		awt=awt+wt[i];
		atat=atat+tat[i];
		printf("P%d\t\t\t%d\t\t\t%d\t\t\t%d\t\t\t%d\t\t\t%d\n",p[i],at[i],bt[i],ct[i],tat[i],wt[i]);
	}
	awt=awt/n;
	atat=atat/n;
	printf("the average turn around time:%.3f\n",atat);
	printf("the average waiting time:%.3f\n",awt);
}
struct process
{
        char name;
        int at,bt,wt,tt,rt;
        int completed;
        float ntt;
}p[20];
int n;
int q[10];
int front=-1,rear=-1;
        void enqueue(int i)
        {
                if(rear==20)
                printf("overflow");
                rear++;
                q[rear]=i;
                if(front==-1)
                front=0;
        }
        int dequeue()
        {
                if(front==-1)
                        printf("underflow");
                int temp=q[front];
                if(front==rear)
                        front=rear=-1;
                else
                        front++;
                return temp;
        }
	int isInQueue(int i)
        {
                int k;
                for(k=front;k<=rear;k++)
                {
                        if(q[k]==i)
                                return 1;
                }
                return 0;
        }
        void sortByArrival()
        {
                struct process temp;
                int i,j;
                for(i=0;i<n-1;i++)
                for(j=i+1;j<n;j++)
                {
                        if(p[i].at>p[j].at)
                        {
                                temp=p[i];
                                p[i]=p[j];
                                p[j]=temp;
                        }
                }
        }
void round_robin()
{
        int i,j,time=0,sum_bt=0,tq;
        float att=0,awt=0;
        char c;
        printf("Enter no of processes:");
        scanf("%d",&n);
        for(i=0,c='1';i<n;i++,c++)
        {
                p[i].name=c;
                printf("\nEnter the arrival time and burst time of process %c: ",p[i].name);
                scanf("%d%d",&p[i].at,&p[i].bt);
                p[i].rt=p[i].bt;
                p[i].completed=0;
                sum_bt+=p[i].bt;

        }

        printf("\nEnter the time quantum:");
        scanf("%d",&tq);

        sortByArrival();
        enqueue(0);
        printf("Process execution order: ");
        for(time=p[0].at;time<sum_bt;)
        {
                i=dequeue();
                if(p[i].rt<=tq)
                {

                        time+=p[i].rt;
                        p[i].rt=0;
                        p[i].completed=1;
                        printf(" %c ",p[i].name);
                        p[i].wt=time-p[i].at-p[i].bt;
                        p[i].tt=time-p[i].at;
                        p[i].ntt=((float)p[i].tt/p[i].bt);
                        for(j=0;j<n;j++)
                        {
				 if(p[j].at<=time && p[j].completed!=1&& isInQueue(j)!=1)
                                {
                                        enqueue(j);

                                }
                        }
                }
                else
                {
                        time+=tq;
                        p[i].rt-=tq;
                        printf(" %c ",p[i].name);
                        for(j=0;j<n;j++)
                        {
                                if(p[j].at<=time && p[j].completed!=1&&i!=j&& isInQueue(j)!=1)
                                {
                                        enqueue(j);

                                }
                        }
                        enqueue(i);
                }
        }
        printf("\nProcess\tArrival Time\tBurst Time\tWaiting Time\tTurnAround Time");
        for(i=0;i<n;i++)
        {
		printf("\n %c\t\t%d\t\t%d\t\t%d\t\t%d\n",p[i].name,p[i].at,p[i].bt,p[i].wt,p[i].tt);
                awt=awt+p[i].wt;
                att=att+p[i].tt;
        }
        awt=awt/n;
        att=att/n;
        printf("Average waiting time: %.3f\n",awt);
        printf("Average turn around time: %.3f\n",att);
}

void main()
{
	int ch;
	while(1)
	{
		printf("1-->FCFS agorithm\n2-->Round Robin\n3-->exit\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				fcfs();
				break;
			case 2:
				round_robin();
				break;
			case 3:
				exit(0);
			default:
				printf("wrong user input\n");
		}
	}
}
