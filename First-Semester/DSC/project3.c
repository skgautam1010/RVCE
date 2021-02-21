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
        fp=fopen("contact.txt","a");
        printf("*****Add Or Update Record********\n");
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
        printf("**********Display All Record**********\n");
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
void modifydata()
{
        FILE *fp;
        struct person p,s;
        int total=0;
        char name[30];
        long telno;
        fp=fopen("contact.txt","r+");
        printf("Enter contact name to be modified:  ");
        scanf("%s",name);
        while(!feof(fp))
        {
                fscanf(fp,"%s %ld",p.name,&p.telno);
                if(strcmp(p.name,name)==0)
                {
                        printf("enter the modified name:  ");
                        scanf("%s",s.name);
                        printf("enter the modified telephone number:  ");
                        scanf("%ld",&s.telno);
                        strcpy(p.name,s.name);
                        //p.telno=s.t;
                        fprintf(fp,"%s %ld",p.name,s.telno);
                        total++;
                }
        }
                if(total==0)
                {
                        printf("No Record Modified\n");
                }
                else
                {
                        printf(" %d Record modified: \n",total);
                }
                fclose(fp);
}

void main()
{
        int ch;
        while(1)
        {
                printf("***************CREATE TELEPHONE DIRECTORY***************\n");
                printf("1-->Add or Update in directory\n");
                printf("2-->display all record\n");
                printf("3-->find record\n");
                printf("4-->modify record\n");
                printf("5-->delete record\n");
                printf("6-->exit\n");
                printf("enter the choice\n");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1:
                                adddata();
                                break;
                        case 2:
                                displaydata();
                                break;
                         case 3:
                                finddata();
                                break;
                        case 4:
                                modifydata();
                                break;
                        case 5:
                                //deldata();
                           	//break;
                        case 6:
                                exit(0);
                        default:
                                printf("wrong user input\n");
                }
        }
}


