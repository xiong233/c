#include <stdio.h>
int main()
{
	int a, b;
	int sum = 0;

	printf("输入一个正整数判断是否是回文数\n");
	scanf("%d", &a);

	for (b = a; b != 0; b /= 10)
	{
		sum = sum * 10 + b % 10;
	}
	printf("%d\n", sum);
	if(sum == a) printf("是");
	else
	printf("不是");

}