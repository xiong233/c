#include <stdio.h>
void f(double x)
{
	double y, a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	y = a * x * x + b * x + c;
	printf("%lf", y);
}

int main()
{ printf("请输入一元二次方程a,b,c的值：\n");
	
}