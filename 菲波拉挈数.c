#include <stdio.h>
int main()
{
	int i, a, f1, f2, f3;
	f2 = 2, f3 = 1;
	printf
		("菲波拉挈数计算，输入正整数即代数，计算此代会有多少后代:\n");
	scanf("%d", &a);

	if (a == 1)
		printf("%d\n", a);
	else if (a == 2)
		printf("%d\n", a);
	else
	{
		for (i = 3; i <= a; ++i)
		{
			f1 = f2 + f3;
			f3 = f2;
			f2 = f1;
		}
		printf("%d", f1);
	}
}