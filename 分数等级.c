//2014/8/23/14：30
//分数等级，记住scanf 要加上&！
//else 后面不能有括号
#include <stdio.h>
int main ()
{
	float s;
	printf ("请输入您的分数:\n");
	
	scanf ("%f",&s);
	
	if ( s>100 )
	    printf ("你为什么这么叼-_-");
	 else if (s<=100 && s>=90)
	    printf  ("恭喜你是优秀哟！");
	 else if (s<90 && s>=80)
	    printf  ("良好！请老师吃饭哟");
	 else if (s<80 && s>=60)
	    printf  ("险险及格,烧香拜佛");
	 else if  (s<60 && s>=0)
	    printf  ("不及格！准备钱重考");
	  else 
	    printf ("世界已经无法阻止你这种傻逼");
	 return 0;
}
	
	