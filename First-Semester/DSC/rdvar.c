#include<stdio.h>
void main()
{
	int a;
	float b;
	char c;
	char d[20];
	printf("enter the value for a\n");
	scanf("%d",&a);
	printf("enter the value for b\n");
	scanf("%f",&b);
	printf("enter the value for c\n");
	scanf(" %c",&c);
	printf("enter the value for d\n");
	scanf("%s",d);
	printf("%d\n",a);
	printf("%f\n",b);
	printf("%c\n",c);
	printf("%s\n",d);
}

