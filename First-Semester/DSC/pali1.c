#include<stdio.h>
#include<string.h>
void main()
{
	char a[10],b[10];
	int i,c=0,k=0,x=0;
	printf("enter the string\n");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		c++;
	}
	for(i=c-1;i>=0;i--)
	{
		b[k]=a[i];
		k++;
	}
	b[k] = '\0';
	for(i=0;i<c;i++)
	{
		if(b[i]==a[i])
			x++;
	}
	if(x==c)
	printf("it is a palindrome");
	else
	printf("not palindrome");
}
