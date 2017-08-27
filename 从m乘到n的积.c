/* 
仿照从m加到n的计算。
2014/08/24/17：13
*/


#include <stdio.h>
int main ()
{
	int a,b,c;
	a=1;
	
	printf ("请输入两个整数中间用空格相隔，将会计算从m到n的乘积：\n");
	
	scanf ("%d %d",&b,&c);
	
	while (b<=c)
	{
		a=a*b;
		b=b+1;
		
	}
	printf ("%d",a);
}