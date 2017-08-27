#include <stdio.h>
int f(int n)
{
	int i, a, b, m;
	m = 0;
	for (i = 1; i <= n; ++i)
	{
		b = 1;
		for (a = 1; a <= i; ++a)
		{
			b = b * a * (-1);
		}
		m = m + i * n / b;
	}
	m = m + 1;
	return m;
}

int main()
{
	int n;
	float s;
	scanf("%d", &n);
	s = 1.0 * f(n) / (f(n + 1) + f(n - 1));
	printf("%f", s);
}