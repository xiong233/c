#include <stdio.h>

int main()
{
	int i, j, k;
	i = 1;
	for (j = 1; j <= 9; ++j)
	{
		for (i = 1; i <= 9; ++i)
		{
			k = i * j;
			printf("%dx%d=%d \n", j, i, k);
		}
		printf("\n");


	}


}