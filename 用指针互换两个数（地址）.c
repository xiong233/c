#include <stdio.h>
void f(int *p, int *q)
{
	int t;
	 t = *p, *p = *q, *q = t;
}

int main()
{
	int a = 7, b = 8;
	f(&a, &b);
	printf("%d\n%d\n", a, b);
}