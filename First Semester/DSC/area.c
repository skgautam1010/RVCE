#include <stdio.h>
int main()
{
	const float pi = 3.14;
	float area,r;
	printf("enter the value of radius\n");
	scanf("%f",&r);
	area = pi*r*r;
	printf("the area of circle:%f\n",area);
	return 0;
}
