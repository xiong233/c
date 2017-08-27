#include <stdio.h>
#include <math.h>

int main()
{
	double n, i, x, s, h;
	i = 6.0, x = 1.0;
	printf
		("割圆术计算圆周率的近似值，输入数字越大越精确：\n");
	do
	{
		scanf("%lf", &n);

		s = 6 * sqrt(3) / 4;
		while (i <= n / 2.0)
		{
			h = sqrt(1 - (x / 2.0) * (x / 2.0));
			s = s + i * x * (1 - h) / 2;
			x = sqrt((x / 2.0) * (x / 2.0) + (1 - h) * (1 - h));
			i = 2 * i;
		}
		printf("圆周率的近似值为：%lf\n", s);
	}
	while (1);
}