#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
int inc[50],w[50],sum,n;
void sumset(int i,int wt,int total);
int promising(int i,int wt,int total) {
	return(((wt+total)>=sum)&&((wt==sum)||(wt+w[i+1]<=sum)));
}

void main() {
	int i,j,n,temp,total=0;
	printf("\n Enter the total numbers:\n");
	scanf("%d",&n);
	printf("\n Enter %d numbers to th array:\n",n);
	for (i=0;i<n;i++) {
		scanf("%d",&w[i]);
		total+=w[i];
	}
	printf("\n Input the sum value to create sub set:\n");
	scanf("%d",&sum);
	if((total<sum))
	  printf("\n Subset construction is not possible"); else {
		for (i=0;i<n;i++)
		   inc[i]=0;
		printf("\n The solution using backtracking is:\n");
		sumset(-1,0,total);
	}
}
void sumset(int i,int wt,int total) {
	int j;
	if(promising(i,wt,total)) {
		if(wt==sum) {
			for (j=0;j<=i;j++)
			    if(inc[j])
			     printf("%d\t",w[j]);
				 printf("\n");
		} else {
			inc[i+1]=TRUE;
			sumset(i+1,wt+w[i+1],total-w[i+1]);
			inc[i+1]=FALSE;
			sumset(i+1,wt,total-w[i+1]);
		}
	}
}
