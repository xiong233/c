#include <stdio.h>
#include <math.h>
int main ()
{
	float a , b , c , delta , x1 ,x2 ;
	int d;
	do 
	{
	printf ("请输入a,b,c\n" "中间用空格相隔且a不能为0:\n");
	scanf ( "%f %f %f",&a,&b,&c);
	
	delta = b*b-4*a*c;
	
	if (delta >=0)
	{
		x1 = (-b+sqrt ( delta )) / (2*a);
		x2 = (-b-sqrt ( delta )) / (2*a);
		printf ("方程有实数根\n  x1=%f\n x2=%f\n",x1,x2);
	}
	else if (delta <0)
	{
		printf ("无实数根\n");
	}
	printf ("继续输入1，否则任意键结束：\n");
	scanf ("%d",&d);
	}
	while (1==d);
	
	return 0;
}