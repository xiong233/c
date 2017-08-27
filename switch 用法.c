#include <stdio.h>

int main()
{
	int a;
	do
	{
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			printf(" 111\n");
			break;
		case 2:
			printf(" 222\n");
			break;
		case 3:
			printf(" 333\n");
			break;
		default:
			printf(" 444\n");
			break;
		}
	}
	while (1);
}