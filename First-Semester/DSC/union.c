#include<stdio.h>
union student
{
	int age;
	float per;
	char name[10];
};

void main()
{
	union student s1;
	s1.age=17;
	printf("value of a%d\n",s1.age);
	//printf("value of b%f\n",s1.per);
	//printf("value of c%s\n",s1.name);
	//printf("%d\n",s2.age);
	//printf("%f\n",s2.per);
	//printf("%s\n",s2.name);
}

