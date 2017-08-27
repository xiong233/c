# include <stdio.h>
bool f(int j)
{
	int i;
	for (i = 2; i <= j; ++i)
	{
		if (0 == j % i)
			break;
	}
	if (i == j)
		return true;
	else
		return false;
}

int main(void)
{
	int j, k;
	scanf("%d", &k);
	for (j = 2; j <= k; ++j)
	{
		if (f(j))
			printf("%d\n", j);

	}
}