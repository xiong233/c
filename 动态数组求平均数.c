#include <stdio.h>
#include <malloc.h>
int main()
{
	int i, j;
	double average = 0;
	double *p = (double *)malloc(8 * i);

	printf("请输入个数：");
	scanf("%d", &i);
	for (j = 0; j < i; ++j)
	{
		printf("请输入第%d个数: ", j + 1);
		scanf("%lf", &p[j]);
		average = average + p[j] / i;
	}

	printf("average = %lf", average);

}