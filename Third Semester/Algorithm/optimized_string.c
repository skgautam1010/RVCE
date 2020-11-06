#include<stdio.h>
#include<sys/time.h>
#include<string.h>
char str[300];
char pattern[200];
int string_match()
{
	int n=strlen(str);
	int m=strlen(pattern);
	int i,j=0;
	for(i=0;i<=n-m;)
	{
		for(j=0;j<m;j++)
		{
			if(str[i+j]!=pattern[j])
			{
				break;
			}
		}
		if(j==m)
		{
			return i;
		}
		else if(j==0)
		{
			i=i+1;
		}
		else
		{
			i=i+j;
		}
	}
	return -1;
}
void main()
{
	int n,pos,k,num;
	float t1,t2;
	struct timeval begin,end;
	FILE *fp;
	fp=fopen("string.txt","w");
	for(k=0;k<1;k++)
	{
		printf("\nEnter String: ");
		gets(str);
		n=strlen(str);
		printf("\nEnter pattern for best case: ");
		gets(pattern);
		gettimeofday(&begin,NULL);
		pos=string_match();
		gettimeofday(&end,NULL);
		if(pos==-1)
		{
			printf("\nNot Found");
		}
		else
		{
			printf("\nFound at position: %d",pos+1);
		}
		t1=end.tv_usec-begin.tv_usec;
		printf("\nEnter pattern for worst case: ");
		gets(pattern);
		gettimeofday(&begin,NULL);
		pos=string_match();
		gettimeofday(&end,NULL);
		if(pos==-1)
		{
			printf("\nNot found");
		}
		else
		{
			printf("\nFound at position: %d",pos+1);
		}
		t2=end.tv_usec-begin.tv_usec;
		printf("\nTime taken by string of length %d is %1.2f and %1.2f\n",n,t1,t2);
		fprintf(fp,"%d\t%1.2f\t%1.2f\n",n,t1,t2);
	}
	fclose(fp);
}
