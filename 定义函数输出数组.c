#include <stdio.h>

void f(int *p, int i)
{
	int j;
	for (j = 0; j < i; ++j)
	{
		printf("%d\n", p[j]);
	}
}

int main()
{
	int a[6] = { 1, 2, 3, 5, 6, 7 };
	 f(a, 6);
}