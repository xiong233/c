#include <stdio.h>
int main()
{
	int a, i, f1, f2, f3;
	int x = 2;
	f1 = 1, f2 = 2;
	printf("小兔子繁衍到了第几代:\n");
	scanf("%d", &a);
	
	 if (a == 1)
		printf("第1代：1对");
	else if (a == 2)
printf("第1代：1对\n第2代：2对\n");
	else
	{	printf("第1代：1对\n第2代：2对\n");
		for (i = 3; i <= a; ++i)
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
			++x;
			printf("第%d代：%d对\n", x, f3);
		}
	}
}