
#include <stdio.h>
int main()
{
	int i, j, m, n;
	m = 1;
	n = 1;
	for (i = 100; i < 1000; i++)
	{
		int k = 0;

		for (j = 1; j < i + 1; j++)
		{
			if (i % j == 0)
			{
				k = k + 1;
		//		 printf("%d\n", j);
			}

		}

		if (m < k)

		{
			m = k;
			n = j - 1;
		}
	}
	printf("%d %d", m, n);

}