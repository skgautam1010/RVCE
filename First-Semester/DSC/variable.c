#include<stdio.h>
void main()
{
	int a=5;
	char b ='A';
	float c=5.6;
	char d[] ="rvce";
	printf("the value of a= %d>>>\n %ld",a,sizeof(b));
	printf("the value of b=%c\n",b);
	printf("the value of c=%f\n",c);
	printf("the value of d=%s\n",d);
}
