#include <stdio.h>
int main ()
{
	int a,b,c;
	
	printf  ("输入一个整数将输出不大于此数的能被13或17整除的最大的10个自然数之和:\n");
	
	scanf ("%d",&a);
	
	if (a>=68)
       {	for (b=0;b<10;a-=1)
                 {	
                   if (a%13==0||a%17==0)
                      {
                   	c=c+a;
                       b=b+1;
                      }
                  }
            printf ("和为 %d\n",c);
        }
    else 
    printf ("输入有误");
}