#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, s, area;
	printf("请输入三角形的三边将输出面积:\n");
	scanf("%f%f%f", &a, &b, &c);

	s = (a + b + c) * 0.5;

	if (a + b > c && a + c > b && b + c > a)
	{
		area = sqrt(s * (s - a) * (s - b) * (s - c));
		printf("面积=%f", area);
	}
	else
		printf
			("输入有误,三角形任意两边之和要大于第三边 ");
}