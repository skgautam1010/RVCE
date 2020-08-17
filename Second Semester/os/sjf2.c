#include<stdlib.h>
#include<stdio.h>
int n,temp,ct[50],at[50],bt[50],tat[50],wt[50];
float awt=0,atat=0;
int p[50],it,ch,it2;
void sorting();
void insert();
void sjf();
void futurek();
void processSort(int);
void main()
{
	while(1)
	{
		printf("\n\nEnter Your Choice...\n1. Shortest Job First\n2. Future Knowledge Algorithm\n3. Exit\n\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
				sorting();
				sjf();
				break;
			case 2:
				insert();
				futurek();
				break;
			case 3:
				exit(0);
			default:
				printf("Enter Correct Choice....\n\n\n");
		}
	}
}
void insert()
{
	int i;
	printf("Enter the Total Number of processes : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the Arrival time for the process %d  : ",i+1);
		scanf("%d",&at[i]);
		printf("Enter the Burst time for the process %d  : ",i+1);
		scanf("%d",&bt[i]);
		p[i]=i+1;
	}
	if(ch==2)
	{
		printf("Enter the Ideal Time  :  ");
		scanf("%d",&it);
	}
}

void sorting()
{
	int i,j;
	for(i=1;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(bt[i]>bt[j])
			{
				temp=bt[j];
				bt[j]=bt[i];
				bt[i]=temp;

				temp=at[j];
				at[j]=at[i];
				at[i]=temp;

				temp=p[j];
				p[j]=p[i];
				p[i]=temp;
			}
		}
	}
}

void sjf()
{
	awt=0;
	atat=0;
	int i,j;
	printf("Process\t\tArrival Time\tBurst Time\t\tTAT\t\tWT\n");
	for(i=0;i<n;i++)
	{
		ct[i]=at[0];
		for(j=0;j<=i;j++)
			ct[i]+=bt[j];
		tat[i]=ct[i]-at[i];
		wt[i]=tat[i]-bt[i];
		if(wt[i]<0)
			wt[i]*=-1;
		atat+=tat[i];
		awt+=wt[i];
		printf("%d\t\t\t%d\t\t%d\t\t%d\t\t%d\n",p[i],at[i],bt[i],tat[i],wt[i]);
	}
	awt/=n;
	atat/=n;
	printf("Average Waiting time is : %f\n",awt);
	printf("Average Turn Around time is : %f\n",atat);

}

void processSort(int r)
{
	int i,j;
	for(i=r;i<n-1;i++)
	{
		for(j=r;j<n-1;j++)
		{
			if((bt[j]>bt[j+1]) && at[j]<=it2)
			{
				temp=bt[j];
				bt[j]=bt[j+1];
				bt[j+1]=temp;

				temp=at[j];
				at[j]=at[j+1];
				at[j+1]=temp;

				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
	return;
}

void futurek()
{
	awt=0;
	atat=0;
	int i,j;
	it2=it;
	printf("Process\t\tArrival Time\tBurst Time\t\tTAT\t\tWT\n");
	for(i=0;i<n;i++)
	{
		processSort(i);
		ct[i]=at[0];
		for(j=0;j<=i;j++)
			ct[i]+=bt[j];
		tat[i]=ct[i]-at[i];
		wt[i]=tat[i]-bt[i];
		it2+=bt[i];
		if(wt[i]<0)
			wt[i]*=-1;
		atat+=tat[i];
		awt+=wt[i];
		printf("%d\t\t\t%d\t\t%d\t\t%d\t\t%d\n",p[i],at[i],bt[i],tat[i],wt[i]);

	}
	awt/=n;
	atat/=n;
	printf("Average Waiting time is : %f\n",awt);
	printf("Average Turn Around time is : %f\n",atat);
}

