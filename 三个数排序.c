#include <stdio.h>
int main ()
{
	float a,b,c,t;
	printf ("请输入三个数，中间用空格相隔\n");
	scanf ("%f %f %f",&a,&b,&c);
	
	if (a<b)
	{
	   t = a;
	   a = b;
	   b = t;
	}
	if (a<c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b<c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf ("%f %f %f",a,b,c);
	
	return 0;	
	
}