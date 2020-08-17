#include<stdio.h>
void main()
{
	char ch;
	printf("enter any character\n");
	scanf(" %c",&ch);
	switch (ch)
	{
		case 'A':
		case 'a':
		printf(" %c it is a vowel\n",ch);
		break;
		case 'E':
		case 'e':
		printf(" %c it is a vowel\n",ch);
		break;
		case 'i':
		case 'I':
		printf(" %c it is a vowel\n",ch);
		break;
		case 'O':
		case 'o':
		printf(" %c  it is a vowel\n",ch);
		break;
		case 'U':
		case 'u':
		printf(" %c it is a vowel\n",ch);
		break;
		default:
		printf("not a vowel try again");
	}
}
