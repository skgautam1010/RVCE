#include<stdio.h>
#include<stdlib.h>
int shared=5;
void p1()
{
	int x=shared;
	x++;
	sleep(1);
	shared=x;
	printf("%d",shared);
}
void p2()
{
	int y=shared;
	y--;
	sleep(1);
	shared=y;
	printf("%d",shared);
}
void main()
{
	p1();
	p2();
}

