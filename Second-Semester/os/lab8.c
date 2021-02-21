#include<stdio.h>
#include<stdlib.h>
void fifo()
{
	int n,f,frame[30],ref_string[40],fault=0,hit=0;
	int i,j;
	int available,k=0;
	printf("enter the total number of page reference string: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the %d page reference string: ",i+1);
		scanf("%d",&ref_string[i]);
	}
	printf("enter the number of frame: ");
	scanf("%d",&f);
	for(i=0;i<f;i++)
	{
		frame[i]=-1;
	}
	printf("refernce string \t\t frame\n");
	for(i=0;i<n;i++)
	{
		printf("%d-->\t\t\t",ref_string[i]);
		available=0;
		for(j=0;j<f;j++)
		{
			if(frame[j]==ref_string[i])
			{
				hit++;
				available=1;
				break;
			}
		}
		if(available==0)
		{
			frame[k]=ref_string[i];
			k=(k+1)%f;
			fault++;
		}
		for(j=0;j<f;j++)
		{
			printf("%d\t",frame[j]);
		}
		if(available==0)
		{
			printf("\tpage fault no: %d",fault);
		}
		if(available==1)
		{
			printf("\tpage hit");
		}
		printf("\n");
	}
	printf("\nthe total number of page fault: %d\n",fault);
	printf("the total number of page hits is: %d\n",hit);
}
void lru()
{
	int n,f,frame[30],ref_string[40],fault=0,hit=0;
	int i,j,min,count[30],next=1,available;
	printf("enter the total number of page refernce string: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the %d page reference string: ",i+1);
		scanf("%d",&ref_string[i]);
	}
	printf("enter the number of frames: ");
	scanf("%d",&f);
	for(i=0;i<f;i++)
	{
		frame[i]=-1;
		count[i]=0;
	}
	printf("refernce string \t\tframe\n");
	for(i=0;i<n;i++)
	{
		printf("%d-->\t\t",ref_string[i]);
		available=0;
		for(j=0;j<f;j++)
		{
			if(frame[j]==ref_string[i])
			{
				count[j]=next;
				next++;
				hit++;
				available=1;
				break;
			}
		}
		if(available==0)
		{
			if(i<f)
			{
				frame[i]=ref_string[i];
				count[i]=next;
				next++;
			}
			else
			{
				min=0;
				for(j=1;j<f;j++)
				{
					if(count[min]>count[j])
					{
						min=j;
					}
				}
				frame[min]=ref_string[i];
				count[min]=next;
				next++;
			}
			fault++;
		}
		for(j=0;j<f;j++)
		{
			printf("%d\t",frame[j]);
		}
		if(available==0)
		{
			printf("\tpage fault no: %d",fault);
		}
		if(available==1)
		{
			printf("\tpage hit");
		}
		printf("\n");
	}
	printf("the total number of page fault: %d\n",fault);
	printf("the total number of page hit: %d\n",hit);
}
void opr();
void main()
{
	int ch;
	while(1)
	{
		printf("1-->fifo\n2-->lru\n3-->opr\n4-->exit\n\tenter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				fifo();
				break;
			case 2:
				lru();
				break;
			case 3:
				opr();
				break;
			case 4:
				exit(0);
			default:
				printf("wrong input\n");
		}
	}
}
void opr()
{
	int no_of_frames, no_of_pages, frames[10], pages[30], temp[10], flag1, flag2, flag3, i, j, k, pos, max,hit, faults = 0;
    	printf("Enter number of page refernce string: ");
    	scanf("%d", &no_of_pages);
    	printf("Enter number of frames: ");
    	scanf("%d", &no_of_frames);
 	for(i = 0; i < no_of_pages; i++)
	{
		printf("enter the %d page reference string: ",i+1);
        	scanf("%d", &pages[i]);
    	}
    	printf("ref string\t\t\t page frames\n");
    	for(i = 0; i < no_of_frames; i++)
	{
        	frames[i] = -1;
    	}
    	for(i = 0; i < no_of_pages; i++)
	{
		printf("%d-->\t\t\t",pages[i]);
        	flag1 = flag2 = 0;
        	for(j = 0; j < no_of_frames; j++)
		{
            		if(frames[j] == pages[i])
			{
                   		flag1 = flag2 = 1;
				hit++;
                   		break;
               		}
        	}
        	if(flag1 == 0)
		{
            		for(j = 0; j < no_of_frames; j++)
			{
                		if(frames[j] == -1)
				{
                    			faults++;
                    			frames[j] = pages[i];
                    			flag2 = 1;
                    			break;
				}
            		}
        	}
        	if(flag2 == 0)
		{
        		flag3 =0;
            		for(j = 0; j < no_of_frames; j++)
			{
            			temp[j] = -1;
            			for(k = i + 1; k < no_of_pages; k++)
				{
            				if(frames[j] == pages[k])
					{
            					temp[j] = k;
            					break;
            				}
            			}
            		}
            		for(j = 0; j < no_of_frames; j++)
			{
            			if(temp[j] == -1)
				{
            				pos = j;
            				flag3 = 1;
            				break;
            			}
            		}
            		if(flag3 ==0)
			{
            			max = temp[0];
            			pos = 0;
            			for(j = 1; j < no_of_frames; j++)
				{
            				if(temp[j] > max)
					{
            					max = temp[j];
            					pos = j;
            				}
            			}
           		}
			frames[pos] = pages[i];
			faults++;
        	}
        	for(j = 0; j < no_of_frames; j++)
		{
            		printf("%d\t", frames[j]);
        	}
		if(flag1==0 || flag2==0)
		{
			printf("Page fault No. -- %d" , faults);
		}
		if(flag1==1 && flag2==1)
		{
			printf("\tpage hit");
		}
		printf("\n");
    	}
    	printf("\n\nTotal Page Faults : %d\n", faults);
	printf("Total page hit : %d\n",hit);
}
