#include<stdio.h>
#include<stdlib.h>
int n,temp,ct[50],at[50],bt[50],tat[50],wt[50];
float awt=0,atat=0;
int p[50],it,ch,it2;
void sjf()
{
int i,min,k=1,btime=0;
int j,wt[10],tt[10],ta=0,sum=0;
float wavg=0,tavg=0,tsum=0,wsum=0;
printf(" -------Shortest Job First Scheduling ( NP )-------\n");
printf("\nEnter the No. of processes :");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("\tEnter the arrival time of %d process :",i+1);
scanf(" %d",&at[i]);
printf("\tEnter the burst time of %d process :",i+1);
scanf(" %d",&bt[i]);
p[i]=i+1;
}

/*Sorting According to Arrival Time*/

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(at[i]<at[j])
{
temp=p[j];
p[j]=p[i];
p[i]=temp;
temp=at[j];
at[j]=at[i];
at[i]=temp;
temp=bt[j];
bt[j]=bt[i];
bt[i]=temp;
}
}
}
/*Arranging the table according to Burst time,
Execution time and Arrival Time
Arrival time <= Execution time
*/
for(j=0;j<n;j++)
{
btime=btime+bt[j];
min=bt[k];
for(i=k;i<n;i++)
{
if (btime>=at[i] && bt[i]<min)
{
temp=p[k];
p[k]=p[i];
p[i]=temp;
temp=at[k];
at[k]=at[i];
at[i]=temp;
temp=bt[k];
bt[k]=bt[i];
bt[i]=temp;
}
}
k++;
}
wt[0]=0;
for(i=1;i<n;i++)
{
sum=sum+bt[i-1];
wt[i]=sum-at[i];
wsum=wsum+wt[i];
}
wavg=(wsum/n);
for(i=0;i<n;i++)
{
ta=ta+bt[i];
tt[i]=ta-at[i];
tsum=tsum+tt[i];
}
tavg=(tsum/n);
printf("************************");
printf("\n RESULT:-");
printf("\nProcess\t  arrival\tburst\t  Waiting\t   Turn-around" );
for(i=0;i<n;i++)
{
printf("\n p%d\t\t%d\t%d\t\t%d\t\t\t%d",p[i],at[i],bt[i],wt[i],tt[i]);
}
printf("\n\nAVERAGE WAITING TIME : %f\n",wavg);
printf("\nAVERAGE TURN AROUND TIME : %f\n",tavg);
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
	printf("\nEnter the No. of processes :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\tEnter the arrival time of %d process :",i+1);
		scanf(" %d",&at[i]);
		printf("\tEnter the burst time of %d process :",i+1);
		scanf(" %d",&bt[i]);
		p[i]=i+1;
	}
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
void main()
{
	int ch;
	while(1)
	{
		printf("1-->sjf\n2-->future knowledge\n3->exit\nEnter your choice: \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				sjf();
				break;
			case 2:
				futurek();
				break;
			case 3:
				exit(0);
			default:
				printf("wrong input\n");
		}
	}
}
