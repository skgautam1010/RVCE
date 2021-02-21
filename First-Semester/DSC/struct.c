#include<stdio.h>
struct student
{
	char name[19];
	int id;
	float per;
}s1,s2;

	void main()
	{
		int a;
		float b;
		char c[10];
		printf("enter the name\n");
		scanf("%s",s1.name);
		printf("the name is%s\n",s1.name);
		printf("enter the id\n");
		scanf("%d",&s1.id);
		printf("the id is%d\n",s1.id);
		printf("enter the percentage\n");
		scanf("%f",&s1.per);
		printf("the percentage is%f\n",s1.per);
		printf("\n");
		printf("%s\n",s2.name);
		printf("%d\n",s2.id);
		printf("%f\n",s2.per);
		printf("memory size of a%ld\n",sizeof(a));
		printf("memory size of b%ld\n",sizeof(b));
		printf("memory size of c%ld\n",sizeof(c));
		printf("memory size of s1%ld\n",sizeof(s1));
		printf("memry size of  s2%ld\n",sizeof(s2));
	}


