#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int  main()
{
	char a[30] ;
	char b[30];
	int i,len =0,m=0,k=0;
	printf("enter a string\n");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	printf("the length of the string '%s'=%d\n" ,a,len);

	for (i=len-1;i>=0;i--)
	{
		b[k]=a[i];
	}
	for(i=0;i<len;i++)
	{
		if(b[i]!=a[i])
		{
			m++;
		}

	}
	if(m==len)
	{
	printf(" a palindrome\n");
	}
	else
	{
	printf("not  a palindrome\n");
	}
	return 0;
}
