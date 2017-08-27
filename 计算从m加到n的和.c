//计算从m加到n的和
//2014/08/24/17:00重新修改，之前是算从1加到指定值
#include <stdio.h>
int main ()
{
	int a,b,c;
	a=0;
	
	printf ("请输入两个整数m,n，中间用空格相隔，将会计算出从m加到n的和:\n");
	
	scanf ("%d %d",&b,&c);
	
	while (b<=c)
	{
		a=a+b;
		b=b+1;		
	}
	
	printf ("%d",a);
}