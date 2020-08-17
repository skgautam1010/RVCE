#include<stdio.h>                      // A execution time 10, period: 20
#include<stdlib.h>
									   // B execution time 25, period: 50
int main()
{
 int A,B;                           //arrival time of process A and B
 int cycA,cycB,serveA,serveB;         //period and execution for A and B processes
 float m;
 int i,j,a=0,b=0,ka=0,kb=0;                 /*ka,kb is a switch and 
 											i, j, a, b, to record status of each process*/
 int numa=0,numb=0;                         //accumulated execution time
 int T;
 int deadlineA, deadlineB;
 printf("------------------------------------------------\n");
 printf("\tEarliest Deadline First algorithm\n");
 printf("------------------------------------------------\n");
 printf("please input period and execution for A process\n");
 scanf("%d%d",&cycA,&serveA);
 printf("please input period and execution for B process\n");
 scanf("%d%d",&cycB,&serveB);
 m=(float)serveA/cycA+(float)serveB/cycB;


 for(T=0;T<=100;T++)
 {

  /* this block is to check if CPU can schedule*/
  if(m > 1)
  {
   printf("Utilization is greater than 100%%.\nCPU cannot schedule these tasks.\n");
   exit(1);
  }


  /* this block is to say that process A has been done*/
  /* but process B has not been done yet*/
  if(numa==serveA)                                        //process A is done
  {
   numa=serveA+1;
   printf("when T=%d, ",T);
   printf("process A is done\n");
   if(numb<serveB)
   {
    printf("run process B\n");
    kb=1;
   }
   ka=0;
  }

  /* this block is to say that process B has been done*/
  /* but process A has not been done yet*/
  if(numb==serveB)
  {
   numb=serveB+1;
   printf("when T=%d, ",T);
   printf("process B is done\n");
   if(numa<serveA)
   {
    printf("run process A\n");
    ka=1;
   }
   kb=0;
  }

  /* this block start running the process*/
  if(T%cycA==0 && T%cycB==0)
  {
   deadlineA = serveA;
   deadlineB = serveB;
   A=B=T;
   j=++a;
   i=++b;
   printf("when T=%d, process A and process B are generated together\n",T);
   if(cycA<=cycB) // deadline is cycle
   {
       printf("run process Aand suspend process B\n");
       printf("---------------------------------------\n");
       ka=1;
       kb=0;
   }
   else
   {
    printf("run process B and suspend process A\n");
    ka=0;
    kb=1;
   }
   numa=numb=0;
  }
  

  /* this block initializes A another new period*/ 
  if(T%cycA==0&&T%cycB!=0)
  {

   A=T;
   printf("when T=%d, ",T);
   printf("process A is generated\n");   //impossible to compete with A
   numa=0;
   deadlineA += serveA;
   if(numb<serveB)                //process B is unfinished yet
   if(deadlineB>deadlineA)
    {
     printf("run process A\n");
        ka=1;
        kb=0;
    }
    else                     //period of B is earlier than period of A
     printf("process B is moving forward\n");
   else                                   //process B is done, just run A
    {
     printf("process A is run\n");
     ka=1;
    }
  }


  /* this block initializes B another new period*/
  if(T%cycA!=0&&T%cycB==0)
  {
   B=T;
   printf("when T=%d, ",T);
   printf("process B  is generated\n");            //impossible to compete with B
   numb=0;
   deadlineB += serveB;
   if(numa<serveA)                         //process A is undone yet
    if(deadlineB>=deadlineA)
     printf("process A is on run\n");
    else
    {
        printf("process B is to run\n");
        kb=1;
        ka=0;
    }
   else                                //process A is done
    {
        printf("process B%d is on run\n",b);
        kb=1;
    }
  }


  /* this block is to accumulate running time*/
  if(ka)
    numa++;
  if(kb)
   numb++;


 }
 return 1;
}