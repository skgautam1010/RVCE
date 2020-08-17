#include<stdio.h>
void main()
{
	int a,b,c,d,ch;
	printf("enter the value for a and b");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("enter your choice: 1->add\n2->subtract\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			c=a+b;
			printf("%d",c);
			break;
		case 2:
			d=a-b;
			printf("'%d",d);
			break;
	}
}

