#include <stdio.h>
int main()
{
	int a, b, c, j, h;
	float k;
	b = 0, c = 0, j = 0;
	printf
		("输入一个正整数，计算奇数和 偶数和 奇数个数 奇数平均值:\n");
	scanf("%d", &h);

	for (a = 1; a <= h; a += 1)
	{
		if ((a + 1) % 2 == 0)
		{
			b = b + a;
			j = j + 1;
		}
		else
			c = c + a;
	}

	k = 1.0 * b / j;

	printf
		("奇数和=%d\n 偶数和=%d\n 奇数个数=%d\n 奇数平均值=%f\n",
		 b, c, j, k);
}