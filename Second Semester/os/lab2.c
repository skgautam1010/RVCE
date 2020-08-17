#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp1,*fp2,*fp3;
	char source[100],destination[100],a[100];
	char c,s,b;
	int test,t;
		printf("enter the source file name: ");
		scanf("%s",source);
		printf("\nenter the destination file name: ");
		scanf("%s",destination);
		fp1=fopen(source,"r");
		fp2=fopen(destination,"w");
		fp3=fopen("temp","r");
		if(fp1==NULL)
		{
			printf("cant be copied ");
			return 0;
		}
		if(fp2==NULL)
		{
			printf("cant be copied");
			return 0;
		}
		while(b=getc(fp3)!=EOF)
		{
			fscanf(fp3,"%s",a);
			test=strcmp(destination,a);
			//printf("test=%d\n",test);
		}
		if(test==0)
		{
			printf("to overwrite the existing file:press 'y' for yes 'n' for no\n");
			scanf(" %c",&s);
			if(s=='y')
			{
				c=fgetc(fp1);
				while(c!=EOF)
				{
					fputc(c,fp2);
					c=fgetc(fp1);
				}
				printf("content copied");
			}
			else
			{
				return 0;
			}
		}
		else
		{
			 c=fgetc(fp1);
                          while(c!=EOF)
                                {
                                        fputc(c,fp2);
                                        c=fgetc(fp1);
                                }
                                printf("content copied");
		}
			fclose(fp1);
			fclose(fp2);

}


