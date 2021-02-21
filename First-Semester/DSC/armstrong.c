#include <stdio.h>
void main()
{
	int i,s=0,r;
	for(i=100;i<999;i++)
	{
		r=i%10;
		s = s+ r*r*r;
		i = i/10;
	}
		printf("%d\n",s);


}

