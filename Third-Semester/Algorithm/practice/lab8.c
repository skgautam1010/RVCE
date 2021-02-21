#include<stdio.h>
#include<string.h>
#include<sys/time.h>

struct timeval st,en;

int table[127];
void shift_table(char pat[])
{
	int m=strlen(pat);
	for(int i=0;i<127;i++)
	{
		table[i]=m;
	}
	for(int j=0;j<m-1;j++)
	{
		table[pat[j]]=m-1-j;
	}
}

int horspool(char text[8000],char pat[400])
{
	int n=strlen(text);
	int m=strlen(pat);
	int i=m-1;
	while(i<n)
	{
		int k=0;
		while((k<m) && ((pat[m-1-k])==text[i-k]))
			k++;
			if(k==m)
				return (i-m+1);
			else
				i +=table[text[i]];
	}
	return -1;
}
void main()
{
	char text[6000],pat[800];
	int pos=0,n;
	float t1,t2;
	FILE *fp;
	fp=fopen("horspool.txt","w");
	for(int i=1;i<=5;i++)
	{
		printf("Enter the text\n");
		gets(text);
		n=strlen(text);
		printf("Enter pattern for best case\n");
		gets(pat);
		gettimeofday(&st,0);
		shift_table(pat);
		pos=horspool(text,pat);
		gettimeofday(&en,0);
		t1=en.tv_usec-st.tv_usec;
		if(pos>=0)
		{
			printf("Found at pos: %d\n",pos+1);
		}
		else
		{
			printf("Not found\n");
		}
		printf("Enter the pattern for worst case\n");
		gets(pat);
		gettimeofday(&st,0);
		shift_table(pat);
		pos=horspool(text,pat);
		gettimeofday(&en,0);
		t2=en.tv_usec-st.tv_usec;
		if(pos>=0)
		{
			printf("pattern found at ps:%d\n",pos+1);
		}
		else
		{
			printf("pattern not found\n");
		}
		fprintf(fp,"%d\t\t%.2f\t\t%.2f\n",n,t1,t2); 
		printf("Time taken to execute is %.2f\t and %.2f\n",t1,t2);
	}
}
