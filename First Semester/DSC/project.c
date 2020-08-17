#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct person
{
        char name[30];
        long telno;
};
void adddata()
{
        FILE *fp;
        struct person p;
        fp=fopen("contact.txt","w");
        printf("*****Create A New Record********\n");
        printf("Enter Name: ");
        scanf("%s",p.name);
        printf("Enter telephone number: ");
        scanf("%ld",&p.telno);
        fprintf(fp,"%s %ld",p.name,p.telno);
        printf("Record Saved  Successfully\n");
	printf("!!!!!!!!WARNING::Pressing 1 again Would Erase The Data In Record!!!!!!!!!\n");
	printf("|----Now Press 2 to Append or Add  More Data In To Directory----|\n");
        fclose(fp);
}
void appenddata()
{
        FILE *fp;
        struct person p;
        fp=fopen("contact.txt","a");
        printf("*****Append Or Update Record********\n");
        printf("Enter Name: ");
        scanf("%s",p.name);
        printf("Enter telephone number: ");
        scanf("%ld",&p.telno);
        fprintf(fp,"%s %ld",p.name,p.telno);
        printf("Record Saved  Successfully\n");
        fclose(fp);
}
void displaydata()
{
        FILE *fp;
        struct person p;
        fp=fopen("contact.txt","r");
        printf("*****************Displaying All Record******************\n");
        printf("NAME\t\t\t\t\t\tTELEPHONE NO\t\t\t\t\t\t\t\n");
        printf("-------------\t\t\t\t\t----------------\t\t\t\t\n");
        printf("\n");
        while(!feof(fp))
        {
                fscanf(fp,"%s %ld",p.name,&p.telno);
                printf("%s\t\t\t\t\t\t %ld\n",p.name,p.telno);
        }
        fclose(fp);
}
void finddata()
{
        FILE *fp;
        struct person p;
        char n[30];
        int total=0;
        fp=fopen("contact.txt","r");
        printf("*******Find Specific Record**********\n");
        printf("enter name:");
        scanf("%s",n);
        while(!feof(fp))
         {
		   fscanf(fp,"%s %ld",p.name,&p.telno);
                if(strcmp(p.name,n)==0)
                {
                        printf("\n Name: %s",p.name);
                        printf("\t\tTelephone no:  %ld",p.telno);
                        total++;
                }
        }
        fclose(fp);
        if(total==0)
        {
                printf("\n---No Record Found---\n");
        }
        else
        {
                printf("\n------Total %d Record Found------\n",total);
        }
}
void main()
{
        int ch;
        while(1)
        {
                printf("***************CREATE TELEPHONE DIRECTORY***************\n");
                printf("1-->Add or Create a Telephone Directory\n");
		printf("2-->Update Or Append In Existing Telephone Directory\n");
                printf("3-->Display all record\n");
                printf("4-->find record\n");
                printf("5-->exit\n");
                printf("enter the choice\n");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1:
                                adddata();
                                break;
                        case 2:
				appenddata();
				break;
			case 3:
                                displaydata();
                                break;
                         case 4:
                                finddata();
                                break;
                        case 5:
                                exit(0);
                        default:
                                printf("wrong user input\n");
                }
        }
}



