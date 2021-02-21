#include <stdio.h>
int main() {
 int i,j,idle,p;
 int at[10], bt[10],ct[10],wt[10],tat[10];
 int tot_tat=0,tot_wt=0;
 float avg_tat=0,avg_wt=0;
 printf("Enter the no process: ");
 scanf("%d",&p);

 printf("\nEnter Arrival Time\n");
 for(i=0;i<p;i++) {
  printf("For process: %d\n",i+1);
  scanf("%d",&at[i]);
 }

 printf("Enter Burst Time\n");
 for(i=0;i<p;i++) {
  printf("For process: %d\n",i+1);
  scanf("%d",&bt[i]);
 }
//sorting for arrival time
int temp1,temp2;
 for(i=0;i<p-1;i++) {
   for(j=i+1;j<p;j++) {
     if(at[i]>at[j]) {
       temp1=at[i];
       at[i]=at[j];
       at[j]=temp1;

       temp2=bt[i];
       bt[i]=bt[j];
       bt[j]=temp2;
     }
   }
 }

//check for idle time and add it to completion time
 for(i=0;i<p;i++) {
  if(i==0) {
   //idle time for p1
   ct[i]=bt[i]+at[0];
  } else {  
     if(ct[i-1]<at[i]) {
        //idle time between processes
        ct[i]=ct[i-1]+bt[i]+(at[i]-ct[i-1]);
     } else {
        //no idle
        ct[i]=ct[i-1]+bt[i];
       }
   }
 }

 for(i=0;i<p;i++) {
    tat[i]=ct[i]-at[i];
    wt[i]=tat[i]-bt[i];
    tot_tat=tot_tat+tat[i];
    tot_wt=tot_wt+wt[i];
  }

 for(i=0;i<p;i++) {
  printf("|--------------------|\n");
  printf("|Process: %d          |\n",i+1);
  printf("|Arrival Time: %d       |\n",at[i]);
  printf("|Burst Time: %d       |\n",bt[i]);
  printf("|Completion Time: %d  |\n",ct[i]);
  printf("|Turn Around Time: %d |\n",tat[i]);
  printf("|Waiting Time: %d    |\n",wt[i]);
 }

  avg_tat=(tot_tat/p);
  avg_wt=(tot_wt/p);
  printf("======================\n");
  printf("Avg. TAT: %f\n",avg_tat);
  printf("Avg. WT: %f\n",avg_wt);

}
