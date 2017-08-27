#include <stdio.h>
int a, b, c;

double f(double x)
{
	double y;
	y = a * x * x + b * x + c;
	return y;
}

int main()
{
	scanf("%d%d%d", &a, &b, &c);
	printf("%lf\n", f(1));
	double m, n;
	int i;
	for (m = -3, n = -1.5; n - m >= 0.000001; --i)//需要根在mn之间且单调连续不断
	{
		if (f((m + n) / 2) * f(n) < 0)
			m = (m + n) / 2;

		else

			n = (m + n) / 2;
		printf("%lf  %lf\n", m, n);

	}
	 printf("%lf", (m + n) / 2);
}