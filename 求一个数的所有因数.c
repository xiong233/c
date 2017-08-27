#include <stdio.h>
int main ()
{
	int a,b;
	scanf ("%d",&a);
	
	for (b=1;b<=a;b+=1)
	{
		if (a%b==0)
		printf ("%d\n",b);
	}
	
}